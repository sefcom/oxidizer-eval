
  int64_t uu_join::Repr$LT$Sep$GT$::print_format::h7cbc0a2b1eb53ccf(void* arg1, int64_t* arg2, void* arg3, void* arg4)

{
    int64_t rax = *(arg1 + 8);
    int64_t r14 = *(arg1 + 0x10);
    int64_t r15 = *(arg1 + 0x18);
    uint64_t rbx = *(arg1 + 0x20);
    int64_t rbp = 0;
    int64_t i;
    
    do
    {
        if (rbp >= r14)
            return 0;
        
        int64_t rax_2 =
            _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(
            rbp);
        
        if (rbp)
        {
            i = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, 1, 0);
            
            if (i)
                break;
        }
        
        int64_t rax_1;
        uint64_t rdx_1;
        rax_1 = uu_join::State::print_line::_$u7b$$u7b$closure$u7d$$u7d$::h21253a944e5fa996(arg3, 
            arg4, (rbp << 4) + rax);
        bool cond:0_1 = !rax_1;
        
        if (!rax_1)
            rax_1 = r15;
        
        if (cond:0_1)
            rdx_1 = rbx;
        
        i = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, rax_1, rdx_1);
        rbp = rax_2;
    } while (!i);
    
    return i;
}
