
  int64_t* ruff_python_formatter::verbatim::write_suppressed_statements_starting_with_leading_comment::h9aeed0f941d87403(int32_t* arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4)

{
    int64_t rbp = *arg4;
    int64_t rbx = *(arg4[1] + 0x30);
    void* rax_1 = rbx(rbp);
    alloc::rc::RcInnerPtr::inc_strong::h8686aaaa10b78ebb(*(rax_1 + 0x10));
    void* r13_1 = *(rax_1 + 0x10);
    void* var_110 = r13_1;
    int64_t* rax_2 = rbx(rbp);
    int64_t rbp_1 = *rax_2;
    int64_t rbx_1 = rax_2[1];
    int64_t* rax_3;
    int64_t rdx;
    rax_3 = ruff_python_formatter::statement::suite::_$LT$impl$u20$core..convert..From$LT$ruff_python_formatter..statement..suite..SuiteChildStatement$GT$$u20$for$u20$ruff_python_ast..generated..AnyNodeRef$GT$::from::h1533b44ca56a2d08(arg2);
    int64_t* var_108 = rax_3;
    int64_t var_100 = rdx;
    int64_t rax_4;
    int64_t rdx_1;
    rax_4 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(
        r13_1 + 0x10, &var_108);
    int64_t var_c0 = rax_4;
    int64_t var_b0 = rbp_1;
    int64_t var_a8 = rbx_1;
    char var_a0 = 0;
    _$LT$ruff_python_formatter..verbatim..CommentRangeIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfeeb9aad30484eb3(&var_108, &var_c0);
    
    if (var_108 == 4)
    {
        core::option::expect_failed::h3f620cfb8545dc61("Suppressed node to have leading …");
        /* no return */
    }
    
    int64_t var_d8;
    int64_t var_38 = var_d8;
    int128_t var_e8;
    int128_t var_48 = var_e8;
    int128_t var_f8;
    int128_t var_58 = var_f8;
    int128_t var_68 = var_108;
    ruff_python_formatter::verbatim::SuppressionComments::unwrap_suppression_starts::heb5db1db35eb0c7e(&var_108, &var_68);
    void* r13_3 = var_f8;
    int128_t var_78 = var_108;
    int64_t var_80 = 1;
    void* var_c8 = r13_3;
    var_108 = &var_80;
    void* const var_100_1 = &data_97cb70;
    var_f8 = &var_c8;
    *var_f8[8] = &data_97cb30;
    int32_t var_98;
    _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(&var_98, arg4, &var_108, 2);
    
    if (var_98 != 4)
    {
        int64_t var_88;
        *(arg1 + 0x10) = var_88;
        *arg1 = var_98;
    }
    else
    {
        *(r13_3 + 8) = 1;
        ruff_python_formatter::verbatim::write_suppressed_statements::h25ad3449fcbf65fe(arg1, 
            r13_3, arg2, var_c0, rdx_1, arg3, arg4);
    }
    
    return core::ptr::drop_in_place$LT$ruff_python_formatter..comments..Comments$GT$::he9abffb240eba4a8(&var_110);
}
