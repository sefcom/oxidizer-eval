
  fn alacritty::cli::ParsedOptions::override_config_rc::h35ab90cde0bbb7d9(arg1: *mut c_void, arg2: *mut c_void) -> *mut c_void

{
    let mut result: *mut c_void = arg2;
    let mut var_868: *mut c_void = arg2;
    
    if *arg1.byte_offset(0x10) != 0
    {
        let mut var_860: ();
        _$LT$alacritty..config..ui_config..UiConfig$u20$as$u20$core..clone..Clone$GT$::clone::he1d2f8f7f6ea9593(&var_860, result.byte_offset(0x10));
        alacritty::cli::ParsedOptions::override_config::hf97b5b294eb97d07(arg1, &var_860);
        let mut var_430: ();
        memcpy(&var_430, &var_860, 0x420);
        let mut var_440: i64 = 1;
        let var_438_1: i64 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h4b5907c012952b91(&var_440);
        core::ptr::drop_in_place$LT$alloc..rc..Rc$LT$alacritty..config..ui_config..UiConfig$GT$$GT$::h077aa8980e2272c3(&var_868);
    }
    
    result
}
