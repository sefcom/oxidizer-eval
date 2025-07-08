
  int64_t uu_test::parser::Parser::expect::h264bdd99a51ab46d(int64_t* arg1)

{
    int64_t rbp;
    int64_t var_8 = rbp;
    int32_t var_70;
    void* rsi;
    uu_test::parser::Parser::next_token::hec2da245067de41f(&var_70, rsi);
    int128_t var_68;
    int64_t var_48;
    
    if (var_70 != 3)
    {
        label_4aed72:
        var_48 = 0;
        char const* const var_40_1 = ")";
        int64_t var_38_1 = 1;
        char var_30_1 = 1;
        rbp = 1;
        int128_t var_28;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&var_28, 
            &var_48);
        int64_t var_18;
        arg1[3] = var_18;
        *(arg1 + 8) = var_28;
        *arg1 = 1;
        
        if (var_70 == 3)
            return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(
                &var_68);
    }
    else
    {
        rbp = 1;
        int64_t var_60;
        uint64_t var_58;
        
        if (!_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(var_60, var_58))
            goto label_4aed72;
        
        uint64_t var_38 = var_58;
        var_48 = var_68;
        *arg1 = 7;
        int64_t result =
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_48);
        
        if (var_70 == 3)
            return result;
    }
    return core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_70);
}
