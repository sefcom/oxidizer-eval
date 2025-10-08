
  fn uu_dd::progress::ProgUpdate::print_transfer_stats::h7b7c0ec0b63533bd(arg1: *mut i64, arg2: i32) -> *mut c_void

{
    let result_1: *mut c_void;
    let mut result: *mut c_void = result_1;
    result = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
    let mut rax: u64;
    let mut rdx_1: i64;
    rax = uu_dd::progress::ProgUpdate::write_transfer_stats::h3ac3caa704374d4a(arg1, &result, arg2);
    core::result::Result$LT$T$C$E$GT$::unwrap::hccc281bd37fe7c9a(rax);
    result
}
