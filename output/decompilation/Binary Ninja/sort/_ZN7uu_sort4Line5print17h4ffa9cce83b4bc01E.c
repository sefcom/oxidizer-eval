
  int64_t uu_sort::Line::print::h4ffa9cce83b4bc01(char* arg1, uint64_t arg2, int64_t* arg3, void* arg4)

{
    int64_t rax;
    int64_t var_18 = rax;
    
    if (*(arg4 + 0x7c))
        /* tailcall */
        return uu_sort::Line::print_debug::h88f864449603f37c(arg1, arg2, arg4, arg3);
    
    int64_t result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h13b43e7386c9bd95(arg3, arg1, arg2);
    
    if (result)
        return result;
    
    *var_18[7] = *(arg4 + 0x99);
    return _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h13b43e7386c9bd95(arg3, &*var_18[7], 1);
}
