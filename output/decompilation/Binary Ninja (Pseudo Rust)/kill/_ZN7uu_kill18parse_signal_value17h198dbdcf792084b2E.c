
  fn uu_kill::parse_signal_value::h198dbdcf792084b2(arg1: *mut i64, arg2: *mut i128, arg3: u64) -> *mut i64

{
    let mut rax: i8;
    let mut rdx: *mut *mut c_void;
    rax = uucore::features::signals::signal_by_name_or_value::h89b982f23c5744ec(arg2, arg3);
    let mut rax_1: u64;
    
    if (rax & 1) == 0
    {
        let mut var_88: i64 = 0;
        let var_80_1: *mut i128 = arg2;
        let var_78_1: u64 = arg3;
        let var_70_1: i8 = 1;
        let mut var_98: *mut i64 = &var_88;
        let var_90_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        let mut var_68: *mut c_void = &data_4e7670;
        let var_60_1: i64 = 2;
        let var_48_1: i64 = 0;
        let var_58_1: *mut *mut i64 = &var_98;
        let var_50_1: i64 = 1;
        let mut var_38: ();
        core::option::Option$LT$T$GT$::map_or_else::h9ebb7b35ad4a5108(&var_38, &var_68);
        let var_20_1: i32 = 1;
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::h4d33bae44fdeaf98(&var_38);
        rdx = &data_4e76b0;
    }
    else
    {
        rax_1 = 0;
    }
    
    arg1[1] = rdx;
    *arg1 = rax_1;
    arg1
}
