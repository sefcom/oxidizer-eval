
  int64_t uu_ls::show_dir_name::hae576568cd75c94b(void* arg1, int64_t* arg2, void* arg3)

{
    int128_t var_80;
    uucore::features::quoting_style::escape_dir_name::he94a972280d79721(&var_80, *(arg1 + 0x20), 
        *(arg1 + 0x28), arg3 + 0xfc);
    int128_t var_68;
    uint64_t var_58;
    int64_t rbp;
    uint64_t var_70;
    
    if (!*(arg3 + 0xf7) || *(arg3 + 0xf6))
    {
        var_58 = var_70;
        var_68 = var_80;
        rbp = 0;
    }
    else
    {
        rbp = 1;
        uu_ls::create_hyperlink::h0a10a692235dc40b(&var_68, *var_80[8], var_70, arg1);
    }
    int64_t r14_1 = *var_68[8];
    int64_t result_1 = uu_ls::write_os_str::hde566466aa27da95(arg2, r14_1, var_58);
    int64_t result = result_1;
    
    if (!result_1)
    {
        char const (** const var_50)[0x2] = &data_686b58;
        int64_t var_48_1 = 1;
        int64_t var_40_1 = 8;
        int128_t var_38_1 = {0};
        result = std::io::Write::write_fmt::h700c3576e0a1d616(arg2, &var_50);
    }
    
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(var_68, r14_1);
    
    if (rbp)
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(var_80, 
            *var_80[8]);
    
    return result;
}
