
  char const* const metal_crusher::fun::detect_terminal::hbf6d36db98f6afb5()

{
    char const* const var_168 = "kgxghosttykonsolealacrittygnome-…";
    int64_t var_160 = 3;
    char const* const var_158 = "ghosttykonsolealacrittygnome-ter…";
    int64_t var_150 = 7;
    char const* const var_148 = "konsolealacrittygnome-terminalxt…";
    int64_t var_140 = 7;
    char const* const var_138 = "alacrittygnome-terminalxtermpkil…";
    int64_t var_130 = 9;
    char const* const var_128 = "gnome-terminalxtermpkill -n naut…";
    int64_t var_120 = 0xe;
    char const* const var_118 = "xtermpkill -n nautiluspkill -n n…";
    int64_t var_110 = 5;
    int64_t var_108 = 0;
    int64_t var_100 = 6;
    
    while (true)
    {
        char* result_2;
        int64_t rdx_1;
        result_2 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf76594f8d4e56c08(&var_168);
        
        if (!result_2)
        {
            core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$6_usize$GT$$GT$::hb72d9e67272cfa2f();
            return "sh-c/usr/bin/kgxghosttykonsoleal…";
        }
        
        char* result_1 = result_2;
        int64_t var_1a0_1 = rdx_1;
        int64_t* var_178 = &result_1;
        int64_t (* var_170_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0847ff0da4c1d6d7;
        void** const var_e0 = &data_9966c8;
        int64_t var_d8_1 = 1;
        int64_t var_c0_1 = 0;
        int64_t** var_d0_1 = &var_178;
        int64_t var_c8_1 = 1;
        int128_t var_f8;
        core::option::Option$LT$T$GT$::map_or_else::h1648c532ac184ddc(&var_f8, &var_e0);
        int128_t var_198 = var_f8;
        int64_t var_e8;
        int64_t var_188_1 = var_e8;
        std::fs::metadata::h0f112b0c82c2b173(&var_e0, *var_198[8]);
        int32_t rbp_1 = var_e0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hd0cd0de30ef23329(&var_e0);
        
        if (rbp_1 != 2)
        {
            char const* const result = result_1;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha04b33545db7d743(&var_198);
            core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$6_usize$GT$$GT$::hb72d9e67272cfa2f();
            return result;
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha04b33545db7d743(&var_198);
    }
}
