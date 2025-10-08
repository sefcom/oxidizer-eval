
  int64_t ruff_python_formatter::comments::placement::handle_pattern_match_as_comment::h1d3128bda0017e3f(int64_t* arg1, int64_t* arg2, char* arg3, int64_t arg4)

{
    int64_t result = arg2[2];
    
    if (result == 0x5e)
    {
        label_703adc:
        *(arg1 + 0x40) = *(arg2 + 0x40);
        int128_t zmm0 = *arg2;
        int128_t zmm1 = *(arg2 + 0x10);
        int128_t zmm2 = *(arg2 + 0x20);
        *(arg1 + 0x30) = *(arg2 + 0x30);
        *(arg1 + 0x20) = zmm2;
        *(arg1 + 0x10) = zmm1;
        *arg1 = zmm0;
    }
    else
    {
        int64_t rsi = arg2[3];
        int64_t result_1 = result;
        int64_t var_80 = rsi;
        int64_t* r15_1 = &result_1;
        void var_68;
        ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at::h166ec428bdd164b3(&var_68, 
            _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&result_1), 
            arg3, arg4);
        char var_38 = 0;
        int64_t var_94;
        core::iter::traits::iterator::Iterator::try_fold::h574e0d0b6077c929(&var_94, &var_68, 
            &var_38);
        int64_t var_a0;
        char var_8c;
        int32_t var_98;
        
        if (var_8c != 0x5a)
        {
            int32_t var_98_1 = var_8c;
            var_a0 = var_94;
        }
        else
            var_98 = 0x5a;
        int32_t var_74;
        result = core::option::Option$LT$T$GT$::filter::h8b58b23f5402a20d(&var_74, &var_a0);
        char var_6c;
        
        if (var_6c == 0x5a)
            goto label_703adc;
        
        int32_t rax_2 = var_74;
        int32_t rcx_1 = *(arg2 + 0x44);
        
        if (rcx_1 >= rax_2)
            r15_1 = arg2;
        
        void* rax_3 = &var_80;
        char rcx_2 = arg2[9];
        int64_t rdi_4 = arg2[8];
        
        if (rcx_1 >= rax_2)
            rax_3 = &arg2[1];
        
        result = *rax_3;
        arg1[1] = *r15_1;
        arg1[2] = result;
        arg1[3] = rdi_4;
        arg1[4] = 0;
        *(arg1 + 0x21) = rcx_2;
        *arg1 = 0x60 - 0;
    }
    
    return result;
}
