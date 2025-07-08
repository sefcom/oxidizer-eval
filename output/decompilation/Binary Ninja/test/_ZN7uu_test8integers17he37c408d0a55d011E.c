
  int64_t uu_test::integers::he37c408d0a55d011(int64_t* arg1, char* arg2, int64_t arg3, char* arg4, int64_t arg5, char* arg6, int64_t arg7)

{
    int64_t var_78;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_78, arg2, arg3);
    int64_t result;
    
    if (var_78)
    {
        label_4ace99:
        var_78 = 1;
        char* var_70_1 = arg2;
        int64_t var_68_1 = arg3;
        label_4aceab:
        char var_60_1 = 1;
        int128_t var_48;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&var_48, 
            &var_78);
        int128_t zmm0_1 = var_48;
        int64_t result_1;
        result = result_1;
        *arg1 = 5;
        *(arg1 + 8) = zmm0_1;
        arg1[3] = result;
    }
    else
    {
        char* var_70;
        uint64_t var_68;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i128$GT$::from_str::hc8dce56db4b142c5(&var_78, var_70, var_68);
        
        if (var_78)
            goto label_4ace99;
        
        char var_60;
        int64_t rbp_1 = var_60;
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_78, arg4, arg5);
        
        if (var_78)
        {
            label_4acf1e:
            var_78 = 1;
            char* var_70_2 = arg4;
            int64_t var_68_2 = arg5;
            goto label_4aceab;
        }
        
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i128$GT$::from_str::hc8dce56db4b142c5(&var_78, var_70, var_68);
        
        if (var_78)
            goto label_4acf1e;
        
        int64_t r15_1 = var_60;
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_78, arg6, arg7);
        
        if (!var_78)
        {
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_70, var_68, "-eq-ne-gt-ge-lt-le-ef-nt-ot", 3))
            {
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_70, var_68, "-ne-gt-ge-lt-le-ef-nt-ot", 3))
                {
                    bool s_1;
                    bool o_1;
                    
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_70, var_68, "-gt-ge-lt-le-ef-nt-ot", 3))
                    {
                        bool s_2;
                        bool o_2;
                        
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_70, var_68, "-ge-lt-le-ef-nt-ot", 3))
                        {
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_70, var_68, "-lt-le-ef-nt-ot", 3))
                            {
                                s_1 = rbp_1 - r15_1 < 0;
                                o_1 = /* o_1 = unimplemented  {sbb rbp, qword [rsp+0x28]} */;
                                goto label_4ad024;
                            }
                            
                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_70, var_68, "-le-ef-nt-ot", 3))
                                goto label_4acf5a;
                            
                            bool c_4 = var_68 < var_68;
                            int64_t var_50_3 = r15_1 - rbp_1;
                            s_2 = r15_1 - rbp_1 < 0;
                            o_2 = /* o_2 = unimplemented  {sbb qword [rsp+0x28], rbp} */;
                        }
                        else
                        {
                            s_2 = rbp_1 - r15_1 < 0;
                            o_2 = /* o_2 = unimplemented  {sbb rbp, qword [rsp+0x28]} */;
                        }
                        
                        result = s_2 == o_2;
                        arg1[1] = result;
                        *arg1 = 7;
                    }
                    else
                    {
                        bool c_1 = var_68 < var_68;
                        int64_t var_50_2 = r15_1 - rbp_1;
                        s_1 = r15_1 - rbp_1 < 0;
                        o_1 = /* o_1 = unimplemented  {sbb qword [rsp+0x28], rbp} */;
                        label_4ad024:
                        result = s_1 != o_1;
                        arg1[1] = result;
                        *arg1 = 7;
                    }
                }
                else
                {
                    result = rbp_1 != r15_1;
                    arg1[1] = result;
                    *arg1 = 7;
                }
            }
            else
            {
                result = rbp_1 == r15_1;
                arg1[1] = result;
                *arg1 = 7;
            }
        }
        else
        {
            label_4acf5a:
            var_78 = 1;
            char* var_70_3 = arg6;
            int64_t var_68_3 = arg7;
            char var_60_2 = 1;
            result = _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(
                &arg1[1], &var_78);
            *arg1 = 4;
        }
    }
    
    return result;
}
