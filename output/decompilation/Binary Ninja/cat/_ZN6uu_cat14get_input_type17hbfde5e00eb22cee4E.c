
  int128_t* uu_cat::get_input_type::hbfde5e00eb22cee4(int64_t* arg1, char* arg2, int64_t arg3)

{
    int128_t* result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h736b8881c243fae3(arg2, arg3);
    
    if (!result)
    {
        int32_t var_c8;
        std::fs::metadata::hb2e8532d2d3376be(&var_c8, arg2);
        char var_e0;
        
        if (var_c8 != 2)
        {
            int32_t var_90;
            int32_t var_e4 = var_90;
            uint64_t rax_3 = ((var_90 & 0xf000) - 0x1000) >> 0xc;
            
            if (rax_3 > 0xb)
            {
                label_45e842:
                var_e0 = &var_e4;
                int64_t (* var_d8_1)(int64_t arg1, int64_t* arg2) =
                    _$LT$std..fs..FileType$u20$as$u20$core..fmt..Debug$GT$::fmt::h44181ef67d9b0947;
                var_c8 = &data_419be0;
                int64_t var_c0_1 = 1;
                int64_t var_a8_1 = 0;
                char* var_b8_1 = &var_e0;
                int64_t var_b0_1 = 1;
                return core::option::Option$LT$T$GT$::map_or_else::hca5ca0cd9da1a1e1(arg1, &var_c8);
            }
            
            result = jump_table_41a77c[rax_3] + &jump_table_41a77c;
            
            switch (result)
            {
                case 0x45e81c:
                {
                    arg1[1] = 6;
                    break;
                }
                case 0x45e83d:
                {
                    goto label_45e842;
                }
                case 0x45e893:
                {
                    arg1[1] = 3;
                    break;
                }
                case 0x45e89c:
                {
                    arg1[1] = 5;
                    break;
                }
                case 0x45e8a5:
                {
                    arg1[1] = 7;
                    break;
                }
                case 0x45e8ae:
                {
                    arg1[1] = 0;
                    break;
                }
                case 0x45e8b7:
                {
                    arg1[1] = 4;
                    break;
                }
                case 0x45e8c0:
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
            result =
                std::io::error::repr_bitpacked::decode_repr::h8d92c8d03cfdadcc(&var_e0, var_c0);
            int32_t var_dc;
            
            if (!var_e0 && var_dc == 0x28)
            {
                *arg1 = -0x7ffffffffffffffb;
                return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h22e0abbd25cf35a1(
                    &var_d0);
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
