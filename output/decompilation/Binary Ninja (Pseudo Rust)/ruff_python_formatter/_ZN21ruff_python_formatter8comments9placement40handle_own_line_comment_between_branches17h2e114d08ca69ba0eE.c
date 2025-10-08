
  fn ruff_python_formatter::comments::placement::handle_own_line_comment_between_branches::h2e114d08ca69ba0e(arg1: *mut i128, arg2: *mut i64, arg3: i64, arg4: i64, arg5: *mut i8, arg6: u64) -> u64

{
    let mut var_50: i64 = arg3;
    let mut result: u64 = arg2[4];
    
    if result == 0x5e
    {
        'label_70224f:
        arg1[4] = *arg2.byte_offset(0x40);
        let zmm0: i128 = *arg2;
        let zmm1: i128 = *arg2.byte_offset(0x10);
        let zmm2: i128 = *arg2.byte_offset(0x20);
        arg1[3] = *arg2.byte_offset(0x30);
        arg1[2] = zmm2;
        arg1[1] = zmm1;
        *arg1 = zmm0;
    }
    else
    {
        let rcx: i64 = arg2[5];
        let mut result_2: u64 = result;
        let rsi: i64 = *arg2;
        let rdx: *mut c_void = arg2[1];
        result = ruff_python_ast::node::_$LT$impl$u20$ruff_python_ast..generated..AnyNodeRef$GT$::is_first_statement_in_alternate_body::hd90b606c1959148f(&result_2, rsi, rdx);
        
        if result == 0
        {
            goto 'label_70224f;
        }
        
        let rdx_1: u64 = arg2[8];
        let rax: i32 = *arg2.byte_offset(0x44);
        let result_1: i32 = rdx_1;
        let rax_1: i32 = ruff_python_ast::helpers::comment_indentation_after::h010db42c18589fa0(
            arg3, arg4, rdx_1, rax, arg5, arg6);
        let mut rax_3: *mut c_void;
        let mut rdx_3: *mut c_void;
        rax_3 = ruff_python_trivia::whitespace::indentation_at_offset::hf2ddaa94b2cf2757(
            _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_50), 
            arg5, arg6);
        let mut r12_2: *mut c_void = rdx_3;
        
        if rax_3 == 0
        {
            r12_2 = rax_3;
        }
        
        core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(r12_2 >> 0x20 != 0);
        let c_1: bool = rax_1 < r12_2;
        let mut rax_5: u64;
        rax_5 = rax_1 != r12_2 && !c_1;
        rax_5 = rax_5 - 0;
        
        if rax_5 == 0
        {
            let rax_6: i64 = var_50;
            
            if rax_6 == 0x3c || rax_6 == 0x57
            {
                'label_702301:
                result = arg2[9];
                *arg1.byte_offset(8) = rsi;
                arg1[1] = rdx;
                *arg1.byte_offset(0x18) = result_1;
                *arg1.byte_offset(0x1c) = rax;
                arg1[2] = 0;
                *arg1.byte_offset(0x21) = result;
                *arg1 = 0x60;
            }
            else
            {
                let rcx_2: i8 = arg2[9];
                *arg1.byte_offset(8) = rax_6;
                arg1[1] = arg4;
                result = result_1;
                *arg1.byte_offset(0x18) = result;
                *arg1.byte_offset(0x1c) = rax;
                arg1[2] = 0;
                *arg1.byte_offset(0x21) = rcx_2;
                *arg1 = 0x5f;
            }
        }
        else
        {
            result = rax_5;
            
            if result == 1
            {
                goto 'label_70224f;
            }
            
            let result_3: u64 = result_2;
            
            if result_3 != 0x3c && result_3 != 0x57
            {
                goto 'label_702301;
            }
            
            let rcx_3: i8 = arg2[9];
            *arg1.byte_offset(8) = result_3;
            arg1[1] = rcx;
            result = result_1;
            *arg1.byte_offset(0x18) = result;
            *arg1.byte_offset(0x1c) = rax;
            arg1[2] = 0;
            *arg1.byte_offset(0x21) = rcx_3;
            *arg1 = 0x5e;
        }
    }
    
    result
}
