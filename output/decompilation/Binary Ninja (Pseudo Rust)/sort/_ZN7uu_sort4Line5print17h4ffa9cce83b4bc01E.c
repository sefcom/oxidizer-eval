
  fn uu_sort::Line::print::h4ffa9cce83b4bc01(arg1: *mut i8, arg2: u64, arg3: *mut i64, arg4: *mut c_void) -> i64

{
    let rax: i64;
    let mut var_18: i64 = rax;
    
    if *arg4.byte_offset(0x7c) != 0
    {
        /* tailcall */
        return uu_sort::Line::print_debug::h88f864449603f37c(arg1, arg2, arg4, arg3);
    }
    
    let result: i64 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h13b43e7386c9bd95(arg3, arg1, arg2);
    
    if result != 0
    {
        return result;
    }
    
    *var_18[7] = *arg4.byte_offset(0x99);
    _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h13b43e7386c9bd95(arg3, &*var_18[7], 1)
}
