
  int64_t alacritty_terminal::vi_mode::ViModeCursor::motion::h34ee579e256bd8c7(int64_t arg1, int32_t arg2, int32_t* arg3, char arg4)

{
    int32_t r14 = arg2;
    int64_t result = arg1;
    char var_48;
    int32_t var_40;
    int64_t result_1;
    char rcx_2;
    char rcx_3;
    int32_t rcx_4;
    int32_t rdx;
    int32_t rdx_1;
    int32_t rdx_2;
    int32_t rdx_10;
    int64_t result_2;
    int64_t result_3;
    int64_t result_4;
    int32_t rsi_7;
    int32_t* rdi;
    int32_t* rdi_1;
    int32_t* rdi_2;
    char rdi_10;
    int32_t r8_1;
    int32_t r12_3;
    
    switch (arg4)
    {
        case 0:
        {
            int64_t rax_3 = *(arg3 + 0x50);
            int32_t rcx = 0;
            
            if (rax_3 >= *(arg3 + 0xc0))
                rcx = rax_3 - *(arg3 + 0xc0);
            
            if (r14 > -(rcx))
                r14 -= 1;
            break;
        }
        case 1:
        {
            r12_3 = r14 + 1;
            
            if (r12_3 < arg3[0x30])
                r14 = r12_3;
            break;
        }
        case 2:
        {
            int64_t rax_6;
            int32_t rdx_6;
            rax_6 = alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(arg3, 
                result, r14, 0);
            
            if (rax_6)
            {
                label_77377d:
                result = 0;
                
                if (rax_6 >= 1)
                    result = rax_6 - 1;
                
                r14 = rdx_6;
            }
            else
            {
                int64_t rcx_5 = *(arg3 + 0x50);
                int32_t rdx_7 = 0;
                
                if (rcx_5 >= *(arg3 + 0xc0))
                    rdx_7 = rcx_5 - *(arg3 + 0xc0);
                
                if (rdx_6 <= -(rdx_7))
                    goto label_77377d;
                
                r14 = rdx_6 - 1;
                result = *(arg3 + 0xb8) - 1;
                
                if (!alacritty_terminal::vi_mode::is_wrap::h0d49787c150cddfa(arg3, result, r14))
                    goto label_77377d;
            }
            break;
        }
        case 3:
        {
            int64_t rax_9;
            int32_t rdx_12;
            rax_9 = alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(arg3, 
                result, r14, 1);
            r14 = rdx_12;
            
            if (!alacritty_terminal::vi_mode::is_wrap::h0d49787c150cddfa(arg3, rax_9, rdx_12))
                result = core::cmp::Ord::min::hffab314b5e6491b1(rax_9 + 1, *(arg3 + 0xb8) - 1);
            else
            {
                r14 += 1;
                result = 0;
            }
            break;
        }
        case 4:
        {
            int64_t rax_5;
            int32_t rdx_4;
            rax_5 = alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(arg3, 
                result, r14, 0);
            int32_t rbp_1 = rdx_4;
            
            if (!rax_5)
            {
                uint8_t i;
                
                do
                {
                    r14 = rbp_1;
                    int64_t rax_19 = *(arg3 + 0x50);
                    int32_t rax_20 = rax_19 - *(arg3 + 0xc0);
                    
                    if (rax_19 < *(arg3 + 0xc0))
                        rax_20 = 0;
                    
                    if (rbp_1 <= -(rax_20))
                        break;
                    
                    rbp_1 = r14 - 1;
                    i = alacritty_terminal::vi_mode::is_wrap::h0d49787c150cddfa(arg3, 
                        *(arg3 + 0xb8) - 1, rbp_1);
                } while (i);
            }
            else
                r14 = rbp_1;
            
            result = 0;
            break;
        }
        case 5:
        {
            result_1 = alacritty_terminal::vi_mode::last::h2430a0d27a863faf(arg3, result, r14);
            result = result_1;
            r14 = rdx_10;
            break;
        }
        case 6:
        {
            result_1 =
                alacritty_terminal::vi_mode::first_occupied::h5202d98debe22cab(arg3, result, r14);
            result = result_1;
            r14 = rdx_10;
            break;
        }
        case 7:
        {
            result = 0;
            r12_3 = 0 - arg3[0x32];
            alacritty_terminal::vi_mode::first_occupied_in_line::h19350108178722bc(&var_48, arg3, 
                r12_3);
            
            if (var_48)
                result = var_40;
            
            r14 = r12_3;
            break;
        }
        case 8:
        {
            int32_t rax_12 = arg3[0x30];
            r12_3 = ~arg3[0x32] + (((rax_12 >> 0x1f) + rax_12) >> 1);
            goto label_77391f;
        }
        case 9:
        {
            r12_3 = ~arg3[0x32] + arg3[0x30];
            label_77391f:
            alacritty_terminal::vi_mode::first_occupied_in_line::h19350108178722bc(&var_48, arg3, 
                r12_3);
            
            if (!var_48)
            {
                result = 0;
                r14 = r12_3;
            }
            else
            {
                result = var_40;
                r14 = r12_3;
            }
            break;
        }
        case 0xa:
        {
            rdi_2 = arg3;
            result_4 = result;
            rdx_2 = r14;
            rcx_4 = 0;
            goto label_7738e4;
        }
        case 0xb:
        {
            rdi_2 = arg3;
            result_4 = result;
            rdx_2 = r14;
            rcx_4 = 1;
            label_7738e4:
            r8_1 = 0;
            goto label_7738e7;
        }
        case 0xc:
        {
            rdi_2 = arg3;
            result_4 = result;
            rdx_2 = r14;
            rcx_4 = 0;
            r8_1 = 1;
            label_7738e7:
            result_1 = alacritty_terminal::vi_mode::semantic::h2e9989b1dd410e0b(rdi_2, result_4, 
                rdx_2, rcx_4, r8_1);
            result = result_1;
            r14 = rdx_10;
            break;
        }
        case 0xd:
        {
            rdi_2 = arg3;
            result_4 = result;
            rdx_2 = r14;
            rcx_4 = 1;
            r8_1 = 1;
            goto label_7738e7;
        }
        case 0xe:
        {
            rdi_1 = arg3;
            result_3 = result;
            rdx_1 = r14;
            rcx_3 = 0;
            label_7737a1:
            result_1 = alacritty_terminal::vi_mode::word::h0b987598d52d32e0(rdi_1, result_3, rdx_1, 
                rcx_3, 0);
            result = result_1;
            r14 = rdx_10;
            break;
        }
        case 0xf:
        {
            rdi_1 = arg3;
            result_3 = result;
            rdx_1 = r14;
            rcx_3 = 1;
            goto label_7737a1;
        }
        case 0x10:
        {
            rdi = arg3;
            result_2 = result;
            rdx = r14;
            rcx_2 = 0;
            label_773834:
            result_1 =
                alacritty_terminal::vi_mode::word::h0b987598d52d32e0(rdi, result_2, rdx, rcx_2, 1);
            result = result_1;
            r14 = rdx_10;
            break;
        }
        case 0x11:
        {
            rdi = arg3;
            result_2 = result;
            rdx = r14;
            rcx_2 = 1;
            goto label_773834;
        }
        case 0x12:
        {
            alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::bracket_search::h6feec58954ead82f(&var_48, arg3, result, r14);
            
            if (var_48)
            {
                char var_38;
                r14 = var_38;
                result = var_40;
            }
            break;
        }
        case 0x13:
        {
            int64_t rax_13 = *(arg3 + 0x50);
            int32_t r15_2 = 0;
            
            if (rax_13 >= *(arg3 + 0xc0))
                r15_2 = rax_13 - *(arg3 + 0xc0);
            
            int32_t r15_3 = -(r15_2);
            int32_t var_40_2 = r15_3;
            int32_t var_3c_2 = r14;
            char var_38_2 = 0;
            var_48 = arg3;
            char rax_15;
            int32_t rdx_20;
            rax_15 = _$LT$core..iter..adapters..skip_while..SkipWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h4b8ef9528f5e9525(&var_48, arg3);
            
            if (!(rax_15 & 1))
                rdi_10 = 0;
            else
            {
                rdi_10 = 1;
                rsi_7 = rdx_20;
            }
            
            r14 = core::option::Option$LT$T$GT$::map_or::h475afa0b7c2a4322(rdi_10, rsi_7, r15_3);
            result = 0;
            break;
        }
        case 0x14:
        {
            int32_t rbp_3 = arg3[0x30] - 1;
            int32_t var_40_1 = r14;
            int32_t var_3c_1 = rbp_3;
            char var_38_1 = 0;
            var_48 = arg3;
            char rax_11;
            int32_t rdx_14;
            rax_11 = _$LT$core..iter..adapters..skip_while..SkipWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h523cbfb4c2dfd33d(&var_48, arg3);
            int32_t rdx_15;
            
            if (!(rax_11 & 1))
            {
                rdi_10 = 0;
                rdx_15 = rbp_3;
            }
            else
            {
                rdi_10 = 1;
                rsi_7 = rdx_14;
                rdx_15 = rbp_3;
            }
            
            r14 = core::option::Option$LT$T$GT$::map_or::h475afa0b7c2a4322(rdi_10, rsi_7, rdx_15);
            result = 0;
            break;
        }
    }
    
    alacritty_terminal::term::Term$LT$T$GT$::scroll_to_point::hb7f2e07c90fd62c4(arg3, r14);
    return result;
}
