
  int64_t uu_test::integers::hff2dbabf66e3b69d(int64_t* arg1, char* arg2, int64_t arg3, char* arg4, int64_t arg5, char* arg6, int64_t arg7)

{
    int32_t var_78;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_78, arg2, arg3);
    int64_t result;
    
    if (var_78 == 1)
    {
        label_4592c7:
        var_78 = 1;
        char* var_70_1 = arg2;
        int64_t var_68_1 = arg3;
        label_4592d9:
        char var_60_1 = 1;
        int128_t var_48;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h47d193bf63b6bc9a(
            &var_48, &var_78);
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
        core::num::_$LT$impl$u20$i128$GT$::from_ascii_radix::h1d5c018759fadde2(&var_78, var_70, 
            var_68);
        
        if (var_78 == 1)
            goto label_4592c7;
        
        char var_60;
        int64_t rbp_1 = var_60;
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_78, arg4, arg5);
        
        if (var_78 == 1)
        {
            label_45934a:
            var_78 = 1;
            char* var_70_2 = arg4;
            int64_t var_68_2 = arg5;
            goto label_4592d9;
        }
        
        core::num::_$LT$impl$u20$i128$GT$::from_ascii_radix::h1d5c018759fadde2(&var_78, var_70, 
            var_68);
        
        if (var_78 == 1)
            goto label_45934a;
        
        int64_t r15_1 = var_60;
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_78, arg6, arg7);
        
        if (var_78 != 1)
        {
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_70, var_68, "-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-…", 3))
            {
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_70, var_68, "-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h…", 3))
                {
                    bool s_1;
                    bool o_1;
                    
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_70, var_68, "-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-…", 3))
                    {
                        bool s_2;
                        bool o_2;
                        
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_70, var_68, "-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c…", 3))
                        {
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_70, var_68, "-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-…", 3))
                            {
                                s_1 = rbp_1 - r15_1 < 0;
                                o_1 = /* o_1 = unimplemented  {sbb rbp, qword [rsp+0x28]} */;
                                goto label_45944f;
                            }
                            
                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_70, var_68, "-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f…", 3))
                                goto label_459385;
                            
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
                        label_45944f:
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
            label_459385:
            var_78 = 1;
            char* var_70_3 = arg6;
            int64_t var_68_3 = arg7;
            char var_60_2 = 1;
            result = _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h47d193bf63b6bc9a(&arg1[1], &var_78);
            *arg1 = 4;
        }
    }
    
    return result;
}
