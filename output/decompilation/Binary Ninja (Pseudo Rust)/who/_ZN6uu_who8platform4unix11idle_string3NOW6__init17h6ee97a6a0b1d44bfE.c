
  fn uu_who::platform::unix::idle_string::NOW::__init::h6ee97a6a0b1d44bf(arg1: *mut i128) -> *mut i128

{
    let mut var_20: ();
    let result: *mut i128 =
        time::offset_date_time::OffsetDateTime::now_local::ha6216f4dd0bbdcbf(&var_20);
    core::result::Result$LT$T$C$E$GT$::unwrap::h103b2f0aec8471b4(arg1, &var_20);
    result
}
