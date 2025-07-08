
  fn uu_more::Pager::page_up::hcd3674266d22c74e(arg1: *mut c_void) -> *mut c_void

{
    let rcx_1: u64 = *arg1.byte_offset(0x40);
    let mut result: *mut c_void = *arg1.byte_offset(0x18);
    let mut rdx: i64 = -1;
    
    if rcx_1 + *arg1.byte_offset(0x38) >= rcx_1
    {
        rdx = rcx_1 + *arg1.byte_offset(0x38);
    }
    
    let mut i: *mut c_void = nullptr;
    
    if result >= rdx
    {
        i = result.byte_offset(-rdx);
    }
    
    *arg1.byte_offset(0x18) = i;
    
    if *arg1.byte_offset(0x43) != 0
    {
        let rsi_2: i64 = *arg1.byte_offset(8);
        let rdi: i64 = *arg1.byte_offset(0x10);
        let mut var_40: i64 = rsi_2;
        
        if result > rdx
        {
            let mut i_1: *mut c_void = i;
            
            do
            {
                let rdx_2: u64 = (rsi_2 + rdi * 0x18 - var_40) / 0x18;
                let mut rdx_3: *mut c_void = rdx_2 - i;
                
                if rdx_2 < i
                {
                    rdx_3 = nullptr;
                }
                
                result = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::nth_back::h9be320c1ff82071c(&var_40, rdx_3);
                
                if result == 0
                {
                    break;
                }
                
                if *result.byte_offset(0x10) != 0
                {
                    break;
                }
                
                let i_2: *mut c_void = i_1;
                i_1 -= 1;
                
                if i_2 < 1
                {
                    i_1 = nullptr;
                }
                
                *arg1.byte_offset(0x18) = i_1;
                i -= 1;
            } while i != 0;
        }
    }
    
    result
}
