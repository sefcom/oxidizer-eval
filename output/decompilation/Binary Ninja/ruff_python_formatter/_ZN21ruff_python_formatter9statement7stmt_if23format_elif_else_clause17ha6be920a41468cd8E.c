
  int64_t* ruff_python_formatter::statement::stmt_if::format_elif_else_clause::ha6be920a41468cd8(int32_t* arg1, void* arg2, int64_t* arg3)

{
    void* var_120 = arg2;
    void* var_e8 = arg2 + 0x18;
    void* rax_1 = (*(arg3[1] + 0x30))(*arg3);
    alloc::rc::RcInnerPtr::inc_strong::h8686aaaa10b78ebb(*(rax_1 + 0x10));
    void* rbx_1 = *(rax_1 + 0x10);
    void* var_118 = rbx_1;
    int64_t rax_2;
    int64_t rdx;
    rax_2 = ruff_python_formatter::comments::Comments::dangling::hb5267ccf96b17255(rbx_1);
    int64_t var_d0 = 0x57;
    void* var_c8 = arg2;
    int64_t rax_3;
    int64_t rdx_1;
    rax_3 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(
        rbx_1 + 0x10, &var_d0);
    int64_t* var_e0 = &var_120;
    int64_t* var_d8 = &var_e8;
    var_d0 = 6;
    void* var_c8_1 = arg2;
    int64_t var_c0 = rax_3;
    int64_t var_b8 = rdx_1;
    int64_t rcx;
    int64_t var_b0 = rcx;
    int64_t r8;
    int64_t var_a8 = r8;
    int64_t** var_a0 = &var_e0;
    void* const var_98 = &data_97ee20;
    int64_t var_90 = rax_2;
    int64_t var_88 = rdx;
    void* var_80 = arg2;
    char r9;
    char var_68 = r9;
    int64_t var_78 = rax_2;
    int64_t var_70 = rdx;
    int32_t rcx_1 = 0;
    
    if (*(ruff_formatter::formatter::Formatter$LT$Context$GT$::options::he55f9fce45a2dc4a() + 0xc)
        == 1)
    {
        int32_t var_10c_1 = *(var_120 + 0x6c);
        rcx_1 = 1;
    }
    
    int32_t var_110 = rcx_1;
    int64_t* var_60 = &var_d0;
    void* const var_58 = &data_97e140;
    int64_t* var_50 = &var_80;
    void* const var_48 = &data_97e160;
    int32_t* var_40 = &var_110;
    void* const var_38 = &data_97e810;
    _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(arg1, arg3, &var_60, 3);
    return core::ptr::drop_in_place$LT$ruff_python_formatter..comments..Comments$GT$::he9abffb240eba4a8(&var_118);
}
