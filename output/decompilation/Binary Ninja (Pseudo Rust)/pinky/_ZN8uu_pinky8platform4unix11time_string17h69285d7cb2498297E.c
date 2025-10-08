
  fn uu_pinky::platform::unix::time_string::h69285d7cb2498297(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut var_48: ();
    time::format_description::parse::parse::h2897a516b2049b07(&var_48, 
        "[month repr:short] [day padding:…", 0x36);
    let mut var_70: i64;
    core::result::Result$LT$T$C$E$GT$::unwrap::h20731dfcebb0e6e0(&var_70, &var_48);
    let mut var_58: ();
    uucore::features::utmpx::Utmpx::login_time::h4f8d8ed757c914d5(&var_58, arg2);
    let var_68: i64;
    let var_60: i64;
    time::offset_date_time::OffsetDateTime::format::h61f8fcfa1b5ef1be(&var_48, &var_58, var_68, 
        var_60);
    core::result::Result$LT$T$C$E$GT$::unwrap::h494e281e4c6a4354(arg1, &var_48);
    /* tailcall */
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$time..format_description..borrowed_format_item..BorrowedFormatItem$GT$$GT$::he99dfbfa0bc72ba1(var_70, var_68)
}
