
  fn bat::vscreen::Attributes::update_with_sgr::h0729c538a11aeff6(arg1: *mut i128, arg2: i64, arg3: i64) -> i64

{
    let mut var_68: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_68, 
        0x3b, arg2, arg3);
    let mut var_78: i64 = 0;
    let var_70: i64 = arg3;
    let var_38: i16 = 1;
    *arg1.byte_offset(0x108) = 1;
    let mut result: i32 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h824c51f8052ebe40(&var_78);
    
    if result != 2
    {
        do
        {
            if (result & 1) != 0
            {
                bat::vscreen::Attributes::sgr_reset::h10a314ddbb9e99a7(arg1);
            }
            else
            {
                let rsi_1: u16 = result >> 0x10;
                let mut var_b0: i128;
                let var_a0: i64;
                let mut r15_1: *mut c_void;
                
                if rsi_1 > 0x18
                {
                    'label_844d36:
                    
                    if result - 0x1e0000 >= 0xa0000
                    {
                        if result - 0x280000 < 0xa0000
                        {
                            'label_844e25:
                            bat::vscreen::Attributes::parse_color::h678d5e16d2ba0f94(&var_b0, 
                                rsi_1, &var_78);
                            r15_1 = arg1.byte_offset(0x18);
                            goto 'label_844e54;
                        }
                        
                        if (result & 0xfffe0000) == 0x3a0000
                        {
                            bat::vscreen::Attributes::parse_color::h678d5e16d2ba0f94(&var_b0, 
                                rsi_1, &var_78);
                            r15_1 = &arg1[3];
                            goto 'label_844e54;
                        }
                        
                        if result - 0x5a0000 < 0x80000
                        {
                            goto 'label_844d48;
                        }
                        
                        if result - 0x640000 < 0x80000
                        {
                            goto 'label_844e25;
                        }
                    }
                    else
                    {
                        'label_844d48:
                        bat::vscreen::Attributes::parse_color::h678d5e16d2ba0f94(&var_b0, rsi_1, 
                            &var_78);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(
                            arg1);
                        arg1[1] = var_a0;
                        *arg1 = var_b0;
                    }
                }
                else
                {
                    match rsi_1
                    {
                        0 =>
                        {
                            bat::vscreen::Attributes::sgr_reset::h10a314ddbb9e99a7(arg1);
                        }
                        1 =>
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(&var_b0, "\x1b[1mansibool[", 4);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(arg1.byte_offset(0x78));
                            *arg1.byte_offset(0x88) = var_a0;
                            *arg1.byte_offset(0x78) = var_b0;
                        }
                        2 =>
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(&var_b0, "\x1b[2m to l", 4);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&arg1[9]);
                            arg1[0xa] = var_a0;
                            arg1[9] = var_b0;
                        }
                        3 =>
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(&var_b0, &data_4802a8, 4);
                            r15_1 = &arg1[0xc];
                            'label_844e54:
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(r15_1);
                            *r15_1.byte_offset(0x10) = var_a0;
                            *r15_1 = var_b0;
                        }
                        4 =>
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(&var_b0, &data_480bb4, 4);
                            r15_1 = arg1.byte_offset(0xa8);
                            goto 'label_844e54;
                        }
                        5 | 6 | 7 | 8 | 9 | 0xa | 0xb | 0xc | 0xd | 0xe | 0xf | 0x10 | 0x11 | 0x12
                            | 0x13 | 0x14 | 0x15 =>
                        {
                            goto 'label_844d36;
                        }
                        0x16 =>
                        {
                            *arg1.byte_offset(0x88) = 0;
                            arg1[0xa] = 0;
                        }
                        0x17 =>
                        {
                            arg1[0xd] = 0;
                        }
                        0x18 =>
                        {
                            *arg1.byte_offset(0xb8) = 0;
                        }
                    }
                }
            }
            
            result = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h824c51f8052ebe40(&var_78);
        } while result != 2;
    }
    
    result
}
