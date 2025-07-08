
  fn uu_join::Repr$LT$Sep$GT$::print_format::h8b2cf1c3af867261(arg1: *mut c_void, arg2: *mut i64, arg3: *mut c_void, arg4: *mut c_void) -> i64

{
    let rax: i64 = *arg1.byte_offset(8);
    let r14: i64 = *arg1.byte_offset(0x10);
    let r15: i64 = *arg1.byte_offset(0x18);
    let r13: u64 = *arg1.byte_offset(0x20);
    let mut rbp: i64 = 0;
    let mut i: i64;
    
    do
    {
        if rbp >= r14
        {
            return 0;
        }
        
        let rax_3: i64 =
            _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(
            rbp);
        
        if rbp != 0
        {
            i = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, 
                _$LT$uu_join..OneByteSep$u20$as$u20$uu_join..Separator$GT$::output_separator::h46f4732182ca8865(arg1.byte_offset(0x29)), 
                1);
            
            if i != 0
            {
                break;
            }
        }
        
        let mut rax_2: i64;
        let mut rdx_1: u64;
        rax_2 = uu_join::State::print_line::_$u7b$$u7b$closure$u7d$$u7d$::h21253a944e5fa996(arg3, 
            arg4, (rbp << 4) + rax);
        let cond:0_1: bool = rax_2 == 0;
        
        if rax_2 == 0
        {
            rax_2 = r15;
        }
        
        if cond:0_1
        {
            rdx_1 = r13;
        }
        
        i = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, rax_2, rdx_1);
        rbp = rax_3;
    } while i == 0;
    
    i
}
