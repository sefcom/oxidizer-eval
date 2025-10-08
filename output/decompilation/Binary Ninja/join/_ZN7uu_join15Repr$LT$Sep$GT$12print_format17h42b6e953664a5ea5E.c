
  int64_t uu_join::Repr$LT$Sep$GT$::print_format::h42b6e953664a5ea5(void* arg1, int64_t* arg2, int64_t* arg3)

{
    int64_t rax;
    int64_t var_38 = rax;
    int64_t r13 = *(arg1 + 0x10);
    
    if (!r13)
        return 0;
    
    char* r12_1 = *(arg1 + 8);
    int64_t rbp_1 = *(arg1 + 0x18);
    uint64_t r15_1 = *(arg1 + 0x20);
    int64_t rax_1;
    uint64_t rdx;
    rax_1 = uu_join::State::combine::_$u7b$$u7b$closure$u7d$$u7d$::h139dd91493e9d14f(arg3, r12_1);
    bool cond:0_1 = !rax_1;
    
    if (!rax_1)
        rax_1 = rbp_1;
    
    if (cond:0_1)
        rdx = r15_1;
    
    int64_t result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h6a39e9ebdd504d15(arg2, rax_1, rdx);
    
    if (result)
        return result;
    
    void* r12_2 = &r12_1[0x10];
    
    while (true)
    {
        int64_t temp1_1 = r13;
        r13 -= 1;
        
        if (temp1_1 == 1)
            return 0;
        
        result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h6a39e9ebdd504d15(arg2, 1, 0);
        
        if (result)
            return result;
        
        int64_t rax_2;
        uint64_t rdx_1;
        rax_2 =
            uu_join::State::combine::_$u7b$$u7b$closure$u7d$$u7d$::h139dd91493e9d14f(arg3, r12_2);
        bool cond:1_1 = !rax_2;
        
        if (!rax_2)
            rax_2 = rbp_1;
        
        if (cond:1_1)
            rdx_1 = r15_1;
        
        result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h6a39e9ebdd504d15(arg2, rax_2, rdx_1);
        r12_2 += 0x10;
        
        if (result)
            return result;
    }
}
