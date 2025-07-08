
  fn uu_mv::handle_multiple_paths::h86c7b11f84ad2502(arg1: *mut c_void, arg2: i64, arg3: *mut c_void) -> *mut i128

{
    let mut result: *mut i128;
    
    if *arg3.byte_offset(0x30) == 0
    {
        if arg2 == 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        let r15_1: i64 = (arg2 - 1) * 3;
        let mut rax: i64;
        let mut rdx_2: i64;
        rax = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h1ae6fd92abd5a845(arg2 - 1, arg1, arg2);
        result = uu_mv::move_files_into_dir::hea74a81b456dd214(rax, rdx_2, 
            *arg1.byte_offset(r15_1 << 3).byte_offset(8), 
            *arg1.byte_offset(r15_1 << 3).byte_offset(0x10), arg3);
    }
    else
    {
        if arg2 <= 2
        {
            core::panicking::panic_bounds_check::h25a5330941572dd1(2, arg2);
            /* no return */
        }
        
        let zmm0: i128 = *arg1.byte_offset(0x38);
        let mut var_58: i64 = 1;
        let var_50_1: i128 = zmm0;
        let var_40_1: i8 = 1;
        let mut var_98: *mut i64 = &var_58;
        let var_90_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        let mut var_88: *mut *mut c_void = &data_587fd0;
        let var_80_1: i64 = 1;
        let var_68_1: i64 = 0;
        let var_78_1: *mut *mut i64 = &var_98;
        let var_70_1: i64 = 1;
        let mut var_38: ();
        core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&var_38, &var_88);
        let var_20_1: i32 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::hbe638d0f99162453(&var_38);
    }
    
    result
}
