
  int64_t bat::vscreen::Attributes::update_with_sgr::h0729c538a11aeff6(int128_t* arg1, int64_t arg2, int64_t arg3)

{
    void var_68;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_68, 
        0x3b, arg2, arg3);
    int64_t var_78 = 0;
    int64_t var_70 = arg3;
    int16_t var_38 = 1;
    *(arg1 + 0x108) = 1;
    int32_t result = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h824c51f8052ebe40(&var_78);
    
    if (result != 2)
    {
        do
        {
            if (result & 1)
                bat::vscreen::Attributes::sgr_reset::h10a314ddbb9e99a7(arg1);
            else
            {
                uint16_t rsi_1 = result >> 0x10;
                int128_t var_b0;
                int64_t var_a0;
                void* r15_1;
                
                if (rsi_1 > 0x18)
                {
                    label_844d36:
                    
                    if (result - 0x1e0000 >= 0xa0000)
                    {
                        if (result - 0x280000 < 0xa0000)
                        {
                            label_844e25:
                            bat::vscreen::Attributes::parse_color::h678d5e16d2ba0f94(&var_b0, 
                                rsi_1, &var_78);
                            r15_1 = arg1 + 0x18;
                            goto label_844e54;
                        }
                        
                        if ((result & 0xfffe0000) == 0x3a0000)
                        {
                            bat::vscreen::Attributes::parse_color::h678d5e16d2ba0f94(&var_b0, 
                                rsi_1, &var_78);
                            r15_1 = &arg1[3];
                            goto label_844e54;
                        }
                        
                        if (result - 0x5a0000 < 0x80000)
                            goto label_844d48;
                        
                        if (result - 0x640000 < 0x80000)
                            goto label_844e25;
                    }
                    else
                    {
                        label_844d48:
                        bat::vscreen::Attributes::parse_color::h678d5e16d2ba0f94(&var_b0, rsi_1, 
                            &var_78);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(
                            arg1);
                        arg1[1] = var_a0;
                        *arg1 = var_b0;
                    }
                }
                else
                    switch (rsi_1)
                    {
                        case 0:
                        {
                            bat::vscreen::Attributes::sgr_reset::h10a314ddbb9e99a7(arg1);
                            break;
                        }
                        case 1:
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(&var_b0, "\x1b[1mansibool[", 4);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(arg1 + 0x78);
                            *(arg1 + 0x88) = var_a0;
                            *(arg1 + 0x78) = var_b0;
                            break;
                        }
                        case 2:
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(&var_b0, "\x1b[2m to l", 4);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&arg1[9]);
                            arg1[0xa] = var_a0;
                            arg1[9] = var_b0;
                            break;
                        }
                        case 3:
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(&var_b0, &data_4802a8, 4);
                            r15_1 = &arg1[0xc];
                            label_844e54:
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(r15_1);
                            *(r15_1 + 0x10) = var_a0;
                            *r15_1 = var_b0;
                            break;
                        }
                        case 4:
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(&var_b0, &data_480bb4, 4);
                            r15_1 = arg1 + 0xa8;
                            goto label_844e54;
                        }
                        case 5:
                        case 6:
                        case 7:
                        case 8:
                        case 9:
                        case 0xa:
                        case 0xb:
                        case 0xc:
                        case 0xd:
                        case 0xe:
                        case 0xf:
                        case 0x10:
                        case 0x11:
                        case 0x12:
                        case 0x13:
                        case 0x14:
                        case 0x15:
                        {
                            goto label_844d36;
                        }
                        case 0x16:
                        {
                            *(arg1 + 0x88) = 0;
                            arg1[0xa] = 0;
                            break;
                        }
                        case 0x17:
                        {
                            arg1[0xd] = 0;
                            break;
                        }
                        case 0x18:
                        {
                            *(arg1 + 0xb8) = 0;
                            break;
                        }
                    }
            }
            
            result = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h824c51f8052ebe40(&var_78);
        } while (result != 2);
    }
    
    return result;
}
