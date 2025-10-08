
  void ruff_python_formatter::statement::stmt_assign::OptionalParenthesesInlinedComments::new::h9c67cd643e503ab1(int64_t* arg1, void* arg2, char const (** arg3)[0x9b], int64_t arg4, void* arg5)

{
    char const (** const var_a0)[0x9b];
    char rax;
    char const (** r14_1)[0x9b];
    int64_t r15_1;
    
    if (!*(arg2 + 8))
    {
        r14_1 = *(arg2 + 0x20);
        r15_1 = *(arg2 + 0x28);
        var_a0 = r14_1;
        void* var_98_1 = r14_1 + r15_1 * 0xc;
        rax = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h33a3afc225c216c0(&var_a0);
    }
    
    if (*(arg2 + 8) || rax)
    {
        *arg1 = 0;
        return;
    }
    
    var_a0 = arg3;
    int64_t var_98_2 = arg4;
    int64_t rax_3;
    int64_t rdx;
    rax_3 =
        ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(
        arg5 + 0x10, &var_a0);
    int64_t rax_4 =
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::partition_point::h24ad1b489d553524(rax_3, rdx);
    
    if (rax_4 > rdx)
    {
        var_a0 = &data_97adf0;
        int64_t var_98_3 = 1;
        int64_t var_90 = 8;
        int128_t var_88 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_a0);
        /* no return */
    }
    
    int64_t var_70;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h24a88d3a0c186412(&var_70, 
        rax_3, rdx, rax_4);
    int64_t r12_4 = var_70;
    int64_t rax_5 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::partition_point::h24ad1b489d553524(
        r14_1, r15_1);
    
    if (rax_5 > r15_1)
    {
        var_a0 = &data_97adf0;
        int64_t var_98_4 = 1;
        int64_t var_90_1 = 8;
        int128_t var_88_1 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_a0);
        /* no return */
    }
    
    int128_t var_50;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h24a88d3a0c186412(&var_50, 
        r14_1, r15_1, rax_5);
    *arg1 = var_50;
    arg1[2] = r12_4;
    int64_t var_68;
    arg1[3] = var_68;
}
