
  int128_t* rg::flags::hiargs::HiArgs::searcher::h183c926e645b97ae(int128_t* arg1, void* arg2)

{
    char rcx = 0xa;
    
    if (*(arg2 + 0x387) & 1)
        rcx = 0;
    
    char rax = *(arg2 + 0x371);
    int64_t var_58 = 0;
    int128_t s;
    __builtin_memset(&s, 0, 0x18);
    char var_1e = 0;
    char var_1b = 0;
    char var_17 = 1;
    int128_t var_48 = *(arg2 + 0x20);
    char var_20 = rax;
    char var_1f = rcx;
    char var_1c = *(arg2 + 0x378);
    char var_1a = *(arg2 + 0x37a);
    char var_18 = *(arg2 + 0x37d);
    char var_19 = *(arg2 + 0x37c);
    char var_16 = *(arg2 + 0x38d);
    int64_t rax_6;
    
    if (*(arg2 + 0x60) != 2)
    {
        int64_t rax_8;
        int64_t rdx_1;
        rax_8 = rg::flags::lowargs::ContextModeLimited::get::h7014c861f00e9897(arg2 + 0x60);
        *s[8] = rax_8;
        s = rdx_1;
        rax_6 = *(arg2 + 0x90);
        
        if (rax_6)
        {
            label_6501d3:
            
            if (rax_6 != 1)
                char var_17_1 = 0;
            else
                int64_t var_28_1 = *(arg2 + 0x98);
        }
    }
    else
    {
        char var_1b_1 = 1;
        rax_6 = *(arg2 + 0x90);
        
        if (rax_6)
            goto label_6501d3;
    }
    return grep_searcher::searcher::SearcherBuilder::build::h3a0046083d70284f(arg1, &var_58);
}
