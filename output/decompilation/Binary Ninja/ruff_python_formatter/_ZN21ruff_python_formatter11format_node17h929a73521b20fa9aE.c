
  int64_t ruff_python_formatter::format_node::h929a73521b20fa9a(int64_t* arg1, void* arg2, void* arg3, int64_t arg4, int64_t arg5, int128_t* arg6)

{
    int64_t rax;
    int64_t* rdx;
    rax = _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::hb7bf8dbcda5123a7(arg2 + 0x48);
    uint64_t rax_1 =
        ruff_python_formatter::comments::Comments::from_ast::collect_comments::h79a548927313f77b(
        rax, rdx, arg4, arg5, arg3);
    int128_t var_ac = *arg6;
    int64_t var_d8 = arg4;
    int64_t var_d0 = arg5;
    uint64_t var_c8 = rax_1;
    void* var_c0 = arg2;
    int16_t var_b8 = 0x100;
    int16_t var_b0 = 0;
    char var_9c = 2;
    char var_ae = 2;
    int64_t* var_e0 = arg2 + 0x48;
    int64_t** var_98 = &var_e0;
    void* const var_90 = &data_97f528;
    int64_t result_1;
    ruff_formatter::format::hfa250cea0bef8d02(&result_1, &var_d8, &var_98);
    int64_t result = result_1;
    int128_t var_80;
    var_d8 = var_80;
    
    if (-(result) != -0x8000000000000000)
    {
        int64_t var_38;
        arg1[0xa] = var_38;
        int128_t var_48;
        *(arg1 + 0x40) = var_48;
        int128_t var_58;
        *(arg1 + 0x30) = var_58;
        int128_t var_68;
        *(arg1 + 0x20) = var_68;
    }
    
    int64_t var_70;
    arg1[3] = var_70;
    *(arg1 + 8) = var_d8;
    *arg1 = result;
    return result;
}
