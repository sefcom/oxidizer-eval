
  int64_t* uu_df::filesystem::Filesystem::from_path::h5b49a475fd8fdd25(int64_t* arg1, int64_t* arg2, int64_t arg3, int64_t* arg4)

{
    int64_t rax;
    int64_t rdx;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h7c1f1ad194ebcdf5(arg4);
    int64_t var_e8 = rax;
    int64_t var_e0 = rdx;
    int128_t var_d0;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hcc85d88d02bb0b7a(&var_d0, &var_e8);
    void* rax_1 = uu_df::filesystem::mount_info_from_path::heb90d672d6d37662(arg2, arg3, arg4);
    
    if (!rax_1)
    {
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0e578a0b94f465cc(&var_d0);
    }
    else
    {
        void var_b8;
        _$LT$uucore..features..fsext..MountInfo$u20$as$u20$core..clone..Clone$GT$::clone::hde627e2703cb45d3(&var_b8, rax_1);
        int64_t var_c0;
        int64_t var_d8_1 = var_c0;
        var_e8 = var_d0;
        uu_df::filesystem::Filesystem::new::ha971403f9b8ef26c(arg1, &var_b8, &var_e8);
    }
    
    return arg1;
}
