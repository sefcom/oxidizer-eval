
  int64_t uu_join::Repr$LT$Sep$GT$::print_format::h5f25780dab7de158(void* arg1, int64_t* arg2, void* arg3, void* arg4)

{
    int64_t rbp = *(arg1 + 0x140);
    int64_t rax = *(arg1 + 0x108);
    int64_t var_58 = *(arg1 + 0x110);
    int64_t rax_2 = *(arg1 + 0x138);
    int64_t r15 = *(arg1 + 0x120);
    uint64_t rbx = *(arg1 + 0x128);
    int64_t r14 = 0;
    int64_t i;
    
    do
    {
        if (r14 >= rbp)
            return 0;
        
        int64_t rax_4 =
            _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(
            r14);
        
        if (r14)
        {
            int64_t rax_5;
            uint64_t rdx_2;
            rax_5 = _$LT$uu_join..MultiByteSep$u20$as$u20$uu_join..Separator$GT$::output_separator::hb76fe36ffd6c0412(rax);
            i = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, rax_5, rdx_2);
            
            if (i)
                break;
        }
        
        int64_t rax_3;
        uint64_t rdx_1;
        rax_3 = uu_join::State::print_line::_$u7b$$u7b$closure$u7d$$u7d$::h21253a944e5fa996(arg3, 
            arg4, (r14 << 4) + rax_2);
        bool cond:0_1 = !rax_3;
        
        if (!rax_3)
            rax_3 = r15;
        
        if (cond:0_1)
            rdx_1 = rbx;
        
        i = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, rax_3, rdx_1);
        r14 = rax_4;
    } while (!i);
    
    return i;
}
