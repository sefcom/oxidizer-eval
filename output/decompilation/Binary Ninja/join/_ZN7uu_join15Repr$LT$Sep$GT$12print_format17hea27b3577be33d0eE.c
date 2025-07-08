
  int64_t uu_join::Repr$LT$Sep$GT$::print_format::hea27b3577be33d0e(void* arg1, int64_t* arg2, int64_t* arg3)

{
    int64_t rax = *(arg1 + 8);
    int64_t r12 = *(arg1 + 0x10);
    int64_t r14 = *(arg1 + 0x18);
    uint64_t rbx = *(arg1 + 0x20);
    int64_t rbp = 0;
    int64_t i;
    
    do
    {
        if (rbp >= r12)
            return 0;
        
        int64_t rax_2 =
            _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(
            rbp);
        
        if (rbp)
        {
            i = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, " UnknownErrnoEPERMENOENTESRCHEIN…", 1);
            
            if (i)
                break;
        }
        
        int64_t rax_1;
        uint64_t rdx;
        rax_1 = uu_join::State::combine::_$u7b$$u7b$closure$u7d$$u7d$::h06ca42913a256998(arg3, 
            (rbp << 4) + rax);
        bool cond:0_1 = !rax_1;
        
        if (!rax_1)
            rax_1 = r14;
        
        if (cond:0_1)
            rdx = rbx;
        
        i = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, rax_1, rdx);
        rbp = rax_2;
    } while (!i);
    
    return i;
}
