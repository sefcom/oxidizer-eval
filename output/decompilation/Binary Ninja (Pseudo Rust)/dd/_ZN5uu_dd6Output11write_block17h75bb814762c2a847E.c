
  fn uu_dd::Output::write_block::h75bb814762c2a847(arg1: *mut i8, arg2: *mut c_void, arg3: i64) -> i64

{
    let mut rbp: i64 = arg3;
    let mut r12: i64 = 0;
    let mut result: i64;
    
    loop
    {
        let mut rdx_1: i64;
        result = _$LT$uu_dd..Dest$u20$as$u20$std..io..Write$GT$::write::h3271a02f9286a322(arg1, 
            arg2.byte_offset(r12), rbp - r12);
        
        if result == 0
        {
            r12 += rdx_1;
            rbp = arg3;
            
            if r12 >= rbp
            {
                break;
            }
            
            if *(*arg1.byte_offset(0x10)).byte_offset(0x4d) == 0
            {
                break;
            }
        }
        else
        {
            if std::io::error::Error::kind::hb2ff5fa058639b3d(rdx_1) != 0x23
            {
                break;
            }
            
            let mut var_38: i64 = rdx_1;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h9ee6c79b3338b78b(&var_38);
        }
    }
    
    result
}
