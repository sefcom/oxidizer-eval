
  fn uu_dd::Output::write_block::ha48c1850e6d52037(arg1: *mut i8, arg2: i64, arg3: i64) -> i64

{
    let mut r13: i64 = arg3;
    let mut rbx: i64 = 0;
    
    loop
    {
        let mut rax_2: i8;
        let mut rdx_1: i64;
        rax_2 = _$LT$uu_dd..Dest$u20$as$u20$std..io..Write$GT$::write::h306764d99c319006(arg1, 
            arg2 + rbx, r13 - rbx);
        
        if (rax_2 & 1) == 0
        {
            rbx += rdx_1;
            r13 = arg3;
            
            if rbx >= r13
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
            if std::io::error::Error::kind::h135fe00c4e7365f3(rdx_1) != 0x23
            {
                return 1;
            }
            
            let mut var_38: i64 = rdx_1;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8fa75f22e705d35b(&var_38);
        }
    }
    
    0
}
