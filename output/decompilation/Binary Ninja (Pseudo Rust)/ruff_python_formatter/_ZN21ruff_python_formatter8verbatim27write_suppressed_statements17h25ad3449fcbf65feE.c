
  fn ruff_python_formatter::verbatim::write_suppressed_statements::h25ad3449fcbf65fe(arg1: *mut i32, arg2: *mut c_void, arg3: *mut i128, arg4: i64, arg5: i64, arg6: *mut i64, arg7: *mut i64) -> *mut i64

{
    let r15: i64 = *arg7;
    let rbx: i64 = *(arg7[1] + 0x30);
    let rax_2: *mut c_void = rbx(r15);
    alloc::rc::RcInnerPtr::inc_strong::h8686aaaa10b78ebb(*rax_2.byte_offset(0x10));
    let r12_1: *mut c_void = *rax_2.byte_offset(0x10);
    let mut var_b8: *mut c_void = r12_1;
    let rax_3: *mut i64 = rbx(r15);
    let rsi: *mut i8 = *rax_3;
    let mut rbx_1: u64 = rax_3[1];
    let mut var_198: i128 = *arg3;
    let rax_4: i32 = ruff_python_formatter::verbatim::Indentation::from_stmt::hc466a24ed7083ab9(
        *arg3, rsi, rbx_1);
    let mut var_c8: *mut c_void = *arg6;
    let mut rdx_1: i64 = arg5;
    let mut rax_6: i64 = arg4;
    let var_180: u64 = rbx_1;
    let mut var_168: i64;
    let mut var_120: i64;
    let mut var_b0: i64;
    let mut var_a8_2: i64;
    
    loop
    {
        var_b0 = rax_6;
        let var_a8_1: i64 = rdx_1;
        let var_a0_1: *mut i8 = rsi;
        let var_98_1: u64 = rbx_1;
        let var_90_1: i8 = 1;
        _$LT$ruff_python_formatter..verbatim..CommentRangeIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfeeb9aad30484eb3(&var_120, &var_b0);
        let rcx: i64 = var_120;
        
        if rcx != 4
        {
            /* jump -> *(&data_487bcc).byte_offset(rcx << 2) + &data_487bcc */
        }
        
        let mut rax_9: i64;
        let mut rdx_2: i64;
        rax_9 = ruff_python_formatter::statement::suite::_$LT$impl$u20$core..convert..From$LT$ruff_python_formatter..statement..suite..SuiteChildStatement$GT$$u20$for$u20$ruff_python_ast..generated..AnyNodeRef$GT$::from::h1533b44ca56a2d08(&var_198);
        var_120 = rax_9;
        let var_118_1: i64 = rdx_2;
        let mut rax_10: i64;
        let mut rdx_3: i64;
        rax_10 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(r12_1.byte_offset(0x10), &var_120);
        var_b0 = rax_10;
        var_a8_2 = rdx_3;
        let var_a0_2: *mut i8 = rsi;
        let var_98_2: u64 = var_180;
        let var_90_2: i8 = 1;
        _$LT$ruff_python_formatter..verbatim..CommentRangeIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfeeb9aad30484eb3(&var_168, &var_b0);
        let rcx_3: i64 = var_168;
        
        if rcx_3 != 4
        {
            /* jump -> jump_table_487bdc[rcx_3] + &jump_table_487bdc */
        }
        
        let rdi_8: *mut i64 = var_c8;
        
        if rdi_8 == arg6[1]
        {
            break;
        }
        
        *arg6 = &rdi_8[0x10];
        var_198 = rdi_8;
        *var_198[8] = 5;
        let mut rax_15: i64;
        let mut rdx_4: i64;
        rax_15 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Stmt$GT$$GT$::from::h095e0f7c3429d85d(rdi_8);
        var_120 = rax_15;
        let var_118: i64 = rdx_4;
        rax_6 =
            ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(
            r12_1.byte_offset(0x10), &var_120);
        var_c8 = &rdi_8[0x10];
        rbx_1 = var_180;
    }
    
    let r14_3: *mut i64 = var_198;
    let mut rax_17: i64;
    let mut rdx_5: i64;
    rax_17 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Stmt$GT$$GT$::from::h095e0f7c3429d85d(r14_3);
    var_168 = rax_17;
    let mut rax_20: i32;
    
    loop
    {
        let var_160_1: i64 = rdx_5;
        var_120 = rax_17;
        let var_118_2: i64 = rdx_5;
        let mut rax_18: i64;
        let mut rdx_6: i64;
        rax_18 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(r12_1.byte_offset(0x10), &var_120);
        let rax_19: *mut c_void = rax_18 + rdx_6 * 0xc;
        let mut rdx_7: i64;
        rdx_7 = rax_19 == 0xc;
        rdx_7 |= rdx_6 == 0;
        
        if rdx_7 == 0
        {
            rax_20 = *rax_19.byte_offset(-8);
            break;
        }
        
        rax_17 = ruff_python_ast::node::_$LT$impl$u20$ruff_python_ast..generated..AnyNodeRef$GT$::last_child_in_body::h106de3f3c845d12e(&var_168);
        
        if rax_17 == 0x5e
        {
            ruff_python_formatter::statement::trailing_semicolon::h3caa94f8332101f0(&var_120, 
                var_168, var_160_1, rsi, var_180);
            rax_20 = core::option::Option$LT$T$GT$::map_or::h64e018d7ba021b4c(&var_120, 
                _$LT$ruff_python_formatter..statement..suite..SuiteChildStatement$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h8612c18e9704ac05(&var_198));
            break;
        }
        
        var_168 = rax_17;
    }
    
    let rcx_8: i32 = *arg2.byte_offset(4);
    
    if rcx_8 > rax_20
    {
        /* tailcall */
        return sub_72b233("assertion failed: start.raw <= e…");
    }
    
    var_b0 = rcx_8;
    *var_b0[4] = rax_20;
    var_a8_2 = rax_4;
    _$LT$ruff_python_formatter..verbatim..FormatVerbatimStatementRange$u20$as$u20$ruff_formatter..Format$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::fmt::hedec0059cabf53e0(&var_120, &var_b0, arg7);
    let rax_22: i32 = var_120;
    let mut rcx_9: *mut i32;
    
    if rax_22 != 4
    {
        let var_110: i64;
        arg1[5] = *var_110[4];
        rcx_9 = arg1;
        *arg1.byte_offset(4) = *var_120[4];
    }
    else
    {
        rcx_9 = arg1;
        *rcx_9.byte_offset(8) = r14_3;
    }
    
    *rcx_9 = rax_22;
    core::ptr::drop_in_place$LT$ruff_python_formatter..comments..Comments$GT$::he9abffb240eba4a8(
        &var_b8)
}
