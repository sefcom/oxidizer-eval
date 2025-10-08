
  uint64_t ruff_python_formatter::expression::CallChainLayout::apply_in_node::h39eadbd0b5ba4e1a(int32_t arg1, int64_t arg2, int64_t arg3, void* arg4)

{
    int64_t rax;
    int64_t var_28 = rax;
    
    if (!arg1)
    {
        int64_t r15_1 = *(arg4 + 0x30);
        void* rax_2;
        rax_2 = r15_1(arg3);
        uint32_t rcx = *(rax_2 + 0x20);
        
        if (rcx == 3)
        {
            label_7102b5:
            int32_t** rax_3 =
                _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::ha4dd26e64d596d39();
            void* r12 = *(*(r15_1(arg3) + 0x10) + 0x60);
            int64_t* rax_6 = r15_1(arg3);
            /* tailcall */
            return ruff_python_formatter::expression::CallChainLayout::from_expression::h8a81a54727e8f68f(0x10, rax_3, *(r12 + 8), *(r12 + 0x10), *rax_6, rax_6[1]);
        }
        
        arg1 = 2;
        
        if (rcx == 2 && *(rax_2 + 0x24))
            goto label_7102b5;
    }
    
    return arg1;
}
