
  int128_t* uu_mktemp::exec::heedcd9fa9b859fdd(int128_t* arg1, int64_t arg2, uint64_t arg3, int64_t arg4, int64_t arg5, char arg6)

{
    int64_t var_68;
    int64_t rcx;
    int64_t r8;
    uint64_t r9;
    
    if (!arg6)
        uu_mktemp::make_temp_file::hb72bef91cb9e45f4(&var_68, arg2, arg3, rcx, r8, r9, arg4, arg5);
    else
        uu_mktemp::make_temp_dir::h6dfece6cf0e8d640(&var_68, arg2, arg3, rcx, r8, r9, arg4, arg5);
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
        rax_2 = std::path::Path::file_name::h6d40d88bf3fb287a(var_60, var_58);
        
        if (rax_2)
            core::str::converts::from_utf8::h8a6dc80f786921e0(&var_68, rax_2, rdx_2);
        
        if (!rax_2 || var_68 == 1)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        int128_t var_38;
        std::path::Path::join::h54ca0a2412d4ea69(&var_38, arg2, arg3, var_60);
        int64_t var_28;
        arg1[1] = var_28;
        *arg1 = var_38;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h4af838b51e1cae1b(&var_50);
    }
    else
    {
        *(arg1 + 8) = var_60;
        arg1[1] = var_58;
        *arg1 = -0x8000000000000000;
    }
    return arg1;
}
