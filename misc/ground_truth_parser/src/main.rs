#![feature(rustc_private)]

extern crate rustc_ast;
extern crate rustc_ast_pretty;
extern crate rustc_driver;
extern crate rustc_hir;
extern crate rustc_interface;
extern crate rustc_middle;
extern crate rustc_session;
extern crate rustc_span;

use rustc_ast::token::{LitKind, TokenKind};
use rustc_ast::tokenstream::TokenTree;
use rustc_ast::visit::{self, Visitor};
use rustc_ast::{AssocItemKind, BinOpKind::*};
use rustc_ast::{Expr, ExprKind, Item, ItemKind, MacCall, StmtKind};
use rustc_driver::{run_compiler, Callbacks, Compilation};
use rustc_interface::interface::Compiler;
use rustc_span::{FileName, RealFileName};
use serde::Serialize;
use std::collections::HashMap;
use std::env;
use std::ffi::OsStr;
use std::panic::{self, AssertUnwindSafe};
use std::path::{Path, PathBuf};
use std::process;
use walkdir::{DirEntry, WalkDir};

struct Analyzer {
    ident_to_str: HashMap<String, String>,
    results: HashMap<String, FuncAnalyzer>,
}

impl Callbacks for Analyzer {
    fn after_crate_root_parsing(
        &mut self,
        compiler: &Compiler,
        krate: &mut rustc_ast::Crate,
    ) -> Compilation {
        let mut const_visitor = ConstVisitor {
            ident_to_str: &mut self.ident_to_str,
        };
        const_visitor.visit_crate(krate);
        let mut visitor = AstFuncVisitor {
            compiler,
            results: &mut self.results,
            ident_to_str: &const_visitor.ident_to_str,
        };
        visitor.visit_crate(krate);

        Compilation::Stop
    }
}

struct ConstVisitor<'a> {
    ident_to_str: &'a mut HashMap<String, String>,
}

impl<'a> Visitor<'a> for ConstVisitor<'a> {
    fn visit_item(&mut self, item: &'a Item) {
        if let ItemKind::Static(static_box) = &item.kind {
            let static_item = static_box.as_ref();
            let expr = static_item.expr.as_deref().unwrap();
            if let ExprKind::Lit(lit) = &expr.kind {
                if let LitKind::Str = lit.kind {
                    let s = lit.symbol.to_string();
                    self.ident_to_str.insert(static_item.ident.to_string(), s);
                }
            }
        }
        visit::walk_item(self, item);
    }
}

struct AstFuncVisitor<'a> {
    compiler: &'a Compiler,
    results: &'a mut HashMap<String, FuncAnalyzer>,
    ident_to_str: &'a HashMap<String, String>,
}

