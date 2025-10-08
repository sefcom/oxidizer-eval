
  char const (**)[0xc5] uu_cat::write_end_of_line::h1af273733bdb3f49(int64_t* arg1, int64_t* arg2, int64_t arg3, uint64_t arg4, char arg5)

{
    int64_t rax;
    int64_t var_28 = rax;
    char const (** result)[0xc5] = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h4762d2070cade9bd(arg2, arg3, arg4);
    
    if (!result)
    {
        if (arg5)
            result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h92f2b65981f505d2(arg2);
        
        if (arg5 && result)
        {
            *arg1 = -0x8000000000000000;
            arg1[1] = result;
        }
        else
            *arg1 = -0x7ffffffffffffffa;
    }
    else
    {
        *arg1 = -0x8000000000000000;
        arg1[1] = result;
    }
    
    return result;
}
