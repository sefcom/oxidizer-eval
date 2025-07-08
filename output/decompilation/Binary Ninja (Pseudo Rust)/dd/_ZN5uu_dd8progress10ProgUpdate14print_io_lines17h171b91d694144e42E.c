
  fn uu_dd::progress::ProgUpdate::print_io_lines::h171b91d694144e42(arg1: *mut c_void) -> *mut c_void

{
    let result_1: *mut c_void;
    let mut result: *mut c_void = result_1;
    result = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
    core::result::Result$LT$T$C$E$GT$::unwrap::hc71a0300cb397bcb(
        uu_dd::progress::ProgUpdate::write_io_lines::h21e0c6ac1bc632a9(arg1, &result));
    result
}
