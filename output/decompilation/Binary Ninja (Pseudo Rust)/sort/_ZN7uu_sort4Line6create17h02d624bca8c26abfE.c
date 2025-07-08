
  fn uu_sort::Line::create::h02d624bca8c26abf(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: *mut i64, arg6: *mut i64, arg7: *mut c_void) -> *mut i64

{
    arg6[2] = 0;
    
    if *arg7.byte_offset(0x60) != 0
    {
        uu_sort::tokenize::hb47c688654b41b2e(arg2, arg3, *arg7.byte_offset(0x78), arg6);
    }
    
    let rax: i64 = *arg7.byte_offset(8);
    let rcx_2: i64 = *arg7.byte_offset(0x10) * 0x38 + rax;
    let mut var_80: i64 = rax;
    let var_78: i64 = rcx_2;
    let mut var_70: i64 = arg2;
    let var_68: i64 = arg3;
    let var_60: *mut i64 = arg6;
    
    for let mut i: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1dc45998b69df0a3(&var_80); i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1dc45998b69df0a3(&var_80)
    {
        let mut var_58: *mut c_void;
        core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h2f50737dd865e250(&var_58, &var_70, i);
        let var_38: i8;
        let mut rcx_6: i8 = var_38 - 2;
        
        if var_38 - 2 >= 3
        {
            rcx_6 = 1;
        }
        
        let var_50: i64;
        let var_48: i64;
        
        if rcx_6 == 2
        {
            if *var_58.byte_offset(0x37) != 0
            {
                alloc::vec::Vec$LT$T$C$A$GT$::push::he8aa91f7f4c1aff9(arg5, var_50, var_48);
            }
        }
        else if rcx_6 != 1
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::h7cac5b45018ed91a(&arg5[6], var_50, var_48);
        }
        else
        {
            let var_40: i64;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h68d358aa572f8f14(&arg5[3], var_40, var_38 & 1);
            alloc::vec::Vec$LT$T$C$A$GT$::push::he8aa91f7f4c1aff9(arg5, var_50, var_48);
        }
    }
    
    *arg1 = arg2;
    arg1[1] = arg3;
    arg1[2] = arg4;
    arg1
}
