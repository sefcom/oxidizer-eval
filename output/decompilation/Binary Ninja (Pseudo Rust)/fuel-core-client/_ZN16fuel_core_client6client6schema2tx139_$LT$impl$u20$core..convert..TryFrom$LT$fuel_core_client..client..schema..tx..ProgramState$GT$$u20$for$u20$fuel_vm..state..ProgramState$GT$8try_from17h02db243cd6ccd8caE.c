
  fn fuel_core_client::client::schema::tx::_$LT$impl$u20$core..convert..TryFrom$LT$fuel_core_client..client..schema..tx..ProgramState$GT$$u20$for$u20$fuel_vm..state..ProgramState$GT$::try_from::h02db243cd6ccd8ca(arg1: *mut i8, arg2: *mut i64) -> *mut i8

{
    let rbp: u32 = arg2[3];
    let mut var_60: i64;
    let mut rsi: *mut i64;
    let mut rdi_1: *mut i64;
    
    if rbp == 0
    {
        let var_38_1: i64 = arg2[2];
        let mut var_48: i128 = *arg2;
        rdi_1 = &var_60;
        rsi = &var_48;
        'label_713f24:
        alloc::vec::_$LT$impl$u20$core..convert..TryFrom$LT$alloc..vec..Vec$LT$T$C$A$GT$$GT$$u20$for$u20$$u5b$T$u3b$$u20$N$u5d$$GT$::try_from::hda5e3366c1b56843(rdi_1, rsi);
        let rdi_2: i64 = var_60;
        let var_58: u64;
        
        if -(rdi_2) != -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::ha84acb6fbde5c50f(rdi_2, 
                var_58);
            *arg1.byte_offset(8) = 8;
            *arg1 = 5;
        }
        else
        {
            let rax_6: u64 = _bswap(var_58);
            *arg1 = rbp;
            *arg1.byte_offset(8) = rax_6;
        }
    }
    else
    {
        if rbp != 1
        {
            let var_18_1: i64 = arg2[2];
            let mut var_28: i128 = *arg2;
            rdi_1 = &var_60;
            rsi = &var_28;
            goto 'label_713f24;
        }
        
        let rax: *mut i32 = arg2[1];
        
        if arg2[2] != 0x20
        {
            *arg1.byte_offset(8) = 8;
            *arg1 = 5;
        }
        else
        {
            let rcx_1: i64 = *rax.byte_offset(7);
            arg1[0x20] = *rax.byte_offset(0x1f);
            *arg1.byte_offset(0x10) = *rax.byte_offset(0xf);
            *arg1 = 1;
            let rdi: i32 = *rax.byte_offset(3);
            *arg1.byte_offset(1) = *rax;
            *arg1.byte_offset(4) = rdi;
            *arg1.byte_offset(8) = rcx_1;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::ha84acb6fbde5c50f(*arg2, rax);
    }
    arg1
}