impl<'a> Visitor<'a> for AstFuncVisitor<'a> {
    fn visit_item(&mut self, item: &'a Item) {
        match &item.kind {
            ItemKind::Fn(fn_box) => {
                let fn_struct = fn_box.as_ref();
                let body = fn_struct.body.as_deref().unwrap();
                let sm = self.compiler.sess.source_map();
                let span = item.span;
                let loc_start = sm.lookup_char_pos(span.lo());
                if let FileName::Real(RealFileName::LocalPath(file)) = &loc_start.file.name {
                    let loc_end = sm.lookup_char_pos(span.hi());
                    let loc = loc_end.line - loc_start.line + 1;
                    let decl_file = Path::new(file).canonicalize().unwrap();
                    let decl_line = format!("{}:{}", decl_file.display(), loc_start.line);

                    let mut result = FuncAnalyzer {
                        loc: loc,
                        string_literals: HashMap::new(),
                        macros: HashMap::new(),
                        calls: HashMap::new(),
                        nofops: 0,
                        mcc: 2,
                        ident_to_str: self.ident_to_str.clone(),
                    };
                    if let Some(last_stmt) = body.stmts.last() {
                        if let StmtKind::Expr(_) = last_stmt.kind {
                            result.mcc -= 1;
                        }
                    }
                    visit::walk_block(&mut result, body);
                    // println!("Function name: {:?}", fn_struct.ident);
                    // println!("Decl line: {}", decl_line);
                    // println!("  LoC: {:?}", result.loc);
                    // println!("  String literals: {:?}", result.string_literals);
                    // println!("  Macro calls: {:?}", result.macros);
                    // println!("  Function calls: {:?}", result.calls);
                    // println!("  Number of Operators: {}", result.nofops);
                    // println!();
                    self.results.insert(decl_line, result);
                }
            }
            ItemKind::Impl(impl_block) => {
                for inner_item in impl_block.items.iter() {
                    if let AssocItemKind::Fn(fn_box) = &inner_item.kind {
                        let fn_struct = fn_box.as_ref();
                        let body = fn_struct.body.as_deref().unwrap();
                        let sm = self.compiler.sess.source_map();
                        let span = inner_item.span;
                        let loc_start = sm.lookup_char_pos(span.lo());
                        if let FileName::Real(RealFileName::LocalPath(file)) = &loc_start.file.name
                        {
                            let loc_end = sm.lookup_char_pos(span.hi());
                            let loc = loc_end.line - loc_start.line + 1;
                            let decl_file = Path::new(file).canonicalize().unwrap();
                            let decl_line = format!("{}:{}", decl_file.display(), loc_start.line);

                            let mut result = FuncAnalyzer {
                                loc,
                                string_literals: HashMap::new(),
                                macros: HashMap::new(),
                                calls: HashMap::new(),
                                nofops: 0,
                                mcc: 2,
                                ident_to_str: self.ident_to_str.clone(),
                            };
                            if let Some(last_stmt) = body.stmts.last() {
                                if let StmtKind::Expr(_) = last_stmt.kind {
                                    result.mcc -= 1;
                                }
                            }
                            visit::walk_block(&mut result, body);
                            // println!("Impl method: {:?}", fn_struct.ident);
                            self.results.insert(decl_line, result);
                        }
                    }
                }
            }
            _ => {
                visit::walk_item(self, item);
            }
        }
    }
}

#[derive(Debug, Serialize)]
struct FuncAnalyzer {
    loc: usize,
    string_literals: HashMap<String, usize>,
    macros: HashMap<String, usize>,
    calls: HashMap<String, usize>,
    nofops: usize,
    mcc: isize,
    ident_to_str: HashMap<String, String>,
}

impl<'a> Visitor<'a> for FuncAnalyzer {
    fn visit_expr(&mut self, expr: &'a Expr) {
        match &expr.kind {
            ExprKind::Path(_, path) => {
                let last_segment = path.segments.last();
                if let Some(last_segment) = last_segment {
                    let ident = last_segment.ident;
                    if let Some(replacement) = self.ident_to_str.get(&ident.to_string()) {
                        *self
                            .string_literals
                            .entry(replacement.to_string())
                            .or_insert(0) += 1;
                    }
                }
            }
            ExprKind::Closure(_) => {
                return;
            }
            ExprKind::Lit(lit) => {
                if let LitKind::Str = lit.kind {
                    *self
                        .string_literals
                        .entry(lit.symbol.to_string())
                        .or_insert(0) += 1;
                }
            }
            ExprKind::Call(func_expr, _) => {
                if let ExprKind::Path(_, path) = &func_expr.kind {
                    if let Some(segment) = path.segments.last() {
                        let name = segment.ident.name.to_string();
                        *self.calls.entry(name).or_insert(0) += 1;
                    }
                }
            }
            ExprKind::MethodCall(mc) => {
                let name = mc.seg.ident.name.to_string();
                *self.calls.entry(name).or_insert(0) += 1;
            }
            ExprKind::Binary(op, ..) => {
                if matches!(op.node, And | Or) {
                    self.mcc += 1;
                }
                self.nofops += 1;
            }
            ExprKind::Match(_, arms, _) => {
                for arm in arms {
                    let num_patterns = match &arm.pat.kind {
                        rustc_ast::PatKind::Or(pats) => pats.len(),
                        _ => 1,
                    };
                    self.mcc += num_patterns as isize;
                }
            }
            ExprKind::Ret(..) => {
                self.mcc -= 1;
            }
            ExprKind::Unary(..) | ExprKind::AssignOp(..) => self.nofops += 1,
            ExprKind::If(..)
            | ExprKind::While(..)
            | ExprKind::Loop(..)
            | ExprKind::ForLoop { .. } => {
                self.mcc += 1;
            }
            ExprKind::Block(block, _) => {
                if let Some(last_stmt) = block.stmts.last() {
                    if let StmtKind::Expr(_) = last_stmt.kind {
                        self.mcc -= 1;
                    }
                }
            }
            _ => {}
        }
        visit::walk_expr(self, expr);
    }

