
  fn alacritty::config::font::SecondaryFontDescription::desc::h751d716c6e59b054(arg1: *mut i128, arg2: *mut i64, arg3: *mut c_void) -> i64

{
    let mut r15: u64 = -0x8000000000000000;
    let mut var_58: u64;
    let mut var_50: i128;
    let mut var_28: i128;
    
    if !(0 + -(*arg2))
    {
        let mut var_40: u64;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_40, arg2);
        let var_38: i128;
        var_50 = var_38;
        var_58 = var_40;
        
        if arg2[3] != -0x8000000000000000
        {
            'label_834ec7:
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_40, &arg2[3]);
            r15 = var_40;
            var_28 = var_38;
        }
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_58, arg3);
        
        if arg2[3] != -0x8000000000000000
        {
            goto 'label_834ec7;
        }
    }
    
    let result: i64 = *var_50[8];
    arg1[1] = result;
    *arg1 = var_58;
    *arg1.byte_offset(0x18) = r15;
    arg1[2] = var_28;
    result
}
