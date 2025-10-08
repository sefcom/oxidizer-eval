
  uint64_t alacritty::main::h1cfb109198f960b6()

{
    void var_4b8;
    alacritty::cli::Options::new::h88f1eeef51587883(&var_4b8);
    int64_t var_358;
    int64_t result;
    void var_408;
    void var_338;
    void var_320;
    void var_308;
    void var_2f0;
    
    if (var_358 == -0x7fffffffffffffff)
    {
        alacritty::migrate::migrate::hd130364cc6c1f643(&var_408);
        label_8708dc:
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h6a0f98c288fb7106(&var_320);
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hce944beccab591c0(&var_308);
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hce944beccab591c0(&var_2f0);
        core::ptr::drop_in_place$LT$alacritty..cli..ParsedOptions$GT$::h0ec9507b6108d3fc(&var_338);
        result = 0;
    }
    else
    {
        if (var_358 == -0x7ffffffffffffffe)
        {
            void var_1f8;
            memcpy(&var_1f8, &var_4b8, 0x1f0);
            return alacritty::alacritty::h7b6e2cff16345a38(&var_1f8);
        }
        
        void var_2c8;
        memcpy(&var_2c8, &var_408, 0xd0);
        int64_t result_1 = alacritty::msg::h6c8ae6430e00480e(&var_2c8);
        result = result_1;
        
        if (!result_1)
            goto label_8708dc;
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h6a0f98c288fb7106(&var_320);
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hce944beccab591c0(&var_308);
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hce944beccab591c0(&var_2f0);
        core::ptr::drop_in_place$LT$alacritty..cli..ParsedOptions$GT$::h0ec9507b6108d3fc(&var_338);
    }
    core::ptr::drop_in_place$LT$alacritty..cli..WindowOptions$GT$::hd1c78ed5333b3944(&var_4b8);
    return result;
}
