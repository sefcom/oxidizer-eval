
  void* alacritty::cli::ParsedOptions::override_config_rc::h35ab90cde0bbb7d9(void* arg1, void* arg2)

{
    void* result = arg2;
    void* var_868 = arg2;
    
    if (*(arg1 + 0x10))
    {
        void var_860;
        _$LT$alacritty..config..ui_config..UiConfig$u20$as$u20$core..clone..Clone$GT$::clone::he1d2f8f7f6ea9593(&var_860, result + 0x10);
        alacritty::cli::ParsedOptions::override_config::hf97b5b294eb97d07(arg1, &var_860);
        void var_430;
        memcpy(&var_430, &var_860, 0x420);
        int64_t var_440 = 1;
        int64_t var_438_1 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h4b5907c012952b91(&var_440);
        core::ptr::drop_in_place$LT$alloc..rc..Rc$LT$alacritty..config..ui_config..UiConfig$GT$$GT$::h077aa8980e2272c3(&var_868);
    }
    
    return result;
}
