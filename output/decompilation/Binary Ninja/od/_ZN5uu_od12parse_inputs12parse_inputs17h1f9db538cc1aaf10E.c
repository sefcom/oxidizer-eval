
  int64_t uu_od::parse_inputs::parse_inputs::h1f9db538cc1aaf10(int128_t* arg1, void* arg2)

{
    int64_t var_70;
    _$LT$clap_builder..parser..matches..arg_matches..ArgMatches$u20$as$u20$uu_od..parse_inputs..CommandLineOpts$GT$::inputs::hd5c4f428119deff7(&var_70, arg2);
    int64_t* rsi_1;
    int64_t rdi_9;
    int64_t* var_68;
    int64_t var_60;
    
    if (!_$LT$clap_builder..parser..matches..arg_matches..ArgMatches$u20$as$u20$uu_od..parse_inputs..CommandLineOpts$GT$::opts_present::hc8a26ccd0056d3c1(arg2, &data_502680, 1))
    {
        if (var_60 - 1 >= 2)
        {
            if (!var_60)
                alloc::vec::Vec$LT$T$C$A$GT$::push::hacc0453763c86b18(&var_70);
            
            goto label_46a752;
        }
        
        int128_t var_58;
        int64_t var_48;
        
        if (_$LT$clap_builder..parser..matches..arg_matches..ArgMatches$u20$as$u20$uu_od..parse_inputs..CommandLineOpts$GT$::opts_present::hc8a26ccd0056d3c1(arg2, &data_502690, 6))
        {
            label_46a752:
            core::iter::traits::iterator::Iterator::collect::h449e225e68ca9fd4(&var_58, var_68);
            arg1[1] = var_48;
            *arg1 = var_58;
            arg1[2] = 2;
            rdi_9 = var_70;
            rsi_1 = var_68;
        }
        else
        {
            int64_t r12_2 = (var_60 - 1) << 4;
            int64_t var_40;
            uu_od::parse_inputs::parse_offset_operand::ha005a18be9ae1bf0(&var_40, 
                *(var_68 + r12_2), *(var_68 + r12_2 + 8));
            
            if (var_40)
                goto label_46a752;
            
            int64_t r13_1 = *var_68;
            uint64_t r12_3 = var_68[1];
            
            if (var_60 != 1)
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(&var_58, r13_1, r12_3);
            else
            {
                var_58 = 0;
                
                if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha3dd105fff9094a1(
                        r13_1, r12_3, 
                        core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2b, &var_58), 1))
                    goto label_46a752;
                
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(&var_58, "-traditionaladdress-radixread-by…", 1);
            }
            
            arg1[1] = var_48;
            *arg1 = var_58;
            int64_t var_38;
            *(arg1 + 0x18) = var_38;
            arg1[2] = 0;
            rdi_9 = var_70;
            rsi_1 = var_68;
        }
    }
    else
    {
        uu_od::parse_inputs::parse_inputs_traditional::h309c9994ef0b8cb9(arg1, var_68, var_60);
        rdi_9 = var_70;
        rsi_1 = var_68;
    }
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h6028a1e48c9fce9b(rdi_9, 
        rsi_1);
}
