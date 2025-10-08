
  fn ruff_python_formatter::comments::placement::max_empty_lines::h787bd2fd7fcb014f(arg1: *mut i8, arg2: i64) -> u64

{
    if arg2 >> 0x20 != 0
    {
        core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(1);
        trap(6);
    }
    
    let mut rbx: i32 = 0;
    core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(0);
    let mut var_58: ();
    ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_58, arg1, arg2, 0, 
        arg2);
    
    loop
    {
        let mut rbp_1: i32 = 0;
        
        loop
        {
            let mut var_64: ();
            _$LT$ruff_python_trivia..tokenizer..SimpleTokenizer$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7bb75a5db8d15488(&var_64, &var_58);
            let var_5c: i8;
            let rax_3: u32 = var_5c;
            
            if rax_3 <= 3
            {
                if rax_3 == 0
                {
                    rbx = core::cmp::Ord::max::ha63d121e4ef68b69(rbp_1, rbx);
                    break;
                }
                
                if rax_3 == 1
                {
                    continue;
                }
                
                rbx = core::cmp::Ord::max::ha63d121e4ef68b69(rbp_1, rbx);
            }
            else if rax_3 == 4
            {
                rbp_1 += 1;
                continue;
            }
            else if rax_3 != 0x5a
            {
                rbx = core::cmp::Ord::max::ha63d121e4ef68b69(rbp_1, rbx);
            }
            
            let rax_5: i32 = core::cmp::Ord::max::ha63d121e4ef68b69(rbp_1, rbx);
            
            if rax_5 < 1
            {
                return 0;
            }
            
            return rax_5 - 1;
        }
    }
}
