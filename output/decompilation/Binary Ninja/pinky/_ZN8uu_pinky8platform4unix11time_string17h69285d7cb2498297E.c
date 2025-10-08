
  int64_t uu_pinky::platform::unix::time_string::h69285d7cb2498297(int128_t* arg1, void* arg2)

{
    void var_48;
    time::format_description::parse::parse::h2897a516b2049b07(&var_48, 
        "[month repr:short] [day padding:…", 0x36);
    int64_t var_70;
    core::result::Result$LT$T$C$E$GT$::unwrap::h20731dfcebb0e6e0(&var_70, &var_48);
    void var_58;
    uucore::features::utmpx::Utmpx::login_time::h4f8d8ed757c914d5(&var_58, arg2);
    int64_t var_68;
    int64_t var_60;
    time::offset_date_time::OffsetDateTime::format::h61f8fcfa1b5ef1be(&var_48, &var_58, var_68, 
        var_60);
    core::result::Result$LT$T$C$E$GT$::unwrap::h494e281e4c6a4354(arg1, &var_48);
    /* tailcall */
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$time..format_description..borrowed_format_item..BorrowedFormatItem$GT$$GT$::he99dfbfa0bc72ba1(var_70, var_68);
}
