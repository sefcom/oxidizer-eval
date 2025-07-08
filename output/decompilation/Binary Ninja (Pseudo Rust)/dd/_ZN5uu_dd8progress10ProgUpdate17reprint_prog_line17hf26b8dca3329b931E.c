
  fn uu_dd::progress::ProgUpdate::reprint_prog_line::hf26b8dca3329b931(arg1: *mut i64) -> *mut c_void

{
    let result_1: *mut c_void;
    let mut result: *mut c_void = result_1;
    result = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
    let mut rax: *mut i128;
    let mut rdx: i64;
    rax = uu_dd::progress::ProgUpdate::write_prog_line::h73fbaadaf172cb94(arg1, &result, 1);
    core::result::Result$LT$T$C$E$GT$::unwrap::hfd1ba91060291f04(rax);
    result
}
