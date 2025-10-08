
  uint64_t ruff_python_formatter::comments::placement::max_empty_lines::h787bd2fd7fcb014f(char* arg1, int64_t arg2)

{
    if (arg2 >> 0x20)
    {
        core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(1);
        trap(6);
    }
    
    int32_t rbx = 0;
    core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(0);
    void var_58;
    ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_58, arg1, arg2, 0, 
        arg2);
    
    while (true)
    {
        int32_t rbp_1 = 0;
        
        while (true)
        {
            void var_64;
            _$LT$ruff_python_trivia..tokenizer..SimpleTokenizer$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7bb75a5db8d15488(&var_64, &var_58);
            char var_5c;
            uint32_t rax_3 = var_5c;
            
            if (rax_3 <= 3)
            {
                if (!rax_3)
                {
                    rbx = core::cmp::Ord::max::ha63d121e4ef68b69(rbp_1, rbx);
                    break;
                }
                
                if (rax_3 == 1)
                    continue;
                
                rbx = core::cmp::Ord::max::ha63d121e4ef68b69(rbp_1, rbx);
            }
            else if (rax_3 == 4)
            {
                rbp_1 += 1;
                continue;
            }
            else if (rax_3 != 0x5a)
                rbx = core::cmp::Ord::max::ha63d121e4ef68b69(rbp_1, rbx);
            
            int32_t rax_5 = core::cmp::Ord::max::ha63d121e4ef68b69(rbp_1, rbx);
            
            if (rax_5 < 1)
                return 0;
            
            return rax_5 - 1;
        }
    }
}
