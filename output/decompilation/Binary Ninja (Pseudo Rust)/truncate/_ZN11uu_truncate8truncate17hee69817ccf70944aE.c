
  fn uu_truncate::truncate::hee69817ccf70944a(arg1: i8, arg2: i64, arg3: *mut i64, arg4: *mut i64, arg5: *mut *mut [i8; 0x11], arg6: i64) -> *mut i128

{
    arg1 ^= 1;
    let rsi: i64 = *arg4;
    let mut result: *mut i128;
    let mut rdi_2: *mut i128;
    let mut var_48: i128;
    let mut result_1: *mut i128;
    let mut rdx_1: i64;
    
    if *arg3 == -0x8000000000000000
    {
        if rsi == -0x8000000000000000
        {
            core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreacha…");
            /* no return */
        }
        
        var_48 = *arg4;
        let rsi_1: i64 = arg4[2];
        let var_38: i64 = rsi_1;
        result_1 =
            uu_truncate::truncate_size_only::hdbbffa5e97261080(*var_48[8], rsi_1, arg5, arg6, arg1);
        result = result_1;
        rdi_2 = &var_48;
    }
    else if rsi != -0x8000000000000000
    {
        let rsi_3: i64 = arg3[2];
        let var_18_1: i64 = rsi_3;
        let mut var_28: i128 = *arg3;
        var_48 = *arg4;
        let rcx_2: i64 = arg4[2];
        let var_38_2: i64 = rcx_2;
        let mut result_2: *mut i128;
        let mut rdx_4: i64;
        result_2 = uu_truncate::truncate_reference_and_size::h4e3270fcd25f5342(*var_28[8], rsi_3, 
            *var_48[8], rcx_2, arg5, arg6, arg1);
        result = result_2;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f0eef7059c8ae71(&var_48);
        rdi_2 = &var_28;
    }
    else
    {
        var_48 = *arg3;
        let rsi_2: i64 = arg3[2];
        let var_38_1: i64 = rsi_2;
        result_1 = uu_truncate::truncate_reference_file_only::h8a3d13789e4c1f75(*var_48[8], rsi_2, 
            arg5, arg6, arg1);
        result = result_1;
        rdi_2 = &var_48;
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f0eef7059c8ae71(rdi_2);
    result
}
