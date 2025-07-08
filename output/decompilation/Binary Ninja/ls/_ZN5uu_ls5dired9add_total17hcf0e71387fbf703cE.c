
  int64_t uu_ls::dired::add_total::hcf0e71387fbf703c(void* arg1, int64_t arg2)

{
    int64_t rax_3 = *(arg1 + 0x30);
    
    if (!rax_3)
    {
        int64_t rax = *(arg1 + 0x10);
        
        if (!rax)
            rax_3 = 0;
        else
            rax_3 = *((rax << 4) + *(arg1 + 8) - 8) + 1;
    }
    
    *(arg1 + 0x30) = rax_3 + arg2 + 2;
    return rax_3 + arg2 + 2;
}
