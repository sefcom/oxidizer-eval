
  fn ruff_python_formatter::expression::format_with_parentheses_comments::h8e448c8362da0824(arg1: *mut i128, arg2: *mut i32, arg3: *mut i64, arg4: *mut i64) -> *mut i32

{
    let mut var_160: *mut i32 = arg2;
    let mut rax: u64;
    let mut rdx: i64;
    rax = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(arg2);
    let r12: i64 = *arg4;
    let rbp: i64 = *(arg4[1] + 0x30);
    rbp(r12);
    let var_1d8: i128 = *rbp(r12);
    let mut var_130: *const i8;
    ruff_python_ast::parenthesize::parentheses_iterator::h98a7a5fd1647c2ff(&var_130, rax, rdx, 
        0x5e);
    let mut var_1a0: i32 = 0;
    let mut var_14c: i8;
    _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..SpecFold$GT$::spec_fold::h7b11a22302d0e2e9(&var_14c, &var_130, &var_1a0);
    let mut rbx_1: i64;
    let mut rbp_1: i64;
    let mut r12_1: *mut c_void;
    let mut r13_1: i64;
    let mut r14_1: i64;
    
    if (var_14c & 1) == 0
    {
        rbp_1 = arg3[5];
        r12_1 = *arg3;
        r13_1 = arg3[1];
        r14_1 = 0;
        rbx_1 = rbp_1;
    }
    else
    {
        let var_148: *mut i8;
        var_130 = var_148;
        r12_1 = *arg3;
        r13_1 = arg3[1];
        r14_1 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::partition_point::h53f9336f7750b3be(
            r12_1, r13_1, &var_130);
        rbp_1 = arg3[5];
        let rax_5: i64 =
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::partition_point::h280149b139eb1595(arg3[4], 
            rbp_1, &var_130);
        
        if r14_1 > r13_1
        {
            var_130 = &data_97adf0;
            let var_128_2: i64 = 1;
            let var_120_2: i64 = 8;
            let var_118_1: i128 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_130);
            /* no return */
        }
        
        rbx_1 = rax_5;
    }
    
    let mut var_70: i64;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h24a88d3a0c186412(&var_70, 
        r12_1, r13_1, r14_1);
    
    if rbx_1 > rbp_1
    {
        var_130 = &data_97adf0;
        let var_128_3: i64 = 1;
        let var_120_3: i64 = 8;
        let var_118_2: i128 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_130);
        /* no return */
    }
    
    let mut var_1b8: i64 = r13_1;
    let mut var_1b0: *mut c_void = r12_1;
    let r14_2: i64 = var_70;
    let var_60: *mut c_void;
    let mut r12_2: *mut c_void = var_60;
    let mut var_50: i64;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h24a88d3a0c186412(&var_50, 
        arg3[4], rbp_1, rbx_1);
    let mut var_1c0: i64;
    let var_58: i64;
    
    if var_58 == 0 || *r12_2.byte_offset(9) != 0
    {
        r12_2 = 4;
        var_1c0 = 0;
    }
    else
    {
        var_1b0 = r12_2.byte_offset(0xc);
        var_1c0 = 1;
        var_1b8 = var_58 - 1;
    }
    
    let rbx_2: i64 = var_50;
    let mut var_158: *mut i64 = &var_160;
    let var_128: i64 = r14_2;
    let var_68: i64;
    let var_120: i64 = var_68;
    var_130 = 1;
    _$LT$ruff_python_formatter..comments..format..FormatLeadingComments$u20$as$u20$ruff_formatter..Format$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::fmt::hc2058df1af78fa4d(&var_1a0, &var_130, arg4);
    
    if var_1a0 != 4
    {
        let result: *mut i32;
        arg1[1] = result;
        *arg1 = var_1a0;
        return result;
    }
    
    var_1a0 = var_1b0;
    let var_198_1: i64 = var_1b8;
    let var_190: *mut *mut i64 = &var_158;
    let var_188_1: i64 = rbx_2;
    let var_48: i64;
    let var_180_1: i64 = var_48;
    var_130 = "()iflambda:crates/ruff_python_fo…";
    let var_128_1: i64 = 1;
    let var_120_1: *mut c_void = r12_2;
    let mut var_118: i128;
    var_118 = var_1c0;
    let var_f0_1: i8 = 0;
    *var_118[8] = &var_1a0;
    let var_108_1: *mut c_void = &data_97ded0;
    let var_100_1: *const i8 = ")iflambda:crates/ruff_python_for…";
    let var_f8_1: i64 = 1;
    let var_40: i64;
    let mut var_140: i64 = var_40;
    let var_38: i64;
    let var_138_1: i64 = var_38;
    let mut var_90: *const *const i8 = &var_130;
    let var_88_1: *mut c_void = &data_97d978;
    let var_80_1: *mut i64 = &var_140;
    let var_78_1: *mut c_void = &data_97d5a8;
    _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(arg1, arg4, &var_90, 2)
}
