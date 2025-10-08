
  fn ruff_python_formatter::verbatim::write_suppressed_statements_starting_with_trailing_comment::h5ee38bfc68f3f55e(arg1: *mut i32, arg2: *mut i64, arg3: *mut i64, arg4: *mut i64) -> *mut i64

{
    let rbx: i64 = *arg4;
    let rbp: i64 = *(arg4[1] + 0x30);
    let rax_1: *mut c_void = rbp(rbx);
    alloc::rc::RcInnerPtr::inc_strong::h8686aaaa10b78ebb(*rax_1.byte_offset(0x10));
    let r13: *mut c_void = *rax_1.byte_offset(0x10);
    let mut var_d0: *mut c_void = r13;
    let rax_2: *mut i64 = rbp(rbx);
    let rbx_1: *mut i8 = *rax_2;
    let r15_1: u64 = rax_2[1];
    let rbp_1: *mut i64 = *arg2;
    let rax_3: i32 = ruff_python_formatter::verbatim::Indentation::from_stmt::hc466a24ed7083ab9(
        rbp_1, rbx_1, r15_1);
    let mut rax_4: i64;
    let mut rdx_1: i64;
    rax_4 = ruff_python_formatter::statement::suite::_$LT$impl$u20$core..convert..From$LT$ruff_python_formatter..statement..suite..SuiteChildStatement$GT$$u20$for$u20$ruff_python_ast..generated..AnyNodeRef$GT$::from::h1533b44ca56a2d08(arg2);
    let mut var_168: i64 = rax_4;
    let var_160: i64 = rdx_1;
    let mut rax_5: i64;
    let mut rdx_2: i64;
    rax_5 =
        ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(
        r13.byte_offset(0x10), &var_168);
    let mut var_a8: i64 = rax_5;
    let var_90: u64 = r15_1;
    let var_88: i8 = 0;
    _$LT$ruff_python_formatter..verbatim..CommentRangeIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfeeb9aad30484eb3(&var_168, &var_a8);
    
    if var_168 == 4
    {
        core::option::expect_failed::h3f620cfb8545dc61("Suppressed statement to have tra…");
        /* no return */
    }
    
    let var_138: i64;
    let var_f8: i64 = var_138;
    let var_148: i128;
    let var_108: i128 = var_148;
    let var_158: i128;
    let var_118: i128 = var_158;
    let mut var_128: i128 = var_168;
    ruff_python_formatter::verbatim::SuppressionComments::unwrap_suppression_starts::heb5db1db35eb0c7e(&var_168, &var_128);
    let rbx_2: *mut c_void = var_158;
    
    if rdx_2 != 0
    {
        let rax_9: i64 = var_a8;
        let mut i: i64 = 0;
        
        do
        {
            *(rax_9 + i + 8) = 1;
            i += 0xc;
        } while rdx_2 * 0xc != i;
    }
    
    *rbx_2.byte_offset(8) = 1;
    _$LT$ruff_python_formatter..statement..suite..SuiteChildStatement$u20$as$u20$ruff_formatter..Format$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::fmt::h8e2aba7b59e95cc5(&var_168, arg2, arg4);
    let mut rax_10: i32 = var_168;
    
    if rax_10 != 4
    {
        'label_72a92b:
        arg1[5] = *var_158[4];
        *arg1.byte_offset(4) = *var_168[4];
        *arg1 = rax_10;
    }
    else
    {
        *rbx_2.byte_offset(8) = 0;
        var_128 = rbx_2;
        _$LT$ruff_python_formatter..verbatim..TrailingFormatOffComment$u20$as$u20$ruff_formatter..Format$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::fmt::h5ad2b4c313f266ae(&var_168, &var_128, arg4);
        rax_10 = var_168;
        
        if rax_10 != 4
        {
            goto 'label_72a92b;
        }
        
        let var_38_1: i64 = var_88;
        let var_48_1: i128 = rbx_1;
        let mut var_58: i128 = var_a8;
        _$LT$ruff_python_formatter..verbatim..CommentRangeIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfeeb9aad30484eb3(&var_168, &var_58);
        let rax_12: i64 = var_168;
        
        if rax_12 != 4
        {
            /* jump -> *(&data_487bbc).byte_offset(rax_12 << 2) + &data_487bbc */
        }
        
        let rdi_11: *mut i64 = *arg3;
        
        if rdi_11 == arg3[1]
        {
            let mut rcx_3: *mut i64;
            rcx_3 = rdx_2 == 0;
            let rax_20: *mut c_void = rax_5 + rdx_2 * 0xc;
            let mut rdx_8: i64;
            rdx_8 = rax_20 == 0xc;
            rdx_8 |= rcx_3;
            
            if rdx_8 == 0
            {
                let rcx_6: i32 = *rbx_2.byte_offset(4);
                let rax_22: i32 = *rax_20.byte_offset(-8);
                
                if rcx_6 > rax_22
                {
                    /* tailcall */
                    return sub_72a980("assertion failed: start.raw <= e…");
                }
                
                var_128 = rcx_6;
                *var_128[4] = rax_22;
                *var_128[8] = rax_3;
                _$LT$ruff_python_formatter..verbatim..FormatVerbatimStatementRange$u20$as$u20$ruff_formatter..Format$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::fmt::hedec0059cabf53e0(&var_168, &var_128, arg4);
                rax_10 = var_168;
                
                if rax_10 != 4
                {
                    goto 'label_72a92b;
                }
                
                *arg1.byte_offset(8) = rbp_1;
                *arg1 = 4;
            }
            else
            {
                *arg1.byte_offset(8) = rbp_1;
                *arg1 = 4;
            }
        }
        else
        {
            *arg3 = &rdi_11[0x10];
            var_128 = rdi_11;
            *var_128[8] = 5;
            let mut rax_16: i64;
            let mut rdx_5: i64;
            rax_16 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Stmt$GT$$GT$::from::h095e0f7c3429d85d(rdi_11);
            var_168 = rax_16;
            let var_160_1: i64 = rdx_5;
            let mut rax_17: i64;
            let mut rdx_6: i64;
            rax_17 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(r13.byte_offset(0x10), &var_168);
            ruff_python_formatter::verbatim::write_suppressed_statements::h25ad3449fcbf65fe(arg1, 
                rbx_2, &var_128, rax_17, rdx_6, arg3, arg4);
        }
    }
    
    core::ptr::drop_in_place$LT$ruff_python_formatter..comments..Comments$GT$::he9abffb240eba4a8(
        &var_d0)
}
