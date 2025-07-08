
  int128_t* uu_truncate::truncate::hee69817ccf70944a(char arg1, int64_t arg2, int64_t* arg3, int64_t* arg4, char const (** arg5)[0x11], int64_t arg6)

{
    arg1 ^= 1;
    int64_t rsi = *arg4;
    int128_t* result;
    int128_t* rdi_2;
    int128_t var_48;
    int128_t* result_1;
    int64_t rdx_1;
    
    if (*arg3 == -0x8000000000000000)
    {
        if (rsi == -0x8000000000000000)
        {
            core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreacha…");
            /* no return */
        }
        
        var_48 = *arg4;
        int64_t rsi_1 = arg4[2];
        int64_t var_38 = rsi_1;
        result_1 =
            uu_truncate::truncate_size_only::hdbbffa5e97261080(*var_48[8], rsi_1, arg5, arg6, arg1);
        result = result_1;
        rdi_2 = &var_48;
    }
    else if (rsi != -0x8000000000000000)
    {
        int64_t rsi_3 = arg3[2];
        int64_t var_18_1 = rsi_3;
        int128_t var_28 = *arg3;
        var_48 = *arg4;
        int64_t rcx_2 = arg4[2];
        int64_t var_38_2 = rcx_2;
        int128_t* result_2;
        int64_t rdx_4;
        result_2 = uu_truncate::truncate_reference_and_size::h4e3270fcd25f5342(*var_28[8], rsi_3, 
            *var_48[8], rcx_2, arg5, arg6, arg1);
        result = result_2;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f0eef7059c8ae71(&var_48);
        rdi_2 = &var_28;
    }
    else
    {
        var_48 = *arg3;
        int64_t rsi_2 = arg3[2];
        int64_t var_38_1 = rsi_2;
        result_1 = uu_truncate::truncate_reference_file_only::h8a3d13789e4c1f75(*var_48[8], rsi_2, 
            arg5, arg6, arg1);
        result = result_1;
        rdi_2 = &var_48;
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f0eef7059c8ae71(rdi_2);
    return result;
}
