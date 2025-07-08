
  int128_t* uu_cat::get_input_type::h6ff27855215d6960(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    int128_t* result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h09045d22b44111b2(arg2, arg3, "-src/uu/cat/src/cat.rs\t$\n^M^I^…", 1);
    
    if (!result)
    {
        int32_t var_c8;
        std::fs::metadata::h3e125373b8ea3fd1(&var_c8, arg2);
        char var_e0;
        
        if (var_c8 != 2)
        {
            int32_t var_90;
            int32_t var_e4 = var_90;
            uint64_t rax_5 = ((var_90 & 0xf000) - 0x1000) >> 0xc;
            
            if (rax_5 > 0xb)
            {
                label_4af4c3:
                var_e0 = &var_e4;
                int64_t (* var_d8_1)(int64_t arg1, void* arg2) =
                    _$LT$std..fs..FileType$u20$as$u20$core..fmt..Debug$GT$::fmt::h1f46686f72d55e02;
                var_c8 = &data_414590;
                int64_t var_c0_1 = 1;
                int64_t var_a8_1 = 0;
                char* var_b8_1 = &var_e0;
                int64_t var_b0_1 = 1;
                return core::option::Option$LT$T$GT$::map_or_else::h4b4049542ff9b626(arg1, &var_c8);
            }
            
            result = jump_table_41cbac[rax_5] + &jump_table_41cbac;
            
            switch (result)
            {
                case 0x4af492:
                {
                    arg1[1] = 6;
                    break;
                }
                case 0x4af4be:
                {
                    goto label_4af4c3;
                }
                case 0x4af517:
                {
                    arg1[1] = 3;
                    break;
                }
                case 0x4af520:
                {
                    arg1[1] = 5;
                    break;
                }
                case 0x4af529:
                {
                    arg1[1] = 7;
                    break;
                }
                case 0x4af532:
                {
                    arg1[1] = 0;
                    break;
                }
                case 0x4af53b:
                {
                    arg1[1] = 4;
                    break;
                }
                case 0x4af544:
                {
                    arg1[1] = 1;
                    break;
                }
            }
            
            *arg1 = -0x7ffffffffffffffa;
        }
        else
        {
            int64_t var_c0;
            int64_t var_d0 = var_c0;
            std::io::error::repr_bitpacked::decode_repr::h387b6a13e4bd8d9a(&var_e0, var_c0);
            result = jump_table_41cbdc[var_e0] + &jump_table_41cbdc;
            int32_t var_dc;
            
            switch (result)
            {
                case 0x4af49b:
                {
                    if (var_dc == 0x28)
                    {
                        *arg1 = -0x7ffffffffffffffb;
                        return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf0d35f7c4ff0a311(&var_d0);
                    }
                    break;
                }
            }
            
            *arg1 = -0x8000000000000000;
            arg1[1] = var_c0;
        }
    }
    else
    {
        arg1[1] = 2;
        *arg1 = -0x7ffffffffffffffa;
    }
    
    return result;
}
