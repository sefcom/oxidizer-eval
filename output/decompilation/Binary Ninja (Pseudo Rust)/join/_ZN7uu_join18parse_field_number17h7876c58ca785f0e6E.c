
  fn uu_join::parse_field_number::h7876c58ca785f0e6(arg1: *mut i64, arg2: *mut i8, arg3: i64) -> u64

{
    let mut var_a8: i8;
    let mut result: u64 = core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(
        &var_a8, arg2, arg3);
    let var_a0: i64;
    
    if var_a8 == 1
    {
        let var_a7: i8;
        
        if var_a7 != 2
        {
            goto 'label_46ebf1;
        }
        
        arg1[1] = -1;
        *arg1 = 0;
    }
    else if var_a0 == 0
    {
        'label_46ebf1:
        let mut var_88: i64 = 0;
        let var_80_1: *mut i8 = arg2;
        let var_78_1: i64 = arg3;
        let var_70_1: i8 = 1;
        let mut var_98: *mut i64 = &var_88;
        let var_90_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        let mut var_68: *mut *mut c_void = &data_4fe598;
        let var_60_1: i64 = 1;
        let var_48_1: i64 = 0;
        let var_58_1: *mut *mut i64 = &var_98;
        let var_50_1: i64 = 1;
        let mut var_38: ();
        core::option::Option$LT$T$GT$::map_or_else::h9a77d6fb89838746(&var_38, &var_68);
        let var_20_1: i32 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h6838e3ae00012226(&var_38);
        *arg1 = result;
        arg1[1] = &data_4fe360;
    }
    else
    {
        result = var_a0 - 1;
        arg1[1] = result;
        *arg1 = 0;
    }
    result
}
