
  fn just::signals::Signals::new::he7a9f7e370667484(arg1: *mut i8) -> *mut i8

{
    let rax: u64 = nix::unistd::pipe::ha88edbfd9369bc9e();
    
    if rax == 0xffffffff
    {
        *arg1 = 0x2d;
        *arg1.byte_offset(4) = 0x2ffffffff;
        *arg1.byte_offset(0xc) = rax >> 0x20;
    }
    else
    {
        let mut var_208: *mut *mut c_void;
        
        if core::sync::atomic::atomic_compare_exchange::h011a5b8c8280061c(rax >> 0x20) != 0
        {
            var_208 = &data_830fc8;
            let var_200: i64 = 1;
            let var_1f8: i64 = 8;
            let var_1f0: i128 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_208);
            /* no return */
        }
        
        nix::sys::signal::SigSet::empty::h8c6cb2d0385ffbca(&var_208);
        let mut var_b0: ();
        nix::sys::signal::SigAction::new::h0121b4983f47f7b3(&var_b0, &var_208);
        nix::sys::signal::sigaction::h1579c992c8c24378(&var_208, 1, &var_b0);
        let mut rax_2: i64;
        
        if var_208 != 1
        {
            nix::sys::signal::sigaction::h1579c992c8c24378(&var_208, 2, &var_b0);
            
            if (var_208 & 1) != 0
            {
                rax_2 = 0x20000002e;
                goto 'label_68b244;
            }
            
            nix::sys::signal::sigaction::h1579c992c8c24378(&var_208, 3, &var_b0);
            
            if (var_208 & 1) != 0
            {
                rax_2 = 0x30000002e;
                goto 'label_68b244;
            }
            
            nix::sys::signal::sigaction::h1579c992c8c24378(&var_208, 0xf, &var_b0);
            
            if (var_208 & 1) != 0
            {
                rax_2 = 0xf0000002e;
                goto 'label_68b244;
            }
            
            *arg1.byte_offset(4) = rax;
            *arg1 = 0x38;
        }
        else
        {
            rax_2 = 0x10000002e;
            'label_68b244:
            let rcx_3: i64 = *var_208[4] << 0x20 | 2;
            let var_108: i128;
            let var_168_1: i128 = var_108;
            let var_f8: i128;
            let var_158_1: i128 = var_f8;
            let var_e8: i128;
            let var_148_1: i128 = var_e8;
            let var_d8: i128;
            let var_138_1: i128 = var_d8;
            let var_c8: i128;
            let var_128_1: i128 = var_c8;
            let var_b8: i64;
            let var_118_1: i64 = var_b8;
            *arg1.byte_offset(0x60) = var_b8;
            *arg1.byte_offset(0x50) = var_c8;
            *arg1.byte_offset(0x40) = var_d8;
            *arg1.byte_offset(0x30) = var_e8;
            *arg1.byte_offset(0x20) = var_f8;
            *arg1.byte_offset(0x10) = var_108;
            *arg1 = rax_2;
            *arg1.byte_offset(8) = rcx_3;
            core::ptr::drop_in_place$LT$std..os..fd..owned..OwnedFd$GT$::hf2ebce843f0e980c(rax);
        }
    }
    
    arg1
}
