
  fn uu_paste::DelimiterState::new::hf0d8373e3ee9ca93(arg1: *mut i64, arg2: *mut i64, arg3: i64)

{
    if arg3 != 0
    {
        let mut rax: i64;
        let mut rcx_1: i64;
        let mut rdx: i64;
        let mut rsi: *mut i64;
        let mut r8_1: i64;
        
        if arg3 != 1
        {
            let zmm0: i128 = *arg2;
            let r14_1: *mut i64 = arg1;
            core::iter::adapters::cycle::Cycle$LT$I$GT$::new::hf1aa6bae6724cda9(&arg1[5], arg2, 
                &arg2[arg3 * 2]);
            rsi = arg2;
            rax = arg3;
            arg1 = r14_1;
            *r14_1.byte_offset(8) = zmm0;
            rcx_1 = 2;
            rdx = 0x20;
            r8_1 = 0x18;
        }
        else
        {
            rax = arg2[1];
            
            if rax == 0
            {
                *arg1 = 0;
                return;
            }
            
            rsi = *arg2;
            rcx_1 = 1;
            rdx = 0x10;
            r8_1 = 8;
        }
        
        *arg1.byte_offset(r8_1) = rsi;
        *arg1.byte_offset(rdx) = rax;
        arg3 = rcx_1;
    }
    
    *arg1 = arg3;
}
