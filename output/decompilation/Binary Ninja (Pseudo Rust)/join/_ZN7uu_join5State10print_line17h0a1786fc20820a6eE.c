
  fn uu_join::State::print_line::h0a1786fc20820a6e(arg1: *mut c_void, arg2: *mut i64, arg3: *mut c_void, arg4: *mut c_void) -> i64

{
    let rax: i64;
    let mut var_28: i64 = rax;
    let mut result: i64;
    
    if *arg4.byte_offset(0x140) == 0
    {
        let r15_1: i64 = *arg1.byte_offset(0x40);
        let mut rax_2: i64;
        let mut rdx: u64;
        rax_2 = uu_join::Line::get_field::h7dd14bed39768627(arg3, r15_1);
        
        if rax_2 == 0
        {
            rax_2 = *arg4.byte_offset(0x120);
            rdx = *arg4.byte_offset(0x128);
        }
        
        result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, rax_2, rdx);
        
        if result == 0
        {
            result = uu_join::Repr$LT$Sep$GT$::print_fields::h1387b25fbf2df66a(
                *arg4.byte_offset(0x108), *arg4.byte_offset(0x110), arg2, arg3, r15_1);
            
            if result == 0
            {
                *var_28[7] = *arg4.byte_offset(0x148);
                return _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, &*var_28[7], 1);
            }
        }
    }
    else
    {
        result = uu_join::Repr$LT$Sep$GT$::print_format::h5f25780dab7de158(arg4, arg2, arg3, arg1);
        
        if result == 0
        {
            *var_28[7] = *arg4.byte_offset(0x148);
            return _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, &*var_28[7], 1);
        }
    }
    
    result
}
