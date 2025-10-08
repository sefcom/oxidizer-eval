
  fn uu_df::mount_info_lt::h4da597b980b7148d(arg1: *mut c_void, arg2: *mut c_void) -> i64

{
    let rax: i64;
    let mut var_38: i64 = rax;
    let r15: i64 = *arg1.byte_offset(0x20);
    let r12: u64 = *arg1.byte_offset(0x28);
    var_38 = 0;
    let rax_2: i8 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cf7c8293e15fd51(r15, 
        r12, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&var_38));
    let mut rax_4: i8;
    
    if rax_2 != 0
    {
        *var_38[4] = 0;
        rax_4 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cf7c8293e15fd51(
            *arg2.byte_offset(0x20), *arg2.byte_offset(0x28), 
            core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&*var_38[4]));
    }
    
    if rax_2 == 0 || rax_4 != 0
    {
        let mut rax_5: i64 = *arg1.byte_offset(0x58);
        let rbp_2: u64 = *arg1.byte_offset(0x70);
        let r13_2: i64 = *arg2.byte_offset(0x70);
        let mut rcx_1: i64;
        
        if rax_5 != 0
        {
            rcx_1 = *arg2.byte_offset(0x58);
        }
        
        if rax_5 != 0 && rcx_1 != 0
        {
            rax_5 = rax_5 > rcx_1;
            rax_5 |= rbp_2 >= r13_2;
            
            if rax_5 == 1
            {
                goto 'label_46d88e;
            }
        }
        else if rbp_2 >= r13_2
        {
            'label_46d88e:
            
            if alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h6c46bd122a266b24(r15, r12, *arg2.byte_offset(0x20), *arg2.byte_offset(0x28)) != 0
            {
                return 1;
            }
            
            return alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h6c46bd122a266b24(*arg1.byte_offset(0x68), rbp_2, *arg2.byte_offset(0x68), r13_2) ^ 1;
        }
    }
    
    0
}
