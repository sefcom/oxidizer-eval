
  fn uu_join::get_field_number::ha34d3b07c5e6ef90(arg1: *mut u64, arg2: i8, arg3: i64, arg4: i8, arg5: i64) -> u64

{
    if (arg2 & 1) == 0
    {
        let mut rax_2: i64 = 0;
        
        if (arg4 & 1) != 0
        {
            rax_2 = arg5;
        }
        
        arg1[1] = rax_2;
        *arg1 = 0;
        return rax_2;
    }
    
    let rax: bool = arg3 != arg5;
    
    if (arg4 & rax) == 0
    {
        arg1[1] = arg3;
        *arg1 = 0;
        return rax;
    }
    
    let mut var_90: i64 = arg3 + 1;
    let mut var_88: i64 = arg5 + 1;
    let mut var_80: *mut i64 = &var_90;
    let var_78: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    let var_70: *mut i64 = &var_88;
    let var_68: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    let mut var_60: *mut *mut c_void = &data_4fe578;
    let var_58: i64 = 2;
    let var_40: i64 = 0;
    let var_50: *mut *mut i64 = &var_80;
    let var_48: i64 = 2;
    let mut var_30: ();
    core::option::Option$LT$T$GT$::map_or_else::h9a77d6fb89838746(&var_30, &var_60);
    let var_18: i32 = 1;
    let rax_1: u64 = alloc::boxed::Box$LT$T$GT$::new::h6838e3ae00012226(&var_30);
    *arg1 = rax_1;
    arg1[1] = &data_4fe360;
    rax_1
}
