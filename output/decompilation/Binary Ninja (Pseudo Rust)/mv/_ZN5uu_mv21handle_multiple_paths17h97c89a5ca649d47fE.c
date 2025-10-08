
  fn uu_mv::handle_multiple_paths::h97c89a5ca649d47f(arg1: *mut c_void, arg2: i64, arg3: *mut c_void) -> u64

{
    let mut result: u64;
    
    if *arg3.byte_offset(0x30) == 0
    {
        if arg2 == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        let r15_1: i64 = (arg2 - 1) * 3;
        let mut rax_1: i64;
        let mut rdx_2: i64;
        rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hfa85d5bb3948d4f8(arg2 - 1, arg1, arg2);
        result = uu_mv::move_files_into_dir::h52a820120b69cecf(rax_1, rdx_2, 
            *arg1.byte_offset(r15_1 << 3).byte_offset(8), 
            *arg1.byte_offset(r15_1 << 3).byte_offset(0x10), arg3);
    }
    else
    {
        if arg2 <= 2
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(2, arg2);
            /* no return */
        }
        
        let rax: i64 = *arg1.byte_offset(0x38);
        let rcx: i64 = *arg1.byte_offset(0x40);
        let mut var_88: i64 = 1;
        let var_80_1: i64 = rax;
        let var_78_1: i64 = rcx;
        let var_70_1: i8 = 1;
        let mut var_98: *mut i64 = &var_88;
        let var_90_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        let mut var_68: *mut *mut [i8; 0xe5] = &data_541878;
        let var_60_1: i64 = 1;
        let var_48_1: i64 = 0;
        let var_58_1: *mut *mut i64 = &var_98;
        let var_50_1: i64 = 1;
        let mut var_38: ();
        core::option::Option$LT$T$GT$::map_or_else::h26cd0638306e3785(&var_38, &var_68);
        let var_20_1: i32 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::hbfa620bc4db9cfd6(&var_38);
    }
    
    result
}
