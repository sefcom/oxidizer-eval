
  fn uu_cat::write_end_of_line::h1af273733bdb3f49(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: u64, arg5: i8) -> *mut *mut [i8; 0xc5]

{
    let rax: i64;
    let var_28: i64 = rax;
    let mut result: *mut *mut [i8; 0xc5] = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h4762d2070cade9bd(arg2, arg3, arg4);
    
    if result == 0
    {
        if arg5 != 0
        {
            result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h92f2b65981f505d2(arg2);
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
