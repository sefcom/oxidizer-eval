
  fn uu_cp::platform::linux::sparse_copy::ha5f85eebd4c718f5(arg1: i64, arg2: i64, arg3: i64) -> *mut *mut c_void

{
    let mut var_e0: i32;
    std::fs::File::open::h2ade805364297b3f(&var_e0, arg1);
    let var_d8: *mut *mut c_void;
    
    if var_e0 != 0
    {
        return var_d8;
    }
    
    let fd_4: i32;
    let mut fd_2: i32 = fd_4;
    let mut fd: i32 = fd_2;
    std::fs::File::create::h63900868be62ed17(&var_e0, arg3);
    let mut r14_1: *mut *mut c_void;
    
    if var_e0 == 0
    {
        let mut fd_3: i32 = fd_4;
        let mut fd_1: i32 = fd_3;
        std::fs::File::metadata::he899a18112e6f19e(&var_e0, &fd);
        
        if var_e0 == 2
        {
            r14_1 = var_d8;
        }
        else
        {
            let var_90: i64;
            core::result::Result$LT$T$C$E$GT$::unwrap::h73f8e5c4ab47dad3(var_90 >> 0x3f);
            
            if ftruncate(fd_3) < 0
            {
                r14_1 = std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() << 0x20 | 2;
            }
            else
            {
                std::fs::File::metadata::he899a18112e6f19e(&var_e0, &fd_1);
                
                if var_e0 != 2
                {
                    let var_88: i64;
                    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h3824b372c4eb90c7(&var_e0, var_88);
                    
                    if var_90 == 0
                    {
                        'label_513449:
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::ha0066fb3d75053fd(&var_e0);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_1);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd);
                        return nullptr;
                    }
                    
                    let mut r15_1: *mut c_void = nullptr;
                    
                    loop
                    {
                        let var_d0: u64;
                        let mut rax_3: i64;
                        let mut rdx_3: *mut *mut c_void;
                        rax_3 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(&fd, var_d8, var_d0);
                        r14_1 = rdx_3;
                        
                        if rax_3 == 0
                        {
                            let mut rax_4: i64;
                            let mut rdx_5: u64;
                            rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::ha9f3ca16460e2477(r14_1, var_d8, var_d0);
                            let mut var_f0: i64 = rax_4;
                            let var_e8_1: i64 = rax_4 + rdx_5;
                            let rax_6: i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hb6331f8b0439d978(&var_f0);
                            let mut rax_7: *mut *mut c_void;
                            
                            if rax_6 != 0
                            {
                                rax_7 = std::os::unix::fs::FileExt::write_all_at::h20b571d70eaa1579(
                                    &fd_1, rax_4, rdx_5, r15_1);
                            }
                            
                            if rax_6 == 0 || rax_7 == 0
                            {
                                r15_1 += r14_1;
                                
                                if r15_1 >= var_90
                                {
                                    goto 'label_513449;
                                }
                                
                                continue;
                            }
                            else
                            {
                                r14_1 = rax_7;
                            }
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::ha0066fb3d75053fd(&var_e0);
                        fd_3 = fd_1;
                        break;
                    }
                }
                else
                {
                    r14_1 = var_d8;
                }
            }
        }
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_3);
        fd_2 = fd;
    }
    else
    {
        r14_1 = var_d8;
    }
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_2);
    r14_1
}
