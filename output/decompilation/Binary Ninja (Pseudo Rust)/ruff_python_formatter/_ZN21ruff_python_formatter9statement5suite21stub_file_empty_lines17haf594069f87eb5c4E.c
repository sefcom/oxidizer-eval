
  fn ruff_python_formatter::statement::suite::stub_file_empty_lines::haf594069f87eb5c4(arg1: *mut i32, arg2: i8, arg3: *mut i64, arg4: *mut i64, arg5: i64, arg6: i64, arg7: i64, arg8: *mut c_void) -> *mut i32

{
    let r12: i64 = *arg8.byte_offset(0x30);
    let rax_1: *mut i64 = r12(arg7);
    let rcx: *mut i8 = *rax_1;
    let rax_2: i64 = rax_1[1];
    let mut rbx: u64;
    rbx = 1;
    
    if (arg5 | arg6) == 0
    {
        rbx = ruff_python_formatter::statement::suite::stub_suite_can_omit_empty_line::h43e547e2359e7308(arg3, arg4, arg7, arg8) ^ 1;
    }
    
    let mut rax_4: i64;
    let mut rdx_1: *mut c_void;
    rax_4 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Stmt$GT$$GT$::from::h095e0f7c3429d85d(arg3);
    let mut rax_5: i64;
    let mut rdx_2: *mut c_void;
    rax_5 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Stmt$GT$$GT$::from::h095e0f7c3429d85d(arg4);
    let rax_7: i8 = ruff_python_formatter::statement::suite::should_insert_blank_line_after_class_in_stub_file::h5a93a285ad0ff8fd(rax_4, rdx_1, rax_5, rdx_2, r12(arg7));
    let mut rax_9: *mut c_void;
    let mut rsi_3: *mut i16;
    let mut rdi_8: i64;
    let mut var_68: i16;
    
    if arg2 != 2
    {
        if rbx == 0
        {
            rax_9 = arg8;
            rdi_8 = arg7;
            
            if rax_7 == 0
            {
                var_68 = 0x201;
            }
            else
            {
                var_68 = 0x301;
            }
        }
        else
        {
            let mut rax_8: i32;
            rax_8 = ruff_python_trivia::tokenizer::lines_after_ignoring_end_of_line_trivia::h8509e8935b592faf(
                _$LT$ruff_python_ast..generated..Stmt$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h6da43eeee2e8d007(arg3), 
                rcx, rax_2) >= 2;
            rax_9 = arg8;
            rdi_8 = arg7;
            
            if (rax_7 | rax_8) != 0
            {
                var_68 = 0x301;
            }
            else
            {
                var_68 = 0x201;
            }
        }
        
        rsi_3 = &var_68;
    }
    else
    {
        rbx |= rax_7;
        
        if rbx == 0
        {
            var_68 = 0x201;
        }
        else
        {
            var_68 = 0x301;
        }
        
        rsi_3 = &var_68;
        rdi_8 = arg7;
        rax_9 = arg8;
    }
    (*rax_9.byte_offset(0x18))(rdi_8, rsi_3);
    *arg1 = 4;
    arg1
}
