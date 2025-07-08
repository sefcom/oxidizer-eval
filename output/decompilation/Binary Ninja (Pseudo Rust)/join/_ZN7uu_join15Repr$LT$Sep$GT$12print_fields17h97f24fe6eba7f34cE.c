
  fn uu_join::Repr$LT$Sep$GT$::print_fields::h97f24fe6eba7f34c(arg1: *mut i64, arg2: *mut c_void, arg3: i64) -> i64

{
    let rax: i64;
    let var_38: i64 = rax;
    let r13: i64 = *arg2.byte_offset(0x10);
    
    if r13 != 0
    {
        let mut rbp_1: i64 = 0;
        let mut rax_1: i64;
        
        do
        {
            rax_1 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(rbp_1);
            
            if rbp_1 != arg3
            {
                let mut result: i64 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg1, " UnknownErrnoEPERMENOENTESRCHEIN…", 1);
                
                if result != 0
                {
                    return result;
                }
                
                let mut rax_2: i64;
                let mut rdx: u64;
                rax_2 = uu_join::Line::get_field::h7dd14bed39768627(arg2, rbp_1);
                
                if rax_2 == 0
                {
                    core::option::unwrap_failed::h0e11329e76906eaa();
                    /* no return */
                }
                
                result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg1, rax_2, rdx);
                
                if result != 0
                {
                    return result;
                }
            }
            
            rbp_1 = rax_1;
        } while rax_1 < r13;
    }
    
    0
}
