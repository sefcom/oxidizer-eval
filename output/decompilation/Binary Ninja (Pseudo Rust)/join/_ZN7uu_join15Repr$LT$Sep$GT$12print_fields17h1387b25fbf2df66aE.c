
  fn uu_join::Repr$LT$Sep$GT$::print_fields::h1387b25fbf2df66a(arg1: i64, arg2: i64, arg3: *mut i64, arg4: *mut c_void, arg5: i64) -> i64

{
    let rbp: i64 = *arg4.byte_offset(0x10);
    
    if rbp != 0
    {
        let mut rbx_1: i64 = 0;
        let mut rax_1: i64;
        
        do
        {
            rax_1 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(rbx_1);
            
            if rbx_1 != arg5
            {
                let mut rax_2: i64;
                let mut rdx: u64;
                rax_2 = _$LT$uu_join..MultiByteSep$u20$as$u20$uu_join..Separator$GT$::output_separator::hb76fe36ffd6c0412(arg1);
                let mut result: i64 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg3, rax_2, rdx);
                
                if result != 0
                {
                    return result;
                }
                
                let mut rax_3: i64;
                let mut rdx_1: u64;
                rax_3 = uu_join::Line::get_field::h7dd14bed39768627(arg4, rbx_1);
                
                if rax_3 == 0
                {
                    core::option::unwrap_failed::h0e11329e76906eaa();
                    /* no return */
                }
                
                result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg3, rax_3, rdx_1);
                
                if result != 0
                {
                    return result;
                }
            }
            
            rbx_1 = rax_1;
        } while rax_1 < rbp;
    }
    
    0
}
