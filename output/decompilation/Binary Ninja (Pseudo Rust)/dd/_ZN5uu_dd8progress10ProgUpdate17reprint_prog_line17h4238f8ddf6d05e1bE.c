
  fn uu_dd::progress::ProgUpdate::reprint_prog_line::h4238f8ddf6d05e1b(arg1: *mut i64) -> *mut c_void

{
    let result_1: *mut c_void;
    let mut result: *mut c_void = result_1;
    result = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
    let mut rax: u64;
    let mut rdx: i64;
    rax = uu_dd::progress::ProgUpdate::write_prog_line::h98858b211566047a(arg1, &result, 1);
    core::result::Result$LT$T$C$E$GT$::unwrap::hccc281bd37fe7c9a(rax);
    result
}
