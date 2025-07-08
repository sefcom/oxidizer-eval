
  int128_t* uu_mktemp::exec::h4964a5bb0e6c4200(int128_t* arg1, int64_t arg2, size_t arg3, int64_t arg4, int64_t arg5, char arg6)

{
    int64_t var_68;
    int64_t rcx;
    int64_t r8;
    uint64_t r9;
    
    if (!arg6)
        uu_mktemp::make_temp_file::hfdb13d12b9e8c76a(&var_68, arg2, arg3, rcx, r8, r9, arg4, arg5);
    else
        uu_mktemp::make_temp_dir::h59267eff7d377883(&var_68, arg2, arg3, rcx, r8, r9, arg4, arg5);
    int64_t rax_1 = var_68;
    int64_t var_60;
    int64_t var_58;
    
    if (rax_1 != -0x8000000000000000)
    {
        int64_t var_50 = rax_1;
        int64_t var_48_1 = var_60;
        int64_t var_40_1 = var_58;
        char* rax_2;
        int64_t rdx_2;
        rax_2 = std::path::Path::file_name::h79ecbb7850a9c7f3(var_60, var_58);
        
        if (rax_2)
            std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_68, rax_2, rdx_2);
        
        if (!rax_2 || var_68)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        int128_t var_38;
        std::path::Path::join::hac25b276bfec4f36(&var_38, arg2, arg3, var_60);
        int64_t var_28;
        arg1[1] = var_28;
        *arg1 = var_38;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4(&var_50);
    }
    else
    {
        *(arg1 + 8) = var_60;
        arg1[1] = var_58;
        *arg1 = -0x8000000000000000;
    }
    return arg1;
}
