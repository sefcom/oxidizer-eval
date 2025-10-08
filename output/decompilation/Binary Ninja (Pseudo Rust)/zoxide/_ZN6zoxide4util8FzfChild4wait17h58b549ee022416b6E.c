
  fn zoxide::util::FzfChild::wait::h58b549ee022416b6(arg1: *mut i128, arg2: *mut i32) -> i64

{
    let rdi: i32 = arg2[4];
    arg2[4] = 0xffffffff;
    let rcx: i64 = core::ptr::drop_in_place$LT$core..option..Option$LT$std..process..ChildStdin$GT$$GT$::h6c7b867f27440b6e(rdi);
    let fd_1: i32 = arg2[5];
    arg2[5] = 0xffffffff;
    
    if fd_1 == 0xffffffff
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let mut fd: i32 = fd_1;
    let mut var_38: i64 = 0;
    let var_30: i64 = 1;
    let var_28: i64 = 0;
    let mut rax: i8;
    let mut rdx: i64;
    rax = std::io::append_to_string::hedb55a5ab2293446(&var_38, &fd, 0, rcx);
    let mut rax_1: i8;
    let mut rdx_1: u64;
    rax_1 = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::hd417b96229ab7d1e(rax, rdx);
    
    if (rax_1 & 1) != 0
    {
        goto 'label_492ba9;
    }
    
    let mut var_68: *mut *mut [i8; 0xe4];
    std::process::Child::wait::h7e33de4911114104(&var_68, arg2);
    let mut var_20: i32;
    anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::hb65f6847d5367690(&var_20, &var_68);
    
    if var_20 != 1
    {
        let var_1c: i32;
        
        if (var_1c & 0x7f) != 0
        {
            'label_492cbf:
            var_68 = &data_534b80;
            let var_60_3: i64 = 1;
            let var_58_3: i64 = 8;
            let var_50_3: i128 = {0};
            rdx_1 = anyhow::__private::format_err::h09b344f6a077676a(&var_68);
            goto 'label_492ba9;
        }
        
        let rax_3: u8 = var_1c >> 8;
        
        if rax_3 != 0
        {
            let mut rcx_1: u32 = rax_3;
            
            if rcx_1 == 1
            {
                var_68 = &data_534ba0;
                let var_60_2: i64 = 1;
                let var_58_2: i64 = 8;
                let var_50_2: i128 = {0};
                rdx_1 = anyhow::__private::format_err::h09b344f6a077676a(&var_68);
                goto 'label_492ba9;
            }
            
            if rcx_1 == 2
            {
                var_68 = &data_534b90;
                let var_60_1: i64 = 1;
                let var_58_1: i64 = 8;
                let var_50_1: i128 = {0};
                rdx_1 = anyhow::__private::format_err::h09b344f6a077676a(&var_68);
                goto 'label_492ba9;
            }
            
            if rcx_1 == 0x82
            {
                rdx_1 = anyhow::kind::Adhoc::new::h40cd9dbe27630cdb(0x82);
                goto 'label_492ba9;
            }
            
            let mut rax_9: u32 = rax_3;
            rcx_1 = rax_9 > 0x7f;
            rax_9 = rax_9 != 0xff;
            
            if (rcx_1 & rax_9) != 0
            {
                goto 'label_492cbf;
            }
            
            var_68 = &data_534b70;
            let var_60_4: i64 = 1;
            let var_58_4: i64 = 8;
            let var_50_4: i128 = {0};
            rdx_1 = anyhow::__private::format_err::h09b344f6a077676a(&var_68);
            goto 'label_492ba9;
        }
        
        arg1[1] = var_28;
        *arg1 = var_38;
    }
    else
    {
        let var_18: u64;
        rdx_1 = var_18;
        'label_492ba9:
        *arg1.byte_offset(8) = rdx_1;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_38);
    }
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::hd07966af9089b9f5(fd)
}
