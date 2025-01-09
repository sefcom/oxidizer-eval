use once_cell::sync::Lazy;
use proc_macro2::TokenTree::{Ident, Literal};
use std::{collections::HashMap, fs, sync::Mutex};
use syn::{visit::Visit, Block, Expr, Stmt};
use walkdir::WalkDir;

// Example:
// {
//     "full_function_name": {
//           "string_literals": {"xxx": 3, "yyy": 4},
//           "function_calls": {"func_1": 4, "func_2": 5},
//           "macro_calls": {"macro_1":5, "macro_2": 6}
//     }
// }
#[derive(Debug, serde::Serialize)]
struct OxidizerSrcAnalyzer {
    func_calls: HashMap<String, usize>,
    macro_calls: HashMap<String, usize>,
    string_literals: HashMap<String, usize>,
}

impl<'ast> Visit<'ast> for OxidizerSrcAnalyzer {
    // Visit statements in the function body
    fn visit_stmt(&mut self, stmt: &'ast Stmt) {
        match stmt {
            Stmt::Macro(macro_call) => {
                let macro_name = macro_call
                    .mac
                    .path
                    .segments
                    .first()
                    .unwrap()
                    .ident
                    .to_string();
                let count = self.macro_calls.entry(macro_name).or_insert(0);
                *count += 1;

                // Check if the macro has string literals as arguments
                for tok in macro_call.mac.tokens.clone().into_iter() {
                    if let Literal(lit) = tok {
                        // Macro string literals will have extra quotes, remove first and last characters if it start with quotes, otherwise do nothing
                        let string_value = if lit.to_string().starts_with("\"") {
                            lit.to_string()[1..lit.to_string().len() - 1].to_string()
                        } else {
                            lit.to_string()
                        };
                        let count = self.string_literals.entry(string_value).or_insert(0);
                        *count += 1;
                    }
                    // Check if the macro has variable arguments that map to string literals
                    else if let Ident(ident) = tok {
                        let map = LIT_STR_MAP.lock().unwrap();
                        if let Some(lit_str) = map.get(&ident.to_string()) {
                            let count =
                                self.string_literals.entry(lit_str.to_string()).or_insert(0);
                            *count += 1;
                        }
                    }
                }
            }
            _ => {}
        }
        syn::visit::visit_stmt(self, stmt);
    }

    // Visit expressions to count function calls
    fn visit_expr(&mut self, expr: &'ast Expr) {
        match expr {
            Expr::Call(call) => {
                if let Expr::Path(path) = &*call.func {
                    // Function call might contain a path with multiple segments, e.g. std::io::println
                    if path.path.segments.len() == 1 {
                        let func_name = path.path.segments.first().unwrap().ident.to_string();
                        let count = self.func_calls.entry(func_name).or_insert(0);
                        *count += 1;
                    } else {
                        let func_name = path.path.segments.last().unwrap().ident.to_string();
                        let count = self.func_calls.entry(func_name).or_insert(0);
                        *count += 1;
                    }

                    // Check if the function call has variable arguments that map to string literals
                    for arg in &call.args {
                        if let Expr::Path(path) = arg {
                            let arg_name = path.path.segments.last().unwrap().ident.to_string();
                            let map = LIT_STR_MAP.lock().unwrap();
                            if let Some(lit_str) = map.get(&arg_name) {
                                let count =
                                    self.string_literals.entry(lit_str.to_string()).or_insert(0);
                                *count += 1;
                            }
                        }
                    }
                }
            }
            Expr::MethodCall(method_call) => {
                let method_name = method_call.method.to_string();
                let count = self.func_calls.entry(method_name).or_insert(0);
                *count += 1;

                // Check if the method call has variable arguments that map to string literals
                for arg in &method_call.args {
                    if let Expr::Path(path) = arg {
                        let arg_name = path.path.segments.last().unwrap().ident.to_string();
                        let map = LIT_STR_MAP.lock().unwrap();
                        if let Some(lit_str) = map.get(&arg_name) {
                            let count =
                                self.string_literals.entry(lit_str.to_string()).or_insert(0);
                            *count += 1;
                        }
                    }
                }
            }
            Expr::Macro(macro_call) => {
                let macro_name = macro_call
                    .mac
                    .path
                    .segments
                    .first()
                    .unwrap()
                    .ident
                    .to_string();
                let count = self.macro_calls.entry(macro_name).or_insert(0);
                *count += 1;

                // Check if the macro has string literals as arguments
                for tok in macro_call.mac.tokens.clone().into_iter() {
                    if let Literal(lit) = tok {
                        // Macro string literals will have extra quotes, remove first and last characters if it start with quotes, otherwise do nothing
                        let string_value = if lit.to_string().starts_with("\"") {
                            lit.to_string()[1..lit.to_string().len() - 1].to_string()
                        } else {
                            lit.to_string()
                        };
                        let count = self.string_literals.entry(string_value).or_insert(0);
                        *count += 1;
                    }
                    // Check if the macro has variable arguments that map to string literals
                    else if let Ident(ident) = tok {
                        let map = LIT_STR_MAP.lock().unwrap();
                        if let Some(lit_str) = map.get(&ident.to_string()) {
                            let count =
                                self.string_literals.entry(lit_str.to_string()).or_insert(0);
                            *count += 1;
                        }
                    }
                }
            }
            Expr::Lit(lit) => {
                // Any string literals in expressions will be counted here, so no need to check in function or method calls' arguments
                if let syn::Lit::Str(lit_str) = &lit.lit {
                    let string_value = lit_str.value();
                    let count = self.string_literals.entry(string_value).or_insert(0);
                    *count += 1;
                }
            }
            _ => {}
        }
        syn::visit::visit_expr(self, expr);
    }
}

