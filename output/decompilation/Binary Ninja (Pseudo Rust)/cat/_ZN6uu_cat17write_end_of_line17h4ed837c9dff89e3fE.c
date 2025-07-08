
  fn uu_cat::write_end_of_line::h4ed837c9dff89e3f(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: u64, arg5: i8) -> *mut *mut [i8; 0x92]

{
    let rax: i64;
    let var_28: i64 = rax;
    let mut result: *mut *mut [i8; 0x92] =
        _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(
        arg2, arg3, arg4);
    
    if result == 0
    {
        if arg5 != 0
        {
            result = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::hf4899ae455fb37b6(arg2);
        }
        
        if arg5 != 0 && result != 0
        {
            *arg1 = -0x8000000000000000;
            arg1[1] = result;
        }
        else
        {
            *arg1 = -0x7ffffffffffffffa;
        }
    }
    else
    {
        *arg1 = -0x8000000000000000;
        arg1[1] = result;
    }
    
    result
}
