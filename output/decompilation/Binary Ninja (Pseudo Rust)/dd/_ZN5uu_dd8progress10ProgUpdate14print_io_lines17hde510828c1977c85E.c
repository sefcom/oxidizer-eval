
  fn uu_dd::progress::ProgUpdate::print_io_lines::hde510828c1977c85(arg1: *mut c_void) -> *mut c_void

{
    let result_1: *mut c_void;
    let mut result: *mut c_void = result_1;
    result = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
    core::result::Result$LT$T$C$E$GT$::unwrap::hcdcab5fcc9db8db2(
        uu_dd::progress::ProgUpdate::write_io_lines::hb8d567bd29ca3197(arg1, &result));
    result
}
