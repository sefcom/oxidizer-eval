
  fn uu_join::Repr$LT$Sep$GT$::print_format::h5f25780dab7de158(arg1: *mut c_void, arg2: *mut i64, arg3: *mut c_void, arg4: *mut c_void) -> i64

{
    let rbp: i64 = *arg1.byte_offset(0x140);
    let rax: i64 = *arg1.byte_offset(0x108);
    let var_58: i64 = *arg1.byte_offset(0x110);
    let rax_2: i64 = *arg1.byte_offset(0x138);
    let r15: i64 = *arg1.byte_offset(0x120);
    let rbx: u64 = *arg1.byte_offset(0x128);
    let mut r14: i64 = 0;
    let mut i: i64;
    
    do
    {
        if r14 >= rbp
        {
            return 0;
        }
        
        let rax_4: i64 =
            _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(
            r14);
        
        if r14 != 0
        {
            let mut rax_5: i64;
            let mut rdx_2: u64;
            rax_5 = _$LT$uu_join..MultiByteSep$u20$as$u20$uu_join..Separator$GT$::output_separator::hb76fe36ffd6c0412(rax);
            i = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, rax_5, rdx_2);
            
            if i != 0
            {
                break;
            }
        }
        
        let mut rax_3: i64;
        let mut rdx_1: u64;
        rax_3 = uu_join::State::print_line::_$u7b$$u7b$closure$u7d$$u7d$::h21253a944e5fa996(arg3, 
            arg4, (r14 << 4) + rax_2);
        let cond:0_1: bool = rax_3 == 0;
        
        if rax_3 == 0
        {
            rax_3 = r15;
        }
        
        if cond:0_1
        {
            rdx_1 = rbx;
        }
        
        i = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, rax_3, rdx_1);
        r14 = rax_4;
    } while i == 0;
    
    i
}
