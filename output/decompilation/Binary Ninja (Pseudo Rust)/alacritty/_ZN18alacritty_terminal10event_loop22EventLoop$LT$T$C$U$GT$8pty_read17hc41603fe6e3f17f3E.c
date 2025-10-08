
  fn alacritty_terminal::event_loop::EventLoop$LT$T$C$U$GT$::pty_read::hc41603fe6e3f17f3(arg1: *mut c_void, arg2: *mut c_void, arg3: i64, arg4: *mut i32) -> i64

{
    let rdi: *mut i8 = 0x700 + *arg1.byte_offset(0x68);
    _$LT$parking_lot..raw_mutex..RawMutex$u20$as$u20$lock_api..mutex..RawMutex$GT$::lock::h8f21b5fe103f8e9a(rdi);
    let mut var_78: *mut i8 = nullptr;
    let rax: *mut i32 = _$LT$alacritty_terminal..tty..unix..Pty$u20$as$u20$alacritty_terminal..tty..EventedReadWrite$GT$::reader::h3333ae7262e41769(arg1);
    let mut r15: i64 = 0;
    
    loop
    {
        let mut rbx_1: i64 = 0;
        
        loop
        {
            let mut rax_2: i8;
            let mut result_2: i64;
            rax_2 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h614ade6d36e62b0e(rax, 
                rbx_1 + arg3, 0x100000 - rbx_1);
            let mut result: i64 = result_2;
            
            if (rax_2 & 1) != 0
            {
                let mut result_1: i64 = result;
                let rax_3: i8 = std::io::error::Error::kind::h135fe00c4e7365f3(result);
                
                if rax_3 == 0xd || rax_3 == 0x23
                {
                    if rbx_1 != 0
                    {
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3428ae91bc3bac8a(
                            &result_1);
                        
                        if var_78 == 0
                        {
                            goto 'label_76c28a;
                        }
                        
                        goto 'label_76c2c8;
                    }
                    
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3428ae91bc3bac8a(
                        &result_1);
                    'label_76c358:
                    
                    if *arg2.byte_offset(0x30) < r15
                    {
                        result_1 = -0x7ffffffffffffff7;
                        _$LT$alacritty..event..EventProxy$u20$as$u20$alacritty_terminal..event..EventListener$GT$::send_event::hcb980e74e667f924(arg1.byte_offset(0x98), &result_1);
                    }
                    
                    core::ptr::drop_in_place$LT$core..option..Option$LT$lock_api..mutex..MutexGuard$LT$parking_lot..raw_mutex..RawMutex$C$$LP$$RP$$GT$$GT$$GT$::h96e885aa9340979d(var_78);
                    result = 0;
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..option..Option$LT$lock_api..mutex..MutexGuard$LT$parking_lot..raw_mutex..RawMutex$C$$LP$$RP$$GT$$GT$$GT$::h96e885aa9340979d(var_78);
                }
                
                core::ptr::drop_in_place$LT$core..option..Option$LT$lock_api..mutex..MutexGuard$LT$parking_lot..raw_mutex..RawMutex$C$$LP$$RP$$GT$$GT$$GT$::h96e885aa9340979d(rdi);
                return result;
            }
            
            if (rbx_1 | result) == 0
            {
                goto 'label_76c358;
            }
            
            rbx_1 += result;
            
            if var_78 == 0
            {
                'label_76c28a:
                let mut r12_2: *mut i8 = (*arg1.byte_offset(0x68)).byte_offset(0x10);
                
                if _$LT$parking_lot..raw_mutex..RawMutex$u20$as$u20$lock_api..mutex..RawMutex$GT$::try_lock::h301d80071f460945(r12_2) == 0
                {
                    if rbx_1 < 0x100000
                    {
                        continue;
                    }
                    else
                    {
                        r12_2 = (*arg1.byte_offset(0x68)).byte_offset(0x10);
                        _$LT$parking_lot..raw_mutex..RawMutex$u20$as$u20$lock_api..mutex..RawMutex$GT$::lock::h8f21b5fe103f8e9a(r12_2);
                    }
                }
                
                core::option::Option$LT$T$GT$::insert::hbf0ea0a72d87f8d1(&var_78, r12_2);
                goto 'label_76c2c8;
            }
            
            'label_76c2c8:
            
            if arg4 != 0
            {
                let mut rax_8: i64;
                let mut rdx_2: u64;
                rax_8 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h4d48160bd416b1a6(0, rbx_1, arg3, 0x100000);
                core::result::Result$LT$T$C$E$GT$::unwrap::hc1e90cea79c932a6(
                    std::io::Write::write_all::he2864e18bca27946(arg4, rax_8, rdx_2));
            }
            
            let r12_4: *mut i8 = var_78;
            let mut rax_10: i64;
            let mut rdx_4: i64;
            rax_10 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h4d48160bd416b1a6(0, rbx_1, arg3, 0x100000);
            vte::ansi::Processor$LT$T$GT$::advance::hc0b4a727a363f988(arg2.byte_offset(0x20), 
                &r12_4[8], rax_10, rdx_4);
            r15 += rbx_1;
            
            if r15 <= 0xfffe
            {
                break;
            }
            
            goto 'label_76c358;
        }
    }
}
