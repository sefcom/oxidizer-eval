
  int64_t uu_join::State::print_line::h0a1786fc20820a6e(void* arg1, int64_t* arg2, void* arg3, void* arg4)

{
    int64_t rax;
    int64_t var_28 = rax;
    int64_t result;
    
    if (!*(arg4 + 0x140))
    {
        int64_t r15_1 = *(arg1 + 0x40);
        int64_t rax_2;
        uint64_t rdx;
        rax_2 = uu_join::Line::get_field::h7dd14bed39768627(arg3, r15_1);
        
        if (!rax_2)
        {
            rax_2 = *(arg4 + 0x120);
            rdx = *(arg4 + 0x128);
        }
        
        result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, rax_2, rdx);
        
        if (!result)
        {
            result = uu_join::Repr$LT$Sep$GT$::print_fields::h1387b25fbf2df66a(*(arg4 + 0x108), 
                *(arg4 + 0x110), arg2, arg3, r15_1);
            
            if (!result)
            {
                *var_28[7] = *(arg4 + 0x148);
                return _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, &*var_28[7], 1);
            }
        }
    }
    else
    {
        result = uu_join::Repr$LT$Sep$GT$::print_format::h5f25780dab7de158(arg4, arg2, arg3, arg1);
        
        if (!result)
        {
            *var_28[7] = *(arg4 + 0x148);
            return _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, &*var_28[7], 1);
        }
    }
    
    return result;
}
