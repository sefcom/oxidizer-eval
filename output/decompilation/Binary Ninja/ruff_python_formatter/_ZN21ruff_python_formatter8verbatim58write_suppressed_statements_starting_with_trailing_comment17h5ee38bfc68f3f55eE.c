
  int64_t* ruff_python_formatter::verbatim::write_suppressed_statements_starting_with_trailing_comment::h5ee38bfc68f3f55e(int32_t* arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4)

{
    int64_t rbx = *arg4;
    int64_t rbp = *(arg4[1] + 0x30);
    void* rax_1 = rbp(rbx);
    alloc::rc::RcInnerPtr::inc_strong::h8686aaaa10b78ebb(*(rax_1 + 0x10));
    void* r13 = *(rax_1 + 0x10);
    void* var_d0 = r13;
    int64_t* rax_2 = rbp(rbx);
    char* rbx_1 = *rax_2;
    uint64_t r15_1 = rax_2[1];
    int64_t* rbp_1 = *arg2;
    int32_t rax_3 = ruff_python_formatter::verbatim::Indentation::from_stmt::hc466a24ed7083ab9(
        rbp_1, rbx_1, r15_1);
    int64_t rax_4;
    int64_t rdx_1;
    rax_4 = ruff_python_formatter::statement::suite::_$LT$impl$u20$core..convert..From$LT$ruff_python_formatter..statement..suite..SuiteChildStatement$GT$$u20$for$u20$ruff_python_ast..generated..AnyNodeRef$GT$::from::h1533b44ca56a2d08(arg2);
    int64_t var_168 = rax_4;
    int64_t var_160 = rdx_1;
    int64_t rax_5;
    int64_t rdx_2;
    rax_5 =
        ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(
        r13 + 0x10, &var_168);
    int64_t var_a8 = rax_5;
    uint64_t var_90 = r15_1;
    char var_88 = 0;
    _$LT$ruff_python_formatter..verbatim..CommentRangeIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfeeb9aad30484eb3(&var_168, &var_a8);
    
    if (var_168 == 4)
    {
        core::option::expect_failed::h3f620cfb8545dc61("Suppressed statement to have tra…");
        /* no return */
    }
    
    int64_t var_138;
    int64_t var_f8 = var_138;
    int128_t var_148;
    int128_t var_108 = var_148;
    int128_t var_158;
    int128_t var_118 = var_158;
    int128_t var_128 = var_168;
    ruff_python_formatter::verbatim::SuppressionComments::unwrap_suppression_starts::heb5db1db35eb0c7e(&var_168, &var_128);
    void* rbx_2 = var_158;
    
    if (rdx_2)
    {
        int64_t rax_9 = var_a8;
        int64_t i = 0;
        
        do
        {
            *(rax_9 + i + 8) = 1;
            i += 0xc;
        } while (rdx_2 * 0xc != i);
    }
    
    *(rbx_2 + 8) = 1;
    _$LT$ruff_python_formatter..statement..suite..SuiteChildStatement$u20$as$u20$ruff_formatter..Format$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::fmt::h8e2aba7b59e95cc5(&var_168, arg2, arg4);
    int32_t rax_10 = var_168;
    
    if (rax_10 != 4)
    {
        label_72a92b:
        arg1[5] = *var_158[4];
        *(arg1 + 4) = *var_168[4];
        *arg1 = rax_10;
    }
    else
    {
        *(rbx_2 + 8) = 0;
        var_128 = rbx_2;
        _$LT$ruff_python_formatter..verbatim..TrailingFormatOffComment$u20$as$u20$ruff_formatter..Format$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::fmt::h5ad2b4c313f266ae(&var_168, &var_128, arg4);
        rax_10 = var_168;
        
        if (rax_10 != 4)
            goto label_72a92b;
        
        int64_t var_38_1 = var_88;
        int128_t var_48_1 = rbx_1;
        int128_t var_58 = var_a8;
        _$LT$ruff_python_formatter..verbatim..CommentRangeIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfeeb9aad30484eb3(&var_168, &var_58);
        int64_t rax_12 = var_168;
        
        if (rax_12 != 4)
            /* jump -> *(&data_487bbc + (rax_12 << 2)) + &data_487bbc */
        
        int64_t* rdi_11 = *arg3;
        
        if (rdi_11 == arg3[1])
        {
            int64_t* rcx_3;
            rcx_3 = !rdx_2;
            void* rax_20 = rax_5 + rdx_2 * 0xc;
            int64_t rdx_8;
            rdx_8 = rax_20 == 0xc;
            rdx_8 |= rcx_3;
            
            if (!rdx_8)
            {
                int32_t rcx_6 = *(rbx_2 + 4);
                int32_t rax_22 = *(rax_20 - 8);
                
                if (rcx_6 > rax_22)
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                    /* no return */
                }
                
                var_128 = rcx_6;
                *var_128[4] = rax_22;
                *var_128[8] = rax_3;
                _$LT$ruff_python_formatter..verbatim..FormatVerbatimStatementRange$u20$as$u20$ruff_formatter..Format$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::fmt::hedec0059cabf53e0(&var_168, &var_128, arg4);
                rax_10 = var_168;
                
                if (rax_10 != 4)
                    goto label_72a92b;
                
                *(arg1 + 8) = rbp_1;
                *arg1 = 4;
            }
            else
            {
                *(arg1 + 8) = rbp_1;
                *arg1 = 4;
            }
        }
        else
        {
            *arg3 = &rdi_11[0x10];
            var_128 = rdi_11;
            *var_128[8] = 5;
            int64_t rax_16;
            int64_t rdx_5;
            rax_16 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Stmt$GT$$GT$::from::h095e0f7c3429d85d(rdi_11);
            var_168 = rax_16;
            int64_t var_160_1 = rdx_5;
            int64_t rax_17;
            int64_t rdx_6;
            rax_17 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(r13 + 0x10, &var_168);
            ruff_python_formatter::verbatim::write_suppressed_statements::h25ad3449fcbf65fe(arg1, 
                rbx_2, &var_128, rax_17, rdx_6, arg3, arg4);
        }
    }
    
    return core::ptr::drop_in_place$LT$ruff_python_formatter..comments..Comments$GT$::he9abffb240eba4a8(&var_d0);
}
