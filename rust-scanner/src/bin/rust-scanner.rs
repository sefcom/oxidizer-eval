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
use rustc_hir::{def::DefKind, intravisit::Visitor};
use rustc_interface::Queries;
use rustc_middle::{
    mir::{Operand, TerminatorKind},
    ty::TyCtxt,
};
use std::env;

struct CompilerCallBacks;

struct FnVisitor<'tcx> {
    tcx: TyCtxt<'tcx>,
}

impl<'hir, 'tcx> Visitor<'hir> for FnVisitor<'tcx> {
    fn visit_fn(
        &mut self,
        fk: rustc_hir::intravisit::FnKind<'hir>,
        fd: &'hir rustc_hir::FnDecl<'hir>,
        b: rustc_hir::BodyId,
        _: rustc_span::Span,
        def_id: rustc_hir::def_id::LocalDefId,
    ) -> Self::Result {
        let module_name = self.tcx.def_path_str(def_id);
        let full_name: String;
        match self.tcx.sess.opts.crate_name.as_ref() {
            Some(crate_name) => {
                // If in a crate, save the function name with the crate and function name
                full_name = format!("{}::{}", crate_name, module_name);
            }
            _ => {
                // If not in a crate, save the function name
                full_name = format!("{}", module_name);
            }
        }
        let body = self.tcx.build_mir(def_id);
        if full_name.contains("send_file") {
            dbg!(body);
        }
        // for block in body.basic_blocks.into_iter() {
        //     let kind = &block.terminator().kind;
        //     match kind {
        //         TerminatorKind::Call {
        //             func,
        //             args: _,
        //             destination: _,
        //             target: _,
        //             unwind: _,
        //             call_source: _,
        //             fn_span: _,
        //         } => match func {
        //             Operand::Constant(op) => {
        //                 println!("{}---{}", full_name, op.to_string());
        //             }
        //             _ => {}
        //         },
        //         _ => {}
        //     };
        // }
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
                        let full_name: String;
                        match tcx.sess.opts.crate_name.as_ref() {
                            Some(crate_name) => {
                                // If in a crate, save the function name with the crate and function name
                                full_name = format!("{}::{}", crate_name, module_name);
                            }
                            _ => {
                                // If not in a crate, save the function name
                                full_name = format!("{}", module_name);
                            }
                        }
                        let body = tcx.build_mir(def_id);
                        for block in body.basic_blocks.into_iter() {
                            let kind = &block.terminator().kind;
                            match kind {
                                TerminatorKind::Call {
                                    func,
                                    args: _,
                                    destination: _,
                                    target: _,
                                    unwind: _,
                                    call_source: _,
                                    fn_span: _,
                                } => match func {
                                    Operand::Constant(op) => {
                                        println!("{}---{}", full_name, op.to_string());
                                    }
                                    _ => {}
                                },
                                _ => {}
                            };
                        }
                    }
                    _ => {}
                }
            }
            // hir.visit_all_item_likes_in_crate(&mut FnVisitor { tcx: tcx });
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