static LIT_STR_MAP: Lazy<Mutex<HashMap<String, String>>> = Lazy::new(|| Mutex::new(HashMap::new()));

struct LitStrAnalyzer {}

impl<'ast> Visit<'ast> for LitStrAnalyzer {
    fn visit_item_const(&mut self, item_const: &'ast syn::ItemConst) {
        let mut map = LIT_STR_MAP.lock().unwrap();
        if let syn::Expr::Lit(lit) = &*item_const.expr {
            if let syn::Lit::Str(lit_str) = &lit.lit {
                map.insert(item_const.ident.to_string(), lit_str.value());
            }
        }
        syn::visit::visit_item_const(self, item_const);
    }
    fn visit_item_static(&mut self, item_static: &'ast syn::ItemStatic) {
        let mut map = LIT_STR_MAP.lock().unwrap();
        if let syn::Expr::Lit(lit) = &*item_static.expr {
            if let syn::Lit::Str(lit_str) = &lit.lit {
                map.insert(item_static.ident.to_string(), lit_str.value());
            }
        }
        syn::visit::visit_item_static(self, item_static);
    }
}

fn analyze_fnblock(block: &Block) -> OxidizerSrcAnalyzer {
    let mut analyzer = OxidizerSrcAnalyzer {
        func_calls: HashMap::new(),
        macro_calls: HashMap::new(),
        string_literals: HashMap::new(),
    };

    analyzer.visit_block(&block);
    analyzer
}

fn analyze_file(file_name: &str, file_content: &str) {
    let syntax = syn::parse_file(file_content).expect("Failed to parse file");
    let mut results: HashMap<String, OxidizerSrcAnalyzer> = HashMap::new();

    for item in syntax.items {
        if let syn::Item::Fn(func) = item {
            let full_func_name = format!("{}::{}", file_name, func.sig.ident);
            let analyzer = analyze_fnblock(&func.block);
            results.insert(full_func_name, analyzer);
        } else if let syn::Item::Impl(impl_block) = item {
            let item_name: String = match impl_block.self_ty.as_ref() {
                syn::Type::Path(path) => {
                    let mut names: Vec<String> = Vec::new();
                    for segment in &path.path.segments {
                        names.push(segment.ident.to_string());
                    }
                    names.join("::")
                }
                _ => "".to_string(),
            };
            for item in impl_block.items {
                if let syn::ImplItem::Fn(method) = item {
                    let full_method_name =
                        format!("{}::{}::{}", file_name, item_name, method.sig.ident);
                    let analyzer = analyze_fnblock(&method.block);
                    results.insert(full_method_name, analyzer);
                }
            }
        } else {
            let mut lit_str_analyzer = LitStrAnalyzer {};
            lit_str_analyzer.visit_item(&item);
        }
    }

    // Serialize results to JSON
    let json = serde_json::to_string_pretty(&results).expect("Failed to serialize to JSON");
    let output_file = format!("{}_analysis.json", file_name);
    std::fs::write(&output_file, json).expect("Failed to write JSON file");
    println!("JSON written to {}", output_file);
}

fn analyze_repo(path: &str) {
    for entry in WalkDir::new(path).into_iter().filter_map(Result::ok) {
        if entry
            .path()
            .extension()
            .map(|ext| ext == "rs")
            .unwrap_or(false)
        {
            let content = fs::read_to_string(entry.path()).expect("Failed to read file");
            println!("Analyzing file: {}", entry.path().display());
            // Get file name without extension
            let file_name = entry.path().file_stem().unwrap().to_str().unwrap();
            analyze_file(file_name, &content);
        }
    }
}

fn main() {
    // Receive the path to the repository from the command line
    let repo_path = std::env::args().nth(1).expect("No path provided");
    analyze_repo(&*repo_path);
}
