
  int64_t* uu_df::filesystem::Filesystem::from_path::h8c044b7be3620a3c(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    int64_t rax;
    int64_t rdx;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h07de46ba282a0abf(arg4);
    int64_t var_68 = rax;
    int64_t var_60 = rdx;
    int128_t var_90;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h5d1558b0a1eb3735(&var_90, 
        &var_68);
    char var_78;
    uu_df::filesystem::mount_info_from_path::hc0bcb2ea98b5090a(&var_78, arg2, arg3, arg4);
    int64_t var_50 = arg2;
    int64_t var_48 = arg3;
    var_68 = var_90;
    int64_t var_80;
    int64_t var_58 = var_80;
    
    if (var_78 == 1)
    {
        char var_77;
        arg1[1] = var_77;
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$uu_df..filesystem..Filesystem..from_path$LT$$RF$$RF$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h3f753883bea380f6(&var_68);
    }
    
    int64_t var_28_1 = var_80;
    int128_t var_38 = var_90;
    void* var_70;
    return uu_df::filesystem::Filesystem::from_mount::h8c34ead0ca2ea541(arg1, arg2, arg3, var_70, 
        &var_38);
}
