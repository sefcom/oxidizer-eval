
  fn uu_echo::is_echo_flag::h50b86463f524c5ed(arg1: *mut c_void, arg2: *mut i8) -> *mut i8

{
    let rbx: i64 = *arg1.byte_offset(0x10);
    
    if rbx != 0
    {
        let r14_1: *mut i8 = *arg1.byte_offset(8);
        
        if *r14_1 == 0x2d && _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(r14_1, rbx) == 0
        {
            let mut rcx_1: i8 = *arg2;
            let mut rsi_1: u32 = arg2[1];
            let mut rdi: *mut i8;
            
            if rbx != 1
            {
                let mut rdx_1: i64 = 1;
                
                do
                {
                    let r8_1: u32 = r14_1[rdx_1];
                    
                    if r8_1 == 0x45
                    {
                        rdi = nullptr;
                    }
                    else
                    {
                        rdi = 1;
                        
                        if r8_1 != 0x65
                        {
                            if r8_1 != 0x6e
                            {
                                return 0;
                            }
                            
                            rcx_1 = 0;
                            rdi = rsi_1;
                        }
                    }
                    
                    rdx_1 += 1;
                    rsi_1 = rdi;
                } while rbx != rdx_1;
            }
            else
            {
                rdi = rsi_1;
            }
            
            rdi &= 1;
            arg2[1] = rdi;
            *arg2 = rcx_1 & 1;
            let mut result: *mut i8;
            result = 1;
            return result;
        }
    }
    
    0
}
