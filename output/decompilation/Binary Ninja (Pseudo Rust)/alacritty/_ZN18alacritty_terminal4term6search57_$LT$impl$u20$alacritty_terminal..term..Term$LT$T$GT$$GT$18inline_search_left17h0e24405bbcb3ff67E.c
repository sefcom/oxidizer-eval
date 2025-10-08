
  fn alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::inline_search_left::h0e24405bbcb3ff67(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i32, arg5: *mut i8, arg6: *mut c_void) -> *mut i64

{
    let var_60: *mut i8 = arg5;
    let mut r12: i64 = arg3;
    let rax: i64 = *arg2.byte_offset(0x50);
    let rbx: i64 = *arg2.byte_offset(0xc0);
    let mut rsi: i32 = 0;
    
    if rax >= rbx
    {
        rsi = rax - rbx;
    }
    
    let rax_2: i32 = core::cmp::Ord::max::h3396bb7148673668(arg4, -(rsi));
    let mut rbp: i32 = rax_2;
    let r15_1: i64 = *arg2.byte_offset(0xb8) - 1;
    let mut var_58: *mut c_void = arg2.byte_offset(0x28);
    let var_50: i64 = r12;
    let var_48: i32 = rax_2;
    let var_40: i64 = r15_1;
    let var_38: i32 = rbx - 1;
    let mut var_80: *mut c_void;
    _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&var_80, &var_58);
    let mut rax_3: *mut c_void = var_80;
    let var_78: i64;
    let mut rcx: i64;
    let mut rdx: u32;
    
    if rax_3 != 0
    {
        rcx = var_78;
        rdx = *rax_3.byte_offset(0x14);
    }
    
    let mut result: *mut i64;
    
    if rax_3 == 0 || (rcx == r15_1 & (rdx & 0x10) == 0) != 0
    {
        'label_7721c6:
        result = arg1;
        result[1] = r12;
        result[2] = rbp;
        *result = 1;
    }
    else
    {
        let var_70: i32;
        let mut rsi_4: i32 = var_70;
        
        loop
        {
            r12 = rcx;
            rbp = rsi_4;
            
            if (rdx & 0x440) == 0
            {
                let mut rax_4: i8;
                rax_4 = _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(*rax_3.byte_offset(0x10), var_60, arg6);
                
                if rax_4 != 0
                {
                    result = arg1;
                    result[1] = r12;
                    result[2] = rbp;
                    *result = 0;
                    break;
                }
            }
            
            _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&var_80, &var_58);
            rax_3 = var_80;
            
            if rax_3 == 0
            {
                goto 'label_7721c6;
            }
            
            rcx = var_78;
            rsi_4 = var_70;
            rdx = *rax_3.byte_offset(0x14);
            arg5 = (rdx & 0x10) == 0;
            
            if (rcx == r15_1 & arg5) != 0
            {
                goto 'label_7721c6;
            }
        }
    }
    
    result
}
