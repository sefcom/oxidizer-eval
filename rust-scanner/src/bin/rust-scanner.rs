#![feature(rustc_private)]

extern crate rustc_driver;
extern crate rustc_error_codes;
extern crate rustc_errors;
extern crate rustc_hash;
extern crate rustc_hir;
extern crate rustc_interface;
extern crate rustc_middle;
extern crate rustc_session;
extern crate rustc_span;

use rustc_driver::Compilation;
use rustc_hir::{
    def::DefKind,
    intravisit::{self, Visitor},
    ExprKind,
};
use rustc_interface::Queries;
use rustc_middle::{
    mir::{Operand, TerminatorKind},
    ty::TyCtxt,
};
use std::env;

struct CompilerCallBacks;

struct FnVisitor<'tcx> {
    tcx: TyCtxt<'tcx>,
    func_name: String,
}

impl<'hir, 'tcx> Visitor<'hir> for FnVisitor<'tcx> {
    fn visit_expr(&mut self, expr: &'hir rustc_hir::Expr<'hir>) -> Self::Result {
        let def_id = self.tcx.hir().enclosing_body_owner(expr.hir_id);
        if let Some(body) = self.tcx.hir().maybe_body_owned_by(def_id) {
            let typeck_results = self.tcx.typeck_body(body.id());
            match &expr.kind {
                ExprKind::Call(target, _args) => {
                    if let ExprKind::Path(ref qpath) = target.kind {
                        if let Some(def_id) =
                            typeck_results.qpath_res(qpath, target.hir_id).opt_def_id()
                        {
                            let target_name = self.tcx.def_path_str(def_id);
                            println!("{}---{}", self.func_name, target_name);
                        }
                    }
                }
                ExprKind::MethodCall(..) => {
                    if let Some((_, def_id)) = typeck_results.type_dependent_def(expr.hir_id) {
                        // Get the full path of the method being called
                        let method_full_path = self.tcx.def_path_str(def_id);
                        println!("{}---{}", self.func_name, method_full_path);
                    }
                }
                _ => {}
            }
        }
        intravisit::walk_expr(self, expr);
    }
}

impl rustc_driver::Callbacks for CompilerCallBacks {
    fn after_crate_root_parsing<'tcx>(
        &mut self,
        _compiler: &rustc_interface::interface::Compiler,
        queries: &'tcx Queries<'tcx>,
    ) -> Compilation {
        queries.global_ctxt().unwrap().enter(|tcx| {
            let hir = tcx.hir();
            for def_id in hir.body_owners() {
                let kind = tcx.def_kind(def_id);
                match kind {
                    DefKind::Fn | DefKind::AssocFn => {
                        let module_name = tcx.def_path_str(def_id);
                        let func_name = match tcx.sess.opts.crate_name.as_ref() {
                            Some(crate_name) => {
                                // If in a crate, save the function name with the crate and function name
                                format!("{}::{}", crate_name, module_name)
                            }
                            _ => {
                                // If not in a crate, save the function name
                                format!("{}", module_name)
                            }
                        };
                        if let Some(body) = tcx.hir().maybe_body_owned_by(def_id) {
                            let mut visitor = FnVisitor { tcx, func_name };
                            intravisit::walk_body(&mut visitor, body);
                        }
                    }
                    _ => {}
                }
            }
        });
        Compilation::Continue
    }
}

fn main() {
    let args: Vec<String> = env::args().collect();
    let mut callbacks = CompilerCallBacks {};
    let exit_code = rustc_driver::catch_with_exit_code(|| {
        rustc_driver::RunCompiler::new(&args, &mut callbacks).run()
    });
    std::process::exit(exit_code)
}
