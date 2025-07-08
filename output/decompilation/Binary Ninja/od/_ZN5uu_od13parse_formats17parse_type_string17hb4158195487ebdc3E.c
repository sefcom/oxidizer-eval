
  int64_t uu_od::parse_formats::parse_type_string::hb4158195487ebdc3(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    uint64_t rbx;
    uint64_t var_30 = rbx;
    int64_t var_d8 = 0;
    int64_t var_d0 = 8;
    int64_t result = 0;
    int64_t var_a8 = arg2;
    int64_t var_a0 = arg2 + arg3;
    int32_t rax_1;
    int32_t i_2;
    rax_1 = core::str::validations::next_code_point::h6c42fc7883874c6b(&var_a8, rbx);
    
    if (rax_1)
    {
        int32_t i = i_2;
        
        if (i_2 != 0x110000)
        {
            int64_t var_118;
            int64_t* rbx_1 = &var_118;
            
            do
            {
                int32_t i_1 = i;
                uint64_t rbp_1 = i - 0x61;
                int64_t var_100;
                char var_f8;
                int64_t var_f7;
                void* rax_3;
                int32_t* var_c0;
                
                if (rbp_1 > 0x17)
                {
                    label_4cb578:
                    var_c0 = &i_1;
                    int64_t var_b8_1 = arg2;
                    int64_t var_b0_1 = arg3;
                    uu_od::parse_formats::parse_type_string::_$u7b$$u7b$closure$u7d$$u7d$::hc6dc8de7beca6039(&var_100, &var_c0);
                    int64_t rcx_1 = var_100;
                    rax_3 = var_f8;
                    var_118 = var_f7;
                    var_118 = var_f7;
                    
                    if (rcx_1 != -0x8000000000000000)
                    {
                        int64_t rdx_5 = var_118;
                        arg1[3] = var_118;
                        *(arg1 + 0x11) = rdx_5;
                        arg1[1] = rcx_1;
                        arg1[2] = rax_3;
                        *arg1 = 1;
                        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&var_d8);
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
                            goto label_4cb578;
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
                    
                    var_c0 = &i_1;
                    int64_t var_b8_2 = arg2;
                    int64_t var_b0_2 = arg3;
                }
                uint64_t r12_1 = rax_3;
                uint8_t r14_1 = 0x2010101010000 >> r12_1 << 3;
                int32_t rax_6;
                int32_t i_3;
                rax_6 = core::str::validations::next_code_point::h6c42fc7883874c6b(&var_a8, rbx_1);
                i = i_3;
                
                if (!rax_6)
                    i = 0x110000;
                
                char var_135 = 0;
                int64_t var_108;
                
                if (!uu_od::parse_formats::is_format_size_char::h42f5b1cb8010d6dd(i, r14_1, 
                    &var_135))
                {
                    var_118 = 0;
                    char* var_110_1 = 1;
                    var_108 = 0;
                    
                    while (uu_od::parse_formats::is_format_size_decimal::h9f07da48a23fad4f(i, 
                        r14_1, &var_118))
                    {
                        int32_t rax_10;
                        int32_t i_5;
                        rax_10 = core::str::validations::next_code_point::h6c42fc7883874c6b(
                            &var_a8, rbx_1);
                        i = i_5;
                        
                        if (!rax_10)
                            i = 0x110000;
                    }
                    
                    if (var_108)
                    {
                        char rax_11;
                        char rdx_3;
                        rax_11 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u8$GT$::from_str::h4c7dd843d3d7bcf1(var_110_1, var_108);
                        int64_t* var_60 = &var_118;
                        int64_t var_58_1 = arg2;
                        int64_t var_50_1 = arg3;
                        int64_t rax_12;
                        
                        if (rax_11 & 1)
                        {
                            uu_od::parse_formats::parse_type_string::_$u7b$$u7b$closure$u7d$$u7d$::h65fc53be62888ca5(&var_100, &var_60);
                            rax_12 = var_100;
                            rdx_3 = var_f8;
                            int64_t var_78_1 = var_f7;
                        }
                        
                        if (rax_11 & 1 && rax_12 != -0x8000000000000000)
                        {
                            arg1[3] = var_f7;
                            *(arg1 + 0x11) = var_f7;
                            arg1[1] = rax_12;
                            arg1[2] = rdx_3;
                            *arg1 = 1;
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&var_118);
                            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&var_d8);
                        }
                        
                        var_135 = rdx_3;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(
                        &var_118);
                    goto label_4cb756;
                }
                
                int32_t rax_8;
                int32_t i_4;
                rax_8 = core::str::validations::next_code_point::h6c42fc7883874c6b(&var_a8, rbx_1);
                
                if (!rax_8)
                {
                    r14_1 = 0;
                    i = 0x110000;
                }
                else
                {
                    i = i_4;
                    label_4cb756:
                    
                    if (i != 0x7a)
                        r14_1 = 0;
                    else
                    {
                        int32_t rax_13;
                        int32_t i_6;
                        rax_13 = core::str::validations::next_code_point::h6c42fc7883874c6b(
                            &var_a8, rbx_1);
                        i = i_6;
                        
                        if (!rax_13)
                            i = 0x110000;
                        
                        r14_1 = 1;
                    }
                }
                
                uu_od::parse_formats::od_format_type::h6c27c20666861ca9(&var_100, r12_1, var_135);
                int64_t rax_14 = var_100;
                
                if (rax_14 == 3)
                {
                    int64_t var_40_1 = arg2;
                    int64_t var_38_1 = arg3;
                    char* var_48 = &var_135;
                    uu_od::parse_formats::parse_type_string::_$u7b$$u7b$closure$u7d$$u7d$::hc6eb34f6de81c0fa(&var_118, &var_48);
                    int128_t zmm0_2 = var_118;
                    int128_t var_98_2 = zmm0_2;
                    int64_t var_88_2 = var_108;
                    arg1[3] = var_108;
                    *(arg1 + 8) = zmm0_2;
                    *arg1 = 1;
                    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&var_d8);
                }
                
                int128_t zmm0_1 = var_f8;
                int128_t var_98_1 = zmm0_1;
                int64_t var_e8;
                int64_t var_88_1 = var_e8;
                var_f8 = zmm0_1;
                var_100 = rax_14;
                uint8_t var_e0_1 = r14_1;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdb693d9c78fd2861(&var_d8, &var_100);
            } while (i != 0x110000);
        }
    }
    
    arg1[3] = result;
    *(arg1 + 8) = var_d8;
    *arg1 = 0;
    return result;
}
