
  int64_t alacritty::display::Display::make_not_current::h2c3ba043ffd444c2(void* arg1)

{
    char result = _$LT$glutin..context..PossiblyCurrentContext$u20$as$u20$glutin..context..PossiblyCurrentGlContext$GT$::is_current::hfbaab1a9cf077597(arg1 + 0x2a8);
    
    if (result)
    {
        void var_50;
        result = _$LT$glutin..context..PossiblyCurrentContext$u20$as$u20$glutin..context..PossiblyCurrentGlContext$GT$::make_not_current_in_place::h2d2fa4c8da054bfd(&var_50, arg1 + 0x2a8);
        core::result::Result$LT$T$C$E$GT$::expect::he18683c3aeadddae(&var_50, 
            "failed to disable contextContext…", 0x19);
    }
    
    return result;
}
