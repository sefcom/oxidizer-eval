
  void ruff_python_formatter::pattern::pattern_match_mapping::find_double_star::h2802c766db8ed4ca(int32_t* arg1, void* arg2, char* arg3, int64_t arg4)

{
    int64_t var_68;
    
    if (*(arg2 + 0x4f) != 0xda)
    {
        int64_t rax_1 = *(arg2 + 0x28);
        void* rdi_1;
        
        if (!rax_1)
            rdi_1 = nullptr;
        else
            rdi_1 = *(arg2 + 0x20) + rax_1 * 0x68 - 0x68;
        
        void var_58;
        ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at::h166ec428bdd164b3(&var_58, 
            core::option::Option$LT$T$GT$::map_or::he858cb0ee03f81dc(rdi_1, *(arg2 + 0x58)), arg3, 
            arg4);
        core::iter::traits::iterator::Iterator::try_fold::hd74ba33ea4c4c1ad(&var_68, &var_58);
    }
    
    char var_60;
    
    if (*(arg2 + 0x4f) == 0xda || var_60 == 0x5a)
    {
        *arg1 = 0;
        return;
    }
    
    *(arg1 + 4) = var_68;
    *(arg1 + 0xc) = *(arg2 + 0x30);
    *arg1 = 1;
}
