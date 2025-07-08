
  fn uu_df::mount_info_lt::he7799b73577b1743(arg1: *mut c_void, arg2: *mut c_void) -> i64

{
    let rax: i64;
    let mut var_38: i64 = rax;
    let r15: i64 = *arg1.byte_offset(0x20);
    let r12: u64 = *arg1.byte_offset(0x28);
    var_38 = 0;
    let rax_2: i8 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hfcb4c23ecb597bc5(r15, 
        r12, core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&var_38), 1);
    let mut rax_4: i8;
    
    if rax_2 != 0
    {
        *var_38[4] = 0;
        rax_4 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hfcb4c23ecb597bc5(
            *arg2.byte_offset(0x20), *arg2.byte_offset(0x28), 
            core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&*var_38[4]), 1);
    }
    
    if rax_2 == 0 || rax_4 != 0
    {
        let rax_5: i64 = *arg1.byte_offset(0x58);
        let rbp_2: u64 = *arg1.byte_offset(0x70);
        let r13_2: i64 = *arg2.byte_offset(0x70);
        let mut rcx_1: i64;
        
        if rax_5 != 0
        {
            rcx_1 = *arg2.byte_offset(0x58);
        }
        
        if rax_5 == 0 || rcx_1 == 0
        {
            if rbp_2 >= r13_2
            {
                'label_4c68b0:
                
                if alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h26cf2969793785fb(r15, r12, *arg2.byte_offset(0x20), *arg2.byte_offset(0x28)) != 0
                {
                    return 1;
                }
                
                return alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h26cf2969793785fb(*arg1.byte_offset(0x68), rbp_2, *arg2.byte_offset(0x68), r13_2) ^ 1;
            }
        }
        else if rbp_2 >= r13_2 || rax_5 > rcx_1
        {
            goto 'label_4c68b0;
        }
    }
    
    0
}
