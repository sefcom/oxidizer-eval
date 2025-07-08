
  int64_t* uu_seq::numberparse::parse_no_decimal_no_exponent::h94839c74700e929c(int64_t* arg1, char* arg2, void* arg3)

{
    uint64_t r14 = arg3;
    int64_t var_68;
    bigdecimal::impl_num::_$LT$impl$u20$num_traits..Num$u20$for$u20$bigdecimal..BigDecimal$GT$::from_str_radix::h190f4d397e37218e(&var_68, arg2, arg3);
    int128_t var_98;
    
    if (var_68 != -0x8000000000000000)
    {
        var_98 = var_68;
        
        if (!uu_seq::numberparse::is_minus_zero_int::h47d80c233c19cf6c(arg2, r14, &var_98))
        {
            int64_t var_48;
            arg1[4] = var_48;
            int128_t zmm0_3 = var_98;
            int128_t var_58;
            *(arg1 + 0x10) = var_58;
            *arg1 = zmm0_3;
            arg1[5] = r14;
            arg1[6] = 0;
            
            if (var_68 == -0x8000000000000000)
                core::ptr::drop_in_place$LT$core..result..Result$LT$bigdecimal..BigDecimal$C$bigdecimal..ParseBigDecimalError$GT$$GT$::h894d82047a2fe72d(&var_68);
        }
        else
        {
            *arg1 = -0x7ffffffffffffffe;
            arg1[5] = r14;
            arg1[6] = 0;
            core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304(&var_98);
            label_4cdbec:
            
            if (var_68 == -0x8000000000000000)
                core::ptr::drop_in_place$LT$core..result..Result$LT$bigdecimal..BigDecimal$C$bigdecimal..ParseBigDecimalError$GT$$GT$::h894d82047a2fe72d(&var_68);
        }
    }
    else
    {
        void var_40;
        alloc::str::_$LT$impl$u20$str$GT$::to_ascii_lowercase::h8cd21fd193cd3011(&var_40, arg2, 
            r14);
        int64_t r13_1 = -0x8000000000000000;
        int64_t var_38;
        uint64_t var_30;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb94513a628a0df55(var_38, var_30, "inf-infinitynansrc/uu/seq/src/nu…", 3))
        {
            r13_1 = -0x8000000000000000;
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb94513a628a0df55(var_38, var_30, &data_416bc0, 8))
                goto label_4cdb6a;
            
            r13_1 = -0x7fffffffffffffff;
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb94513a628a0df55(var_38, var_30, "-infhelpNoneshimname\x1b[0m    C…", 4))
                goto label_4cdb6a;
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb94513a628a0df55(var_38, var_30, "-infinitynansrc/uu/seq/src/numbe…", 9))
                goto label_4cdb6a;
            
            char rax_9 = 1;
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb94513a628a0df55(var_38, var_30, "nansrc/uu/seq/src/numberparse.rs…", 3))
                rax_9 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb94513a628a0df55(var_38, var_30, "-nanBOLDBlue\x1b[4mSomedumb\x1b[…", 4);
            
            arg1[1] = rax_9;
            *arg1 = -0x7ffffffffffffffc;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbf11645ab5eda60b(&var_40);
            goto label_4cdbec;
        }
        
        label_4cdb6a:
        var_98 = r13_1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbf11645ab5eda60b(&var_40);
        int64_t var_78;
        arg1[4] = var_78;
        int128_t zmm0_2 = var_98;
        int128_t var_88;
        *(arg1 + 0x10) = var_88;
        *arg1 = zmm0_2;
        *(arg1 + 0x28) = {0};
        
        if (var_68 == -0x8000000000000000)
            core::ptr::drop_in_place$LT$core..result..Result$LT$bigdecimal..BigDecimal$C$bigdecimal..ParseBigDecimalError$GT$$GT$::h894d82047a2fe72d(&var_68);
    }
    return arg1;
}
