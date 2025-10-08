
  fn ruff_python_formatter::expression::expr_bin_op::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprBinOp$GT$::needs_parentheses::ha7c217592f3ff950(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut *mut i8) -> *mut c_void

{
    let mut result: *mut c_void;
    result = 1;
    
    if arg2 != 0x27
    {
        let rdx: *mut i32 = *arg1;
        let rax_1: u64 = *rdx - 0x11;
        
        if rax_1 > 3
        {
            return nullptr;
        }
        
        let mut var_38: i64;
        let mut result_1: *mut c_void;
        let mut r15_1: i64;
        
        match rax_1
        {
            0 =>
            {
                var_38 = 2;
                result_1 = &rdx[2];
                r15_1 = 2;
                
                if *rdx.byte_offset(8) == -0x7fffffffffffffff
                {
                    return nullptr;
                }
                
                'label_709447:
                
                if _$LT$ruff_python_ast..expression..StringLike$u20$as$u20$ruff_python_formatter..string..StringLikeExtensions$GT$::is_multiline::h5df9e50e5280e4ac(&var_38, arg4) != 0 &&
                    ruff_python_formatter::expression::has_parentheses::heb1fda5cfc7f167d(arg1[1], 
                    arg4) != 2
                {
                    let r14_2: *mut c_void = arg4[2];
                    
                    if ruff_python_formatter::comments::Comments::dangling::h377ee9ebf27dc56b(r14_2)
                        == 0
                    {
                        let mut var_28: i64 = *".".byte_offset(r15_1 << 3);
                        let result_2: *mut c_void = result_1;
                        
                        if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfe322db32d3ddec8(r14_2.byte_offset(0x40), &var_28) == 0
                        {
                            let mut rax_10: i64;
                            let mut rdx_2: i64;
                            rax_10 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(arg1[1]);
                            var_28 = rax_10;
                            let var_20_1: i64 = rdx_2;
                            let mut rcx_1: i64;
                            rcx_1 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfe322db32d3ddec8(r14_2.byte_offset(0x40), &var_28) == 0;
                            return rcx_1 * 3;
                        }
                    }
                }
                
                return nullptr;
            }
            1 =>
            {
                result = &rdx[2];
                var_38 = 3;
                result_1 = result;
                r15_1 = 3;
                
                if !(0 + -(*rdx.byte_offset(8)))
                {
                    goto 'label_709447;
                }
            }
            2 =>
            {
                result = &rdx[2];
                var_38 = 0;
                result_1 = result;
                r15_1 = 0;
                
                if 0 + -(*rdx.byte_offset(8))
                {
                    goto 'label_709447;
                }
            }
            3 =>
            {
                var_38 = 1;
                result_1 = &rdx[2];
                r15_1 = 1;
                
                if *rdx.byte_offset(8) != 0
                {
                    goto 'label_709447;
                }
                
                return nullptr;
            }
        }
    }
    
    result
}
