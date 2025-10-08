
  fn ruff_python_formatter::statement::suite::FormatSuite::between_alternative_blocks_empty_line::h239b615e527f202a(arg1: *mut i32, arg2: i8, arg3: i64, arg4: *mut i64, arg5: *mut i64, arg6: i64, arg7: *mut c_void)

{
    if arg2 > 1 || (arg2 & 1) != 0
    {
        *arg1 = 4;
        return;
    }
    
    let mut r14: *mut i64 = arg3 + (arg4 << 7) - 0x80;
    
    if arg4 == 0
    {
        r14 = arg4;
    }
    
    let mut rax_2: *mut c_void;
    let mut rdx: i64;
    rax_2 =
        ruff_python_formatter::statement::suite::trailing_function_or_class_def::h092984c02e8033d6(
        r14);
    
    if rax_2 != 0x5e
    {
        let mut var_38: *mut c_void = rax_2;
        let var_30_1: i64 = rdx;
        let mut rax_3: i64;
        
        if r14 == 0
        {
            rax_3 = 0x5e;
        }
        else
        {
            rax_3 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Stmt$GT$$GT$::from::h095e0f7c3429d85d(r14);
        }
        
        let mut var_50: i64 = rax_3;
        let var_48_1: i64 = rdx;
        let mut rax_4: i64;
        let mut rdx_1: i64;
        rax_4 = core::iter::traits::iterator::Iterator::try_fold::hf60f71f95bfbd5b9(&var_50, arg5);
        let mut rax_5: i64;
        let mut rdx_2: i64;
        
        if rax_4 != 0x5e
        {
            let rdi_4: *mut c_void = (*arg5).byte_offset(0x10);
            var_50 = rax_4;
            let var_48_2: i64 = rdx_1;
            rax_5 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(rdi_4, &var_50);
        }
        
        let mut rbp_1: i32;
        
        if rax_4 == 0x5e || rdx_2 == 0
        {
            rbp_1 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_38);
        }
        else
        {
            rbp_1 = *(rax_5 + rdx_2 * 0xc - 8);
            _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_38);
        }
        
        let r15_1: i64 = *arg7.byte_offset(0x30);
        let rax_6: *mut i64 = r15_1(arg6);
        
        if ruff_python_trivia::tokenizer::lines_after_ignoring_end_of_line_trivia::h8509e8935b592faf(rbp_1, *rax_6, rax_6[1]) < 2
        {
            if *r15_1(arg6).byte_offset(0x3a) == 1
            {
                var_50 = 0x301;
                (*arg7.byte_offset(0x18))(arg6, &var_50);
            }
            else if var_38 == 3 &&
                *ruff_formatter::formatter::Formatter$LT$Context$GT$::options::he55f9fce45a2dc4a().
                byte_offset(7) == 1
            {
                var_50 = 0x301;
                (*arg7.byte_offset(0x18))(arg6, &var_50);
            }
        }
    }
    
    *arg1 = 4;
}
