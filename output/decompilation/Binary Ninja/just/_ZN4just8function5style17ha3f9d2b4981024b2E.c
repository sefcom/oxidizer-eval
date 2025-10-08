
  int64_t* just::function::style::ha3f9d2b4981024b2(int64_t* arg1, int64_t* arg2, int64_t arg3, uint64_t arg4)

{
    int64_t var_40 = arg3;
    uint64_t var_38 = arg4;
    char var_70;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(arg3, arg4, "commandRun an arbitrary command …", 7))
    {
        int64_t rax_5;
        
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(arg3, arg4, "error: Justfile contains no reci…", 5))
        {
            var_70 = 1;
            rax_5 = 0x100000000;
            label_66c68a:
            int32_t var_6f;
            *var_6f[3] = rax_5;
            int32_t var_6f_2 = 0;
            goto label_66c697;
        }
        
        char rax_6;
        uint64_t rdx;
        rax_6 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(arg3, arg4, "warningCould not extract parent …", 7);
        
        if (rax_6)
        {
            var_70 = 1;
            rax_5 = 0x300000000;
            goto label_66c68a;
        }
        
        int64_t* var_30 = &var_40;
        int64_t (* var_28_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
        var_70 = &data_8300b8;
        int32_t var_68;
        var_68 = 2;
        int64_t var_50_1 = 0;
        int64_t** var_60_1 = &var_30;
        int64_t var_58_1 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&arg1[1], 0, rdx, &var_70);
        *arg1 = 1;
    }
    else
    {
        int32_t rax_3 = *(**arg2 + 0x180);
        var_70 = 1;
        int32_t var_6f_1 = 0;
        var_6f_1 = 0;
        int32_t var_68_1 = rax_3;
        label_66c697:
        char var_64_1 = 0xa;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h462c94f21fd65b1b(
            &arg1[1], &var_70);
        *arg1 = 0;
    }
    return arg1;
}
