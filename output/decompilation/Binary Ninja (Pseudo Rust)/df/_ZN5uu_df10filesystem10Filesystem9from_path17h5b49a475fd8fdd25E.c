
  fn uu_df::filesystem::Filesystem::from_path::h5b49a475fd8fdd25(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: *mut i64) -> *mut i64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h7c1f1ad194ebcdf5(arg4);
    let mut var_e8: i64 = rax;
    let var_e0: i64 = rdx;
    let mut var_d0: i128;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hcc85d88d02bb0b7a(&var_d0, &var_e8);
    let rax_1: *mut c_void =
        uu_df::filesystem::mount_info_from_path::heb90d672d6d37662(arg2, arg3, arg4);
    
    if rax_1 == 0
    {
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0e578a0b94f465cc(&var_d0);
    }
    else
    {
        let mut var_b8: ();
        _$LT$uucore..features..fsext..MountInfo$u20$as$u20$core..clone..Clone$GT$::clone::hde627e2703cb45d3(&var_b8, rax_1);
        let var_c0: i64;
        let var_d8_1: i64 = var_c0;
        var_e8 = var_d0;
        uu_df::filesystem::Filesystem::new::ha971403f9b8ef26c(arg1, &var_b8, &var_e8);
    }
    
    arg1
}
