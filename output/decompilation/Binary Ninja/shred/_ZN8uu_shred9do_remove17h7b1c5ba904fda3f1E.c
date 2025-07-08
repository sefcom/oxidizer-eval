
  char const (**)[0x95] uu_shred::do_remove::h7b1c5ba904fda3f1(int64_t arg1, size_t arg2, int64_t arg3, int64_t arg4, int32_t arg5, char arg6)

{
    char rbp = arg5;
    int64_t* var_c8;
    void* const var_b0;
    int64_t var_80;
    
    if (arg5)
    {
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 = uucore::util_name::h60d842bf27b05e82();
        var_80 = rax_1;
        int64_t var_78_1 = rdx_1;
        var_c8 = &var_80;
        int64_t (* var_c0_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
        var_b0 = &data_538698;
        int64_t var_a8_1 = 2;
        int64_t var_90_1 = 0;
        int64_t** var_a0_1 = &var_c8;
        int64_t var_98_1 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
        var_80 = 0;
        int64_t var_78_2 = arg3;
        int64_t var_70_1 = arg4;
        char var_68_1 = 0;
        var_c8 = &var_80;
        int64_t (* var_c0_2)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_b0 = &data_538928;
        int64_t var_a8_2 = 2;
        int64_t var_90_2 = 0;
        int64_t** var_a0_2 = &var_c8;
        int64_t var_98_2 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
    }
    
    if (arg6 != 1)
        uu_shred::wipe_name::hcce9bfbf2150b71e(&var_c8, arg1, arg2, rbp, arg6);
    else
        std::path::Path::with_file_name::hc341ca2068d6c4b9(&var_c8, arg1, arg2, arg3);
    
    int64_t* r12_1 = var_c8;
    
    if (r12_1 != -0x8000000000000000)
    {
        int64_t var_b8;
        int64_t var_38_1 = var_b8;
        int128_t var_48 = var_c8;
        char const (** result)[0x95] = std::fs::remove_file::h876d9142090ac2ab(&var_48);
        
        if (result)
            return result;
    }
    
    int64_t* rax_4 = r12_1;
    
    if (rbp)
    {
        int64_t rax_3;
        int64_t rdx_2;
        rax_3 = uucore::util_name::h60d842bf27b05e82();
        var_80 = rax_3;
        int64_t var_78_3 = rdx_2;
        int64_t* var_60 = &var_80;
        int64_t (* var_58_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
        var_b0 = &data_538698;
        int64_t var_a8_3 = 2;
        int64_t var_90_3 = 0;
        int64_t** var_a0_3 = &var_60;
        int64_t var_98_3 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
        var_80 = 0;
        int64_t var_78_4 = arg3;
        int64_t var_70_2 = arg4;
        char var_68_2 = 0;
        var_60 = &var_80;
        int64_t (* var_58_2)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_b0 = &data_538948;
        int64_t var_a8_4 = 2;
        int64_t var_90_4 = 0;
        int64_t** var_a0_4 = &var_60;
        int64_t var_98_4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
        rax_4 = var_c8;
    }
    
    if (r12_1 == -0x8000000000000000 && rax_4 != -0x8000000000000000)
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha6413bedadae7a14(&var_c8);
    
    return nullptr;
}
