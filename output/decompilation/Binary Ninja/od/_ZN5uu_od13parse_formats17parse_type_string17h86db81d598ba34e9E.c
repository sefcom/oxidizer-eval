
  int64_t uu_od::parse_formats::parse_type_string::h86db81d598ba34e9(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    uint64_t rbx;
    uint64_t var_30 = rbx;
    int64_t var_100 = 0;
    int64_t var_f8 = 8;
    int64_t result = 0;
    int64_t var_a8 = arg2;
    int64_t var_a0 = arg2 + arg3;
    char rax_1;
    int32_t i_2;
    rax_1 = core::str::validations::next_code_point::h48ce1982219e5e58(&var_a8, rbx);
    
    if ((i_2 != 0x110000 & rax_1) == 1)
    {
        int32_t i = i_2;
        int64_t var_e8;
        int64_t* rdi_1 = &var_e8;
        int64_t var_118;
        int64_t* rbx_1 = &var_118;
        
        do
        {
            int32_t i_1 = i;
            uint64_t rbp_1 = i - 0x61;
            char var_e0;
            int64_t var_df;
            void* rax_3;
            int64_t var_c0;
            
            if (rbp_1 > 0x17)
            {
                label_469fc8:
                var_c0 = arg2;
                int64_t var_b8_1 = arg3;
                int32_t* var_b0_1 = &i_1;
                uu_od::parse_formats::parse_type_string::_$u7b$$u7b$closure$u7d$$u7d$::h85deb7467d087753(rdi_1, &var_c0);
                int64_t rcx_1 = var_e8;
                rax_3 = var_e0;
                var_118 = var_df;
                var_118 = var_df;
                
                if (rcx_1 != -0x8000000000000000)
                {
                    int64_t rdx_6 = var_118;
                    arg1[3] = var_118;
                    *(arg1 + 0x11) = rdx_6;
                    arg1[1] = rcx_1;
                    arg1[2] = rax_3;
                    *arg1 = 1;
                    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::h911b774f5eb298b9(var_100, var_f8);
                }
            }
            else
            {
                switch (rbp_1)
                {
                    case 0:
                    {
                        rax_3 = nullptr;
                        break;
                    }
                    case 1:
                    case 4:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 0xa:
                    case 0xb:
                    case 0xc:
                    case 0xd:
                    case 0xf:
                    case 0x10:
                    case 0x11:
                    case 0x12:
                    case 0x13:
                    case 0x15:
                    case 0x16:
                    {
                        goto label_469fc8;
                    }
                    case 2:
                    {
                        rax_3 = 1;
                        break;
                    }
                    case 3:
                    {
                        rax_3 = 2;
                        break;
                    }
                    case 5:
                    {
                        rax_3 = 6;
                        break;
                    }
                    case 0xe:
                    {
                        rax_3 = 3;
                        break;
                    }
                    case 0x14:
                    {
                        rax_3 = 4;
                        break;
                    }
                    case 0x17:
                    {
                        rax_3 = 5;
                        break;
                    }
                }
                
                var_c0 = arg2;
                int64_t var_b8_2 = arg3;
                int32_t* var_b0_2 = &i_1;
            }
            uint64_t r14_1 = rax_3;
            uint8_t r15_1 = 0x2010101010000 >> r14_1 << 3;
            char rax_6;
            int32_t i_3;
            rax_6 = core::str::validations::next_code_point::h48ce1982219e5e58(&var_a8, rbx_1);
            i = i_3;
            
            if (!(rax_6 & 1))
                i = 0x110000;
            
            char var_135 = 0;
            uint64_t var_108;
            
            if (!uu_od::parse_formats::is_format_size_char::h68267824c1e455ac(i, r15_1, &var_135))
            {
                var_118 = 0;
                char* var_110_1 = 1;
                var_108 = 0;
                
                while (uu_od::parse_formats::is_format_size_decimal::h0429fab3d2c9aacb(i, r15_1, 
                    &var_118))
                {
                    char rax_10;
                    int32_t i_5;
                    rax_10 =
                        core::str::validations::next_code_point::h48ce1982219e5e58(&var_a8, rbx_1);
                    i = i_5;
                    
                    if (!(rax_10 & 1))
                        i = 0x110000;
                }
                
                if (var_108)
                {
                    char rax_11;
                    char rdx_3;
                    rax_11 = core::num::_$LT$impl$u20$u8$GT$::from_ascii_radix::h9772a7185930f8d4(
                        var_110_1, var_108);
                    int64_t* var_60 = &var_118;
                    int64_t var_58_1 = arg2;
                    int64_t var_50_1 = arg3;
                    int64_t rax_12;
                    
                    if (rax_11 & 1)
                    {
                        uu_od::parse_formats::parse_type_string::_$u7b$$u7b$closure$u7d$$u7d$::h7d270190361e6d8c(&var_e8, &var_60);
                        rax_12 = var_e8;
                        rdx_3 = var_e0;
                        int64_t var_78_1 = var_df;
                    }
                    
                    if (rax_11 & 1 && rax_12 != -0x8000000000000000)
                    {
                        arg1[3] = var_df;
                        *(arg1 + 0x11) = var_df;
                        arg1[1] = rax_12;
                        arg1[2] = rdx_3;
                        *arg1 = 1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0ecbbb68ed17b0f1(
                            &var_118);
                        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::h911b774f5eb298b9(var_100, var_f8);
                    }
                    
                    var_135 = rdx_3;
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0ecbbb68ed17b0f1(&var_118);
                
                if (i == 0x7a)
                    goto label_46a1b9;
                
                r15_1 = 0;
            }
            else
            {
                char rax_8;
                int32_t i_4;
                rax_8 = core::str::validations::next_code_point::h48ce1982219e5e58(&var_a8, rbx_1);
                
                if (!(rax_8 & 1))
                {
                    i = 0x110000;
                    r15_1 = 0;
                }
                else
                {
                    i = i_4;
                    
                    if (i == 0x7a)
                    {
                        label_46a1b9:
                        char rax_13;
                        int32_t i_6;
                        rax_13 = core::str::validations::next_code_point::h48ce1982219e5e58(
                            &var_a8, rbx_1);
                        i = i_6;
                        
                        if (!(rax_13 & 1))
                            i = 0x110000;
                        
                        r15_1 = 1;
                    }
                    else
                        r15_1 = 0;
                }
            }
            
            uu_od::parse_formats::od_format_type::h8107691a9d67d600(&var_e8, r14_1, var_135);
            int64_t rax_14 = var_e8;
            
            if (rax_14 == 3)
            {
                int64_t var_40_1 = arg3;
                char* var_38_1 = &var_135;
                int64_t var_48 = arg2;
                uu_od::parse_formats::parse_type_string::_$u7b$$u7b$closure$u7d$$u7d$::h7807c5a0fd0cc52f(&var_118, &var_48);
                int128_t zmm0_2 = var_118;
                int128_t var_98_2 = zmm0_2;
                uint64_t var_88_2 = var_108;
                arg1[3] = var_108;
                *(arg1 + 8) = zmm0_2;
                *arg1 = 1;
                return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::h911b774f5eb298b9(var_100, var_f8);
            }
            
            int128_t zmm0_1 = var_e0;
            int128_t var_98_1 = zmm0_1;
            int64_t var_d0;
            int64_t var_88_1 = var_d0;
            var_e0 = zmm0_1;
            var_e8 = rax_14;
            uint8_t var_c8_1 = r15_1;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h50f7d4baac607dc5(&var_100, &var_e8);
            rdi_1 = &var_e8;
        } while (i != 0x110000);
    }
    
    arg1[3] = result;
    *(arg1 + 8) = var_100;
    *arg1 = 0;
    return result;
}
