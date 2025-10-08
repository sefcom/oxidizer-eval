
  fn uu_who::platform::unix::time_string::hf7b3fb93d48ce0b2(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut var_48: ();
    time::format_description::parse::parse::h2897a516b2049b07(&var_48, 
        "[month repr:short] [day padding:…", 0x36);
    let mut var_70: i64;
    core::result::Result$LT$T$C$E$GT$::unwrap::hf95feabee4ed30af(&var_70, &var_48);
    let mut var_58: ();
    uucore::features::utmpx::Utmpx::login_time::h4f8d8ed757c914d5(&var_58, arg2);
    let var_68: i64;
    let var_60: i64;
    time::offset_date_time::OffsetDateTime::format::h2dec6e59d72ce7da(&var_48, &var_58, var_68, 
        var_60);
    core::result::Result$LT$T$C$E$GT$::unwrap::h928c3eeb66335618(arg1, &var_48);
    /* tailcall */
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$time..format_description..borrowed_format_item..BorrowedFormatItem$GT$$GT$::h5f1bac215f3d6f86(var_70, var_68)
}
