
  fn just::function::style::ha3f9d2b4981024b2(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: u64) -> *mut i64

{
    let mut var_40: i64 = arg3;
    let var_38: u64 = arg4;
    let mut var_70: i8;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(arg3, arg4, "commandRun an arbitrary command …", 7) == 0
    {
        let mut rax_5: i64;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(arg3, arg4, "error: Justfile contains no reci…", 5) != 0
        {
            var_70 = 1;
            rax_5 = 0x100000000;
            'label_66c68a:
            let mut var_6f: i32;
            *var_6f[3] = rax_5;
            let var_6f_2: i32 = 0;
            goto 'label_66c697;
        }
        
        let mut rax_6: i8;
        let mut rdx: u64;
        rax_6 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(arg3, arg4, "warningCould not extract parent …", 7);
        
        if rax_6 != 0
        {
            var_70 = 1;
            rax_5 = 0x300000000;
            goto 'label_66c68a;
        }
        
        let mut var_30: *mut i64 = &var_40;
        let var_28_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
        var_70 = &data_8300b8;
        let mut var_68: i32;
        var_68 = 2;
        let var_50_1: i64 = 0;
        let var_60_1: *mut *mut i64 = &var_30;
        let var_58_1: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&arg1[1], 0, rdx, &var_70);
        *arg1 = 1;
    }
    else
    {
        let rax_3: i32 = *(**arg2).byte_offset(0x180);
        var_70 = 1;
        let mut var_6f_1: i32 = 0;
        var_6f_1 = 0;
        let var_68_1: i32 = rax_3;
        'label_66c697:
        let var_64_1: i8 = 0xa;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h462c94f21fd65b1b(
            &arg1[1], &var_70);
        *arg1 = 0;
    }
    arg1
}
