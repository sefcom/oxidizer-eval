
  int128_t* uu_od::prn_char::format_item_c::h520e3cbf8a33f91d(int128_t* arg1, char* arg2, int64_t arg3)

{
    if (!arg3)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
        /* no return */
    }
    
    int128_t* result = arg1;
    int64_t rax = *arg2;
    char var_71 = rax;
    void* const var_60;
    void** rax_3;
    void* var_70;
    void** var_30;
    void* const rax_2;
    
    if (rax < 0)
    {
        if (rax < 0xc0)
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(result, "  **\x1b[1mKindboolmut kindAuto/", 4);
            return result;
        }
        
        arg1 = arg3 != 1;
        int64_t rsi_1;
        
        if (!(arg1 & (rax & 0xe0) == 0xc0))
        {
            arg1 = arg3 >= 3;
            
            if (!(arg1 & (rax & 0xf0) == 0xe0))
            {
                rax &= 0xf8;
                rax = rax == 0xf0;
                
                if (!(arg3 >= 4 & rax))
                {
                    var_30 = &var_71;
                    uint64_t (* var_28_2)(char* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i8$GT$::fmt::h1c61e1fbdca52982;
                    var_60 = &data_503838;
                    int64_t var_58_3 = 1;
                    rax_2 = &data_41d1f8;
                    goto label_46b0c9;
                }
                
                rsi_1 = 4;
            }
            else
                rsi_1 = 3;
        }
        else
            rsi_1 = 2;
        
        char* rax_5;
        int64_t rdx_1;
        rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h3318d31b00465fcc(0, rsi_1, arg2, arg3);
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_30, rax_5, rdx_1);
        void* const rax_6;
        
        if (var_30 != 1)
        {
            int64_t var_28;
            int128_t var_18 = var_28;
            var_70 = &var_18;
            int64_t (* var_68_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
            var_60 = &data_41a940;
            int64_t var_58_2 = 1;
            rax_6 = &data_41d150;
        }
        else
        {
            var_70 = &var_71;
            uint64_t (* var_68_1)(char* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i8$GT$::fmt::h1c61e1fbdca52982;
            var_60 = &data_503838;
            int64_t var_58_1 = 1;
            rax_6 = &data_41d1f8;
        }
        
        void* const var_40_1 = rax_6;
        int64_t var_38_1 = 1;
        rax_3 = &var_70;
    }
    else
    {
        var_70 = &(&uu_od::prn_char::C_CHARS::hf9c44c07aa090c89)[rax * 2];
        var_30 = &var_70;
        int64_t (* var_28_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1b019627656d27e4;
        var_60 = &data_41a940;
        int64_t var_58 = 1;
        rax_2 = &data_41d150;
        label_46b0c9:
        void* const var_40 = rax_2;
        int64_t var_38 = 1;
        rax_3 = &var_30;
    }
    void** var_50 = rax_3;
    int64_t var_48 = 1;
    core::option::Option$LT$T$GT$::map_or_else::h56b2ee9aee1b26d0(result, &var_60);
    return result;
}
