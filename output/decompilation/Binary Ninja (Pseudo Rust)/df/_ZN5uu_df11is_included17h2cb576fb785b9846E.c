
  fn uu_df::is_included::h2cb576fb785b9846(arg1: *mut c_void, arg2: *mut c_void) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    
    if *arg1.byte_offset(0x90) != 0 && *arg2.byte_offset(0x50) != 0
    {
        return 0;
    }
    
    if *arg1.byte_offset(0x91) == 0
    {
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h6249ba97ac26ea5b(*arg1.byte_offset(0x38), *arg1.byte_offset(0x40), &data_419a18[0x24], 4) != 0
            && *arg2.byte_offset(0x51) != 1
        {
            return 0;
        }
    }
    else if *arg2.byte_offset(0x51) != 1
    {
        return 0;
    }
    
    if !(0 + -(*arg2.byte_offset(0x30))) &&
        _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h51781a1e8c4dac70(
        arg1.byte_offset(0x30), *arg2.byte_offset(0x38), *arg2.byte_offset(0x40)) != 0
    {
        return 0;
    }
    
    if *arg2.byte_offset(0x18) != -0x8000000000000000
    {
        /* tailcall */
        return _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h51781a1e8c4dac70(arg1.byte_offset(0x30), *arg2.byte_offset(0x20), *arg2.byte_offset(0x28));
    }
    
    1
}
