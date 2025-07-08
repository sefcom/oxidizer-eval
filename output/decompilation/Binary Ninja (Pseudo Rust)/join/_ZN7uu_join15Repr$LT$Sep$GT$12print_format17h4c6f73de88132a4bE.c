
  fn uu_join::Repr$LT$Sep$GT$::print_format::h4c6f73de88132a4b(arg1: *mut c_void, arg2: *mut i64, arg3: *mut i64) -> i64

{
    let rax: i64 = *arg1.byte_offset(8);
    let rbx: i64 = *arg1.byte_offset(0x10);
    let r14: i64 = *arg1.byte_offset(0x18);
    let rbp: u64 = *arg1.byte_offset(0x20);
    let mut r13: i64 = 0;
    let mut i: i64;
    
    do
    {
        if r13 >= rbx
        {
            return 0;
        }
        
        let rax_2: i64 =
            _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(
            r13);
        
        if r13 != 0
        {
            i = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, 1, 0);
            
            if i != 0
            {
                break;
            }
        }
        
        let mut rax_1: i64;
        let mut rdx: u64;
        rax_1 = uu_join::State::combine::_$u7b$$u7b$closure$u7d$$u7d$::h06ca42913a256998(arg3, 
            (r13 << 4) + rax);
        let cond:0_1: bool = rax_1 == 0;
        
        if rax_1 == 0
        {
            rax_1 = r14;
        }
        
        if cond:0_1
        {
            rdx = rbp;
        }
        
        i = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, rax_1, rdx);
        r13 = rax_2;
    } while i == 0;
    
    i
}
