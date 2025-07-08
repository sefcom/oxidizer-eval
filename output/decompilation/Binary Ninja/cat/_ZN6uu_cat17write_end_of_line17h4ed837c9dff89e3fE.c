
  char const (**)[0x92] uu_cat::write_end_of_line::h4ed837c9dff89e3f(int64_t* arg1, int64_t* arg2, int64_t arg3, uint64_t arg4, char arg5)

{
    int64_t rax;
    int64_t var_28 = rax;
    char const (** result)[0x92] =
        _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(
        arg2, arg3, arg4);
    
    if (!result)
    {
        if (arg5)
            result = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::hf4899ae455fb37b6(arg2);
        
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
