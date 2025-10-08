
  int64_t* ruff_python_formatter::verbatim::write_suppressed_statements::h25ad3449fcbf65fe(int32_t* arg1, void* arg2, int128_t* arg3, int64_t arg4, int64_t arg5, int64_t* arg6, int64_t* arg7)

{
    int64_t r15 = *arg7;
    int64_t rbx = *(arg7[1] + 0x30);
    void* rax_2 = rbx(r15);
    alloc::rc::RcInnerPtr::inc_strong::h8686aaaa10b78ebb(*(rax_2 + 0x10));
    void* r12_1 = *(rax_2 + 0x10);
    void* var_b8 = r12_1;
    int64_t* rax_3 = rbx(r15);
    char* rsi = *rax_3;
    uint64_t rbx_1 = rax_3[1];
    int128_t var_198 = *arg3;
    int32_t rax_4 = ruff_python_formatter::verbatim::Indentation::from_stmt::hc466a24ed7083ab9(
        *arg3, rsi, rbx_1);
    void* var_c8 = *arg6;
    int64_t rdx_1 = arg5;
    int64_t rax_6 = arg4;
    uint64_t var_180 = rbx_1;
    int64_t var_168;
    int64_t var_120;
    int64_t var_b0;
    int64_t var_a8_2;
    
    while (true)
    {
        var_b0 = rax_6;
        int64_t var_a8_1 = rdx_1;
        char* var_a0_1 = rsi;
        uint64_t var_98_1 = rbx_1;
        char var_90_1 = 1;
        _$LT$ruff_python_formatter..verbatim..CommentRangeIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfeeb9aad30484eb3(&var_120, &var_b0);
        int64_t rcx = var_120;
        
        if (rcx != 4)
            /* jump -> *(&data_487bcc + (rcx << 2)) + &data_487bcc */
        
        int64_t rax_9;
        int64_t rdx_2;
        rax_9 = ruff_python_formatter::statement::suite::_$LT$impl$u20$core..convert..From$LT$ruff_python_formatter..statement..suite..SuiteChildStatement$GT$$u20$for$u20$ruff_python_ast..generated..AnyNodeRef$GT$::from::h1533b44ca56a2d08(&var_198);
        var_120 = rax_9;
        int64_t var_118_1 = rdx_2;
        int64_t rax_10;
        int64_t rdx_3;
        rax_10 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(r12_1 + 0x10, &var_120);
        var_b0 = rax_10;
        var_a8_2 = rdx_3;
        char* var_a0_2 = rsi;
        uint64_t var_98_2 = var_180;
        char var_90_2 = 1;
        _$LT$ruff_python_formatter..verbatim..CommentRangeIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfeeb9aad30484eb3(&var_168, &var_b0);
        int64_t rcx_3 = var_168;
        
        if (rcx_3 != 4)
            /* jump -> *(&data_487bdc + (rcx_3 << 2)) + &data_487bdc */
        
        int64_t* rdi_8 = var_c8;
        
        if (rdi_8 == arg6[1])
            break;
        
        *arg6 = &rdi_8[0x10];
        var_198 = rdi_8;
        *var_198[8] = 5;
        int64_t rax_15;
        int64_t rdx_4;
        rax_15 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Stmt$GT$$GT$::from::h095e0f7c3429d85d(rdi_8);
        var_120 = rax_15;
        int64_t var_118 = rdx_4;
        rax_6 =
            ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(
            r12_1 + 0x10, &var_120);
        var_c8 = &rdi_8[0x10];
        rbx_1 = var_180;
    }
    
    int64_t* r14_3 = var_198;
    int64_t rax_17;
    int64_t rdx_5;
    rax_17 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Stmt$GT$$GT$::from::h095e0f7c3429d85d(r14_3);
    var_168 = rax_17;
    int32_t rax_20;
    
    while (true)
    {
        int64_t var_160_1 = rdx_5;
        var_120 = rax_17;
        int64_t var_118_2 = rdx_5;
        int64_t rax_18;
        int64_t rdx_6;
        rax_18 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(r12_1 + 0x10, &var_120);
        void* rax_19 = rax_18 + rdx_6 * 0xc;
        int64_t rdx_7;
        rdx_7 = rax_19 == 0xc;
        rdx_7 |= !rdx_6;
        
        if (!rdx_7)
        {
            rax_20 = *(rax_19 - 8);
            break;
        }
        
        rax_17 = ruff_python_ast::node::_$LT$impl$u20$ruff_python_ast..generated..AnyNodeRef$GT$::last_child_in_body::h106de3f3c845d12e(&var_168);
        
        if (rax_17 == 0x5e)
        {
            ruff_python_formatter::statement::trailing_semicolon::h3caa94f8332101f0(&var_120, 
                var_168, var_160_1, rsi, var_180);
            rax_20 = core::option::Option$LT$T$GT$::map_or::h64e018d7ba021b4c(&var_120, 
                _$LT$ruff_python_formatter..statement..suite..SuiteChildStatement$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h8612c18e9704ac05(&var_198));
            break;
        }
        
        var_168 = rax_17;
    }
    
    int32_t rcx_8 = *(arg2 + 4);
    
    if (rcx_8 > rax_20)
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
        /* no return */
    }
    
    var_b0 = rcx_8;
    *var_b0[4] = rax_20;
    var_a8_2 = rax_4;
    _$LT$ruff_python_formatter..verbatim..FormatVerbatimStatementRange$u20$as$u20$ruff_formatter..Format$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::fmt::hedec0059cabf53e0(&var_120, &var_b0, arg7);
    int32_t rax_22 = var_120;
    int32_t* rcx_9;
    
    if (rax_22 != 4)
    {
        int64_t var_110;
        arg1[5] = *var_110[4];
        rcx_9 = arg1;
        *(arg1 + 4) = *var_120[4];
    }
    else
    {
        rcx_9 = arg1;
        *(rcx_9 + 8) = r14_3;
    }
    
    *rcx_9 = rax_22;
    return core::ptr::drop_in_place$LT$ruff_python_formatter..comments..Comments$GT$::he9abffb240eba4a8(&var_b8);
}
