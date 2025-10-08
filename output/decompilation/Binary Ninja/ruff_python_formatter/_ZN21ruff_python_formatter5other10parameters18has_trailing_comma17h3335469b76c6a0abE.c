
  bool ruff_python_formatter::other::parameters::has_trailing_comma::h3335469b76c6a0ab(void* arg1, int64_t arg2, int64_t arg3, char* arg4, int64_t arg5)

{
    if (arg2 == 0x5e)
        return false;
    
    int64_t var_58 = arg2;
    int64_t var_50_1 = arg3;
    int128_t var_b8;
    int128_t var_48;
    int128_t var_a8;
    int128_t var_98;
    
    if (!*(arg1 + 0x10) || *(arg1 + 0x28) || *(arg1 + 0x50) || *(arg1 + 0x40))
    {
        ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at::h166ec428bdd164b3(&var_b8, 
            _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_58), 
            arg4, arg5);
        int128_t var_28_1 = var_98;
        int128_t var_38_1 = var_a8;
        var_48 = var_b8;
    }
    else
    {
        int64_t r15_1 = *(arg1 + 0x58);
        ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at::h166ec428bdd164b3(&var_b8, 
            _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_58), 
            arg4, arg5);
        int128_t var_28_2 = var_98;
        int128_t var_38_2 = var_a8;
        var_48 = var_b8;
        
        if (!r15_1)
        {
            core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_b8, &var_48);
            int64_t* var_88;
            int64_t var_78;
            
            if (*var_b8[8] == 0x5a)
            {
                char var_70_1 = 0x5a;
                label_7151d7:
                var_88 = &var_78;
                uint64_t (* var_80)(int64_t* arg1, int64_t* arg2) = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h0243a89b269b2430;
                var_b8 = &data_97e550;
                *var_b8[8] = 2;
                var_98 = 0;
                var_a8 = &var_88;
                *var_a8[8] = 1;
                core::panicking::panic_fmt::h96f341d36638c225(&var_b8);
                /* no return */
            }
            
            var_78 = var_b8;
            int32_t rax_3 = *var_b8[8];
            char var_70;
            var_70 = rax_3;
            
            if (rax_3 != 0xb)
                goto label_7151d7;
            
            core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_b8, &var_48);
            int64_t var_68;
            
            if (*var_b8[8] == 0x5a)
            {
                char var_60_1 = 0x5a;
                label_715232:
                var_88 = &var_68;
                uint64_t (* var_80_1)(int64_t* arg1, int64_t* arg2) = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h0243a89b269b2430;
                var_b8 = &data_97e570;
                *var_b8[8] = 2;
                var_98 = 0;
                var_a8 = &var_88;
                *var_a8[8] = 1;
                core::panicking::panic_fmt::h96f341d36638c225(&var_b8);
                /* no return */
            }
            
            var_68 = var_b8;
            int32_t rax_5 = *var_b8[8];
            char var_60;
            var_60 = rax_5;
            
            if (rax_5 != 0xe)
                goto label_715232;
        }
    }
    core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_b8, &var_48);
    bool rax_1 = *var_b8[8];
    
    if (rax_1 != 0x5a)
        return rax_1 == 0xb;
    
    core::option::expect_failed::h3f620cfb8545dc61("There must be a token after the …");
    /* no return */
}