    fn visit_mac_call(&mut self, mac: &'a MacCall) {
        let macro_name = mac.path.segments.last().unwrap().ident.name.to_string();
        *self.macros.entry(macro_name).or_insert(0) += 1;
        let token_trees = mac.args.tokens.iter();
        for tree in token_trees {
            match tree {
                TokenTree::Token(token, _spacing) => {
                    match &token.kind {
                        TokenKind::Literal(lit) => {
                            if let LitKind::Str = lit.kind {
                                *self
                                    .string_literals
                                    .entry(lit.symbol.to_string())
                                    .or_insert(0) += 1;
                            }
                        }
                        _ => { /* punctuation, keywords, etc. */ }
                    }
                }
                _ => {}
            }
        }
    }

    fn visit_stmt(&mut self, stmt: &'a rustc_ast::Stmt) {
        if let StmtKind::Let(..) = &stmt.kind {
            self.nofops += 1
        }
        visit::walk_stmt(self, stmt);
    }
}

fn parse(file_path: &PathBuf, edition: &str) -> HashMap<String, FuncAnalyzer> {
    let args = vec![
        "ignored".to_string(),
        file_path.to_str().unwrap().to_string(),
        format!("--edition={}", edition),
    ];

    let caught = panic::catch_unwind(AssertUnwindSafe(|| {
        let mut analyzer = Analyzer {
            ident_to_str: HashMap::new(),
            results: HashMap::new(),
        };
        run_compiler(&args, &mut analyzer);
        analyzer.results // return from the closure
    }));

    match caught {
        Ok(results) => results,
        Err(_) => {
            eprintln!(
                "Compiler panicked while processing {:?} with edition {}",
                file_path, edition
            );
            HashMap::new()
        }
    }
}

fn is_not_target(entry: &DirEntry) -> bool {
    entry
        .file_name()
        .to_str()
        .map(|s| s != "target")
        .unwrap_or(true)
}

fn parse_repo(repo_path: &PathBuf, output_path: &PathBuf, edition: &str) {
    let mut results: HashMap<String, FuncAnalyzer> = HashMap::new();
    for entry in WalkDir::new(repo_path)
        .into_iter()
        .filter_entry(|e| is_not_target(e))
        .filter_map(|e| e.ok())
    {
        let path = entry.path();
        // Skip if this entry is a directory
        if !entry.file_type().is_file() {
            continue;
        }
        if let Some("rs") = path.extension().and_then(OsStr::to_str) {
            results.extend(parse(&path.to_path_buf(), edition));
        }
    }
    let json = serde_json::to_string_pretty(&results).expect("Failed to serialize to JSON");
    std::fs::write(output_path, json).expect("Failed to write JSON file");
    println!("JSON written to {}", output_path.display());
}

fn main() {
    let args: Vec<String> = env::args().collect();

    if args.len() < 3 || args.len() > 4 {
        eprintln!("Usage: {} <repo_path> <output_json> [edition]", args[0]);
        process::exit(1);
    }

    let repo_path = Path::new(&args[1]).to_path_buf();
    let output_path = Path::new(&args[2]).to_path_buf();
    let edition = if args.len() == 4 { &args[3] } else { "2024" };

    parse_repo(&repo_path, &output_path, edition);
}
