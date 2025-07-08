
  fn uu_join::Repr$LT$Sep$GT$::print_format::h7a7867d185f65886(arg1: *mut c_void, arg2: *mut i64, arg3: *mut i64) -> i64

{
    let r12: i64 = *arg1.byte_offset(0x140);
    let rax: i64 = *arg1.byte_offset(0x108);
    let var_50: i64 = *arg1.byte_offset(0x110);
    let rax_2: i64 = *arg1.byte_offset(0x138);
    let r14: i64 = *arg1.byte_offset(0x120);
    let r13: u64 = *arg1.byte_offset(0x128);
    let mut rbp: i64 = 0;
    let mut i: i64;
    
    do
    {
        if rbp >= r12
        {
            return 0;
        }
        
        let rax_4: i64 =
            _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(
            rbp);
        
        if rbp != 0
        {
            let mut rax_5: i64;
            let mut rdx_1: u64;
            rax_5 = _$LT$uu_join..MultiByteSep$u20$as$u20$uu_join..Separator$GT$::output_separator::hb76fe36ffd6c0412(rax);
            i = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, rax_5, rdx_1);
            
            if i != 0
            {
                break;
            }
        }
        
        let mut rax_3: i64;
        let mut rdx: u64;
        rax_3 = uu_join::State::combine::_$u7b$$u7b$closure$u7d$$u7d$::h06ca42913a256998(arg3, 
            (rbp << 4) + rax_2);
        let cond:0_1: bool = rax_3 == 0;
        
        if rax_3 == 0
        {
            rax_3 = r14;
        }
        
        if cond:0_1
        {
            rdx = r13;
        }
        
        i = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, rax_3, rdx);
        rbp = rax_4;
    } while i == 0;
    
    i
}
