
  fn uu_dd::progress::ProgUpdate::print_transfer_stats::ha89ccd90455ae4e0(arg1: *mut i64, arg2: i32) -> *mut c_void

{
    let result_1: *mut c_void;
    let mut result: *mut c_void = result_1;
    result = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
    let mut rax: *mut i128;
    let mut rdx_1: i64;
    rax = uu_dd::progress::ProgUpdate::write_transfer_stats::h72fbc0aa2e615bbe(arg1, &result, arg2);
    core::result::Result$LT$T$C$E$GT$::unwrap::hfd1ba91060291f04(rax);
    result
}
