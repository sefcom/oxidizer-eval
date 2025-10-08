
  fn ruff_python_formatter::expression::binary_like::Operand::has_unparenthesized_leading_comments::ha71cc5f7e9cdd6d7(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i8, arg4: i64) -> bool

{
    if *arg1 == 0
    {
        return arg1[3] != 0;
    }
    
    let rbp_1: *mut i32 = arg1[1];
    let mut rax_1: *mut i8;
    let mut rdx: i64;
    rax_1 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(rbp_1);
    let mut var_60: *mut i8 = rax_1;
    let var_58_1: i64 = rdx;
    let mut rax_2: i64;
    let mut rdx_1: i64;
    rax_2 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(
        arg2.byte_offset(0x10), &var_60);
    let mut rax_3: u64;
    let mut rdx_2: i64;
    rax_3 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(rbp_1);
    let rcx: *mut c_void = *arg2.byte_offset(0x60);
    
    if ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_3, rdx_2, *rcx.byte_offset(8), *rcx.byte_offset(0x10), arg3, arg4) == 0
    {
        return rdx_1 != 0;
    }
    
    let mut var_40: i64 = rax_2;
    let var_38_1: i64 = rax_2 + rdx_1 * 0xc;
    var_60 = arg3;
    let var_58_2: i64 = arg4;
    let var_50_1: *mut c_void = &arg1[1];
    _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h5edd77dd602bc49b(&var_40, &var_60)
}
