
  fn uu_join::Repr$LT$Sep$GT$::print_fields::hb1432fea054a9535(arg1: i64, arg2: *mut i64, arg3: *mut c_void, arg4: i64) -> i64

{
    let rax: i64;
    let var_38: i64 = rax;
    let r15: i64 = *arg3.byte_offset(0x10);
    
    if r15 != 0
    {
        let mut rbp_1: i64 = 0;
        let mut rax_1: i64;
        
        do
        {
            rax_1 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(rbp_1);
            
            if rbp_1 != arg4
            {
                let mut result: i64 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, 
                    _$LT$uu_join..OneByteSep$u20$as$u20$uu_join..Separator$GT$::output_separator::h46f4732182ca8865(arg1 + 0x29), 
                    1);
                
                if result != 0
                {
                    return result;
                }
                
                let mut rax_3: i64;
                let mut rdx: u64;
                rax_3 = uu_join::Line::get_field::h7dd14bed39768627(arg3, rbp_1);
                
                if rax_3 == 0
                {
                    core::option::unwrap_failed::h0e11329e76906eaa();
                    /* no return */
                }
                
                result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, rax_3, rdx);
                
                if result != 0
                {
                    return result;
                }
            }
            
            rbp_1 = rax_1;
        } while rax_1 < r15;
    }
    
    0
}
