
  uint64_t ruff_python_formatter::comments::Comments::from_ast::collect_comments::h79a548927313f77b(int64_t arg1, int64_t* arg2, int64_t arg3, int64_t arg4, void* arg5)

{
    int64_t rdi = *(arg5 + 0x10);
    int64_t var_100;
    int64_t var_f0;
    int64_t var_d0;
    int64_t var_c0;
    int128_t var_98;
    int128_t var_88;
    int64_t rax_1;
    int64_t rcx;
    int64_t rdx_1;
    int64_t rsi_1;
    int128_t zmm0;
    
    if (!rdi)
    {
        var_88 = data_97c828;
        var_98 = *data_97c818;
        zmm0 = {0};
        rax_1 = 8;
        rcx = 4;
        rdx_1 = 0;
        rsi_1 = 0;
    }
    else
    {
        int64_t r8 = *(arg5 + 8);
        int64_t var_70 = 0;
        int64_t var_68_1 = 4;
        int128_t var_60_1 = {0};
        int64_t var_50_1 = 8;
        int64_t var_48_1 = 0;
        int128_t var_40_1 = *data_97c818;
        int128_t var_30_1 = data_97c828;
        void* var_20_1 = arg5;
        int64_t var_18_1 = arg3;
        int64_t var_10_1 = arg4;
        int64_t* var_b8_1 = &var_70;
        void** const var_b0_1 = &data_97d488;
        int64_t var_a8_1 = arg3;
        int64_t var_a0_1 = arg4;
        var_d0 = 0;
        int64_t var_c8_1 = 8;
        var_c0 = 0;
        int64_t var_e0_1 = 0x5e;
        var_100 = 0;
        var_f0 = r8;
        int64_t var_e8_1 = r8 + (rdi << 3);
        ruff_python_formatter::comments::visitor::CommentsVisitor::visit::h0f17c00820667551(
            &var_100, arg1, arg2);
        rdx_1 = var_70;
        rcx = var_68_1;
        zmm0 = var_60_1;
        rax_1 = var_50_1;
        rsi_1 = var_48_1;
        var_98 = var_40_1;
        var_88 = var_30_1;
    }
    
    var_100 = rdx_1;
    int64_t var_f8 = rcx;
    var_f0 = zmm0;
    int64_t var_e0_2 = rax_1;
    int64_t var_d8 = rsi_1;
    var_d0 = var_98;
    var_c0 = var_88;
    return ruff_python_formatter::comments::Comments::new::hbdb3ea4fa05ac4f8(&var_100);
}
