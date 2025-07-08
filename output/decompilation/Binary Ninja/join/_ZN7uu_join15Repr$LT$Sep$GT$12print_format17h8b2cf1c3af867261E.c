
  int64_t uu_join::Repr$LT$Sep$GT$::print_format::h8b2cf1c3af867261(void* arg1, int64_t* arg2, void* arg3, void* arg4)

{
    int64_t rax = *(arg1 + 8);
    int64_t r14 = *(arg1 + 0x10);
    int64_t r15 = *(arg1 + 0x18);
    uint64_t r13 = *(arg1 + 0x20);
    int64_t rbp = 0;
    int64_t i;
    
    do
    {
        if (rbp >= r14)
            return 0;
        
        int64_t rax_3 =
            _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(
            rbp);
        
        if (rbp)
        {
            i = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, 
                _$LT$uu_join..OneByteSep$u20$as$u20$uu_join..Separator$GT$::output_separator::h46f4732182ca8865(arg1 + 0x29), 
                1);
            
            if (i)
                break;
        }
        
        int64_t rax_2;
        uint64_t rdx_1;
        rax_2 = uu_join::State::print_line::_$u7b$$u7b$closure$u7d$$u7d$::h21253a944e5fa996(arg3, 
            arg4, (rbp << 4) + rax);
        bool cond:0_1 = !rax_2;
        
        if (!rax_2)
            rax_2 = r15;
        
        if (cond:0_1)
            rdx_1 = r13;
        
        i = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, rax_2, rdx_1);
        rbp = rax_3;
    } while (!i);
    
    return i;
}
