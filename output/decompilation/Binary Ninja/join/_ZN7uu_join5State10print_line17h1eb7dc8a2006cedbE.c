
  int64_t uu_join::State::print_line::h1eb7dc8a2006cedb(void* arg1, int64_t* arg2, void* arg3, void* arg4)

{
    int64_t rax;
    int64_t var_28 = rax;
    int64_t result;
    
    if (!*(arg4 + 0x10))
    {
        int64_t r15_1 = *(arg1 + 0x40);
        int64_t rax_2;
        uint64_t rdx;
        rax_2 = uu_join::Line::get_field::h5172ba7928bd7492(arg3, r15_1);
        
        if (!rax_2)
        {
            rax_2 = *(arg4 + 0x18);
            rdx = *(arg4 + 0x20);
        }
        
        result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h6a39e9ebdd504d15(arg2, rax_2, rdx);
        
        if (!result)
        {
            result =
                uu_join::Repr$LT$Sep$GT$::print_fields::ha259f750101f9243(arg4, arg2, arg3, r15_1);
            
            if (!result)
            {
                *var_28[7] = *(arg4 + 0x28);
                return _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h6a39e9ebdd504d15(arg2, &*var_28[7], 1);
            }
        }
    }
    else
    {
        result = uu_join::Repr$LT$Sep$GT$::print_format::h6dd31ac35e09646a(arg4, arg2, arg3, arg1);
        
        if (!result)
        {
            *var_28[7] = *(arg4 + 0x28);
            return _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h6a39e9ebdd504d15(arg2, &*var_28[7], 1);
        }
    }
    
    return result;
}
