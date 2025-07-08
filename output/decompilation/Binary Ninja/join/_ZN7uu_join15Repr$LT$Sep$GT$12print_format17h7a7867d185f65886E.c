
  int64_t uu_join::Repr$LT$Sep$GT$::print_format::h7a7867d185f65886(void* arg1, int64_t* arg2, int64_t* arg3)

{
    int64_t r12 = *(arg1 + 0x140);
    int64_t rax = *(arg1 + 0x108);
    int64_t var_50 = *(arg1 + 0x110);
    int64_t rax_2 = *(arg1 + 0x138);
    int64_t r14 = *(arg1 + 0x120);
    uint64_t r13 = *(arg1 + 0x128);
    int64_t rbp = 0;
    int64_t i;
    
    do
    {
        if (rbp >= r12)
            return 0;
        
        int64_t rax_4 =
            _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(
            rbp);
        
        if (rbp)
        {
            int64_t rax_5;
            uint64_t rdx_1;
            rax_5 = _$LT$uu_join..MultiByteSep$u20$as$u20$uu_join..Separator$GT$::output_separator::hb76fe36ffd6c0412(rax);
            i = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, rax_5, rdx_1);
            
            if (i)
                break;
        }
        
        int64_t rax_3;
        uint64_t rdx;
        rax_3 = uu_join::State::combine::_$u7b$$u7b$closure$u7d$$u7d$::h06ca42913a256998(arg3, 
            (rbp << 4) + rax_2);
        bool cond:0_1 = !rax_3;
        
        if (!rax_3)
            rax_3 = r14;
        
        if (cond:0_1)
            rdx = r13;
        
        i = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, rax_3, rdx);
        rbp = rax_4;
    } while (!i);
    
    return i;
}
