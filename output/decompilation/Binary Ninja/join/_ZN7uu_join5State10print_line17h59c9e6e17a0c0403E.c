
  int64_t uu_join::State::print_line::h59c9e6e17a0c0403(void* arg1, int64_t* arg2, void* arg3, void* arg4)

{
    int64_t rax;
    int64_t var_28 = rax;
    int64_t result;
    
    if (!*(arg4 + 0x10))
    {
        int64_t r15_1 = *(arg1 + 0x40);
        int64_t rax_2;
        uint64_t rdx;
        rax_2 = uu_join::Line::get_field::h7dd14bed39768627(arg3, r15_1);
        
        if (!rax_2)
        {
            rax_2 = *(arg4 + 0x18);
            rdx = *(arg4 + 0x20);
        }
        
        result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, rax_2, rdx);
        
        if (!result)
        {
            result = uu_join::Repr$LT$Sep$GT$::print_fields::h97f24fe6eba7f34c(arg2, arg3, r15_1);
            
            if (!result)
            {
                *var_28[7] = *(arg4 + 0x28);
                return _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, &*var_28[7], 1);
            }
        }
    }
    else
    {
        result = uu_join::Repr$LT$Sep$GT$::print_format::hdcf49612cc94556e(arg4, arg2, arg3, arg1);
        
        if (!result)
        {
            *var_28[7] = *(arg4 + 0x28);
            return _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, &*var_28[7], 1);
        }
    }
    
    return result;
}
