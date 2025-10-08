
  fn alacritty_terminal::vi_mode::ViModeCursor::motion::h34ee579e256bd8c7(arg1: i64, arg2: i32, arg3: *mut i32, arg4: i8) -> i64

{
    let mut r14: i32 = arg2;
    let mut result: i64 = arg1;
    let mut var_48: i8;
    let var_40: i32;
    let mut result_1: i64;
    let mut rcx_2: i8;
    let mut rcx_3: i8;
    let mut rcx_4: i32;
    let mut rdx: i32;
    let mut rdx_1: i32;
    let mut rdx_2: i32;
    let mut rdx_10: i32;
    let mut result_2: i64;
    let mut result_3: i64;
    let mut result_4: i64;
    let mut rsi_7: i32;
    let mut rdi: *mut i32;
    let mut rdi_1: *mut i32;
    let mut rdi_2: *mut i32;
    let mut rdi_10: i8;
    let mut r8_1: i32;
    let mut r12_3: i32;
    
    match arg4
    {
        0 =>
        {
            let rax_3: i64 = *arg3.byte_offset(0x50);
            let mut rcx: i32 = 0;
            
            if rax_3 >= *arg3.byte_offset(0xc0)
            {
                rcx = rax_3 - *arg3.byte_offset(0xc0);
            }
            
            if r14 > -(rcx)
            {
                r14 -= 1;
            }
        }
        1 =>
        {
            r12_3 = r14 + 1;
            
            if r12_3 < arg3[0x30]
            {
                r14 = r12_3;
            }
        }
        2 =>
        {
            let mut rax_6: i64;
            let mut rdx_6: i32;
            rax_6 = alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(arg3, 
                result, r14, 0);
            
            if rax_6 != 0
            {
                'label_77377d:
                result = 0;
                
                if rax_6 >= 1
                {
                    result = rax_6 - 1;
                }
                
                r14 = rdx_6;
            }
            else
            {
                let rcx_5: i64 = *arg3.byte_offset(0x50);
                let mut rdx_7: i32 = 0;
                
                if rcx_5 >= *arg3.byte_offset(0xc0)
                {
                    rdx_7 = rcx_5 - *arg3.byte_offset(0xc0);
                }
                
                if rdx_6 <= -(rdx_7)
                {
                    goto 'label_77377d;
                }
                
                r14 = rdx_6 - 1;
                result = *arg3.byte_offset(0xb8) - 1;
                
                if alacritty_terminal::vi_mode::is_wrap::h0d49787c150cddfa(arg3, result, r14) == 0
                {
                    goto 'label_77377d;
                }
            }
        }
        3 =>
        {
            let mut rax_9: i64;
            let mut rdx_12: i32;
            rax_9 = alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(arg3, 
                result, r14, 1);
            r14 = rdx_12;
            
            if alacritty_terminal::vi_mode::is_wrap::h0d49787c150cddfa(arg3, rax_9, rdx_12) == 0
            {
                result =
                    core::cmp::Ord::min::hffab314b5e6491b1(rax_9 + 1, *arg3.byte_offset(0xb8) - 1);
            }
            else
            {
                r14 += 1;
                result = 0;
            }
        }
        4 =>
        {
            let mut rax_5: i64;
            let mut rdx_4: i32;
            rax_5 = alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(arg3, 
                result, r14, 0);
            let mut rbp_1: i32 = rdx_4;
            
            if rax_5 == 0
            {
                let mut i: u8;
                
                do
                {
                    r14 = rbp_1;
                    let rax_19: i64 = *arg3.byte_offset(0x50);
                    let mut rax_20: i32 = rax_19 - *arg3.byte_offset(0xc0);
                    
                    if rax_19 < *arg3.byte_offset(0xc0)
                    {
                        rax_20 = 0;
                    }
                    
                    if rbp_1 <= -(rax_20)
                    {
                        break;
                    }
                    
                    rbp_1 = r14 - 1;
                    i = alacritty_terminal::vi_mode::is_wrap::h0d49787c150cddfa(arg3, 
                        *arg3.byte_offset(0xb8) - 1, rbp_1);
                } while i != 0;
            }
            else
            {
                r14 = rbp_1;
            }
            
            result = 0;
        }
        5 =>
        {
            result_1 = alacritty_terminal::vi_mode::last::h2430a0d27a863faf(arg3, result, r14);
            result = result_1;
            r14 = rdx_10;
        }
        6 =>
        {
            result_1 =
                alacritty_terminal::vi_mode::first_occupied::h5202d98debe22cab(arg3, result, r14);
            result = result_1;
            r14 = rdx_10;
        }
        7 =>
        {
            result = 0;
            r12_3 = 0 - arg3[0x32];
            alacritty_terminal::vi_mode::first_occupied_in_line::h19350108178722bc(&var_48, arg3, 
                r12_3);
            
            if var_48 != 0
            {
                result = var_40;
            }
            
            r14 = r12_3;
        }
        8 =>
        {
            let rax_12: i32 = arg3[0x30];
            r12_3 = !arg3[0x32] + (((rax_12 >> 0x1f) + rax_12) >> 1);
            goto 'label_77391f;
        }
        9 =>
        {
            r12_3 = !arg3[0x32] + arg3[0x30];
            'label_77391f:
            alacritty_terminal::vi_mode::first_occupied_in_line::h19350108178722bc(&var_48, arg3, 
                r12_3);
            
            if var_48 == 0
            {
                result = 0;
                r14 = r12_3;
            }
            else
            {
                result = var_40;
                r14 = r12_3;
            }
        }
        0xa =>
        {
            rdi_2 = arg3;
            result_4 = result;
            rdx_2 = r14;
            rcx_4 = 0;
            goto 'label_7738e4;
        }
        0xb =>
        {
            rdi_2 = arg3;
            result_4 = result;
            rdx_2 = r14;
            rcx_4 = 1;
            'label_7738e4:
            r8_1 = 0;
            goto 'label_7738e7;
        }
        0xc =>
        {
            rdi_2 = arg3;
            result_4 = result;
            rdx_2 = r14;
            rcx_4 = 0;
            r8_1 = 1;
            'label_7738e7:
            result_1 = alacritty_terminal::vi_mode::semantic::h2e9989b1dd410e0b(rdi_2, result_4, 
                rdx_2, rcx_4, r8_1);
            result = result_1;
            r14 = rdx_10;
        }
        0xd =>
        {
            rdi_2 = arg3;
            result_4 = result;
            rdx_2 = r14;
            rcx_4 = 1;
            r8_1 = 1;
            goto 'label_7738e7;
        }
        0xe =>
        {
            rdi_1 = arg3;
            result_3 = result;
            rdx_1 = r14;
            rcx_3 = 0;
            'label_7737a1:
            result_1 = alacritty_terminal::vi_mode::word::h0b987598d52d32e0(rdi_1, result_3, rdx_1, 
                rcx_3, 0);
            result = result_1;
            r14 = rdx_10;
        }
        0xf =>
        {
            rdi_1 = arg3;
            result_3 = result;
            rdx_1 = r14;
            rcx_3 = 1;
            goto 'label_7737a1;
        }
        0x10 =>
        {
            rdi = arg3;
            result_2 = result;
            rdx = r14;
            rcx_2 = 0;
            'label_773834:
            result_1 =
                alacritty_terminal::vi_mode::word::h0b987598d52d32e0(rdi, result_2, rdx, rcx_2, 1);
            result = result_1;
            r14 = rdx_10;
        }
        0x11 =>
        {
            rdi = arg3;
            result_2 = result;
            rdx = r14;
            rcx_2 = 1;
            goto 'label_773834;
        }
        0x12 =>
        {
            alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::bracket_search::h6feec58954ead82f(&var_48, arg3, result, r14);
            
            if var_48 != 0
            {
                let var_38: i8;
                r14 = var_38;
                result = var_40;
            }
        }
        0x13 =>
        {
            let rax_13: i64 = *arg3.byte_offset(0x50);
            let mut r15_2: i32 = 0;
            
            if rax_13 >= *arg3.byte_offset(0xc0)
            {
                r15_2 = rax_13 - *arg3.byte_offset(0xc0);
            }
            
            let r15_3: i32 = -(r15_2);
            let var_40_2: i32 = r15_3;
            let var_3c_2: i32 = r14;
            let var_38_2: i8 = 0;
            var_48 = arg3;
            let mut rax_15: i8;
            let mut rdx_20: i32;
            rax_15 = _$LT$core..iter..adapters..skip_while..SkipWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h4b8ef9528f5e9525(&var_48, arg3);
            
            if (rax_15 & 1) == 0
            {
                rdi_10 = 0;
            }
            else
            {
                rdi_10 = 1;
                rsi_7 = rdx_20;
            }
            
            r14 = core::option::Option$LT$T$GT$::map_or::h475afa0b7c2a4322(rdi_10, rsi_7, r15_3);
            result = 0;
        }
        0x14 =>
        {
            let rbp_3: i32 = arg3[0x30] - 1;
            let var_40_1: i32 = r14;
            let var_3c_1: i32 = rbp_3;
            let var_38_1: i8 = 0;
            var_48 = arg3;
            let mut rax_11: i8;
            let mut rdx_14: i32;
            rax_11 = _$LT$core..iter..adapters..skip_while..SkipWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h523cbfb4c2dfd33d(&var_48, arg3);
            let mut rdx_15: i32;
            
            if (rax_11 & 1) == 0
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
        }
    }
    
    alacritty_terminal::term::Term$LT$T$GT$::scroll_to_point::hb7f2e07c90fd62c4(arg3, r14);
    result
}
