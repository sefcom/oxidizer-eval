
  fn uu_cp::platform::linux::sparse_copy_without_hole::h5128473705372174(arg1: i64, arg2: i64, arg3: i64) -> *mut *mut c_void

{
    let mut var_e8: i32;
    std::fs::File::open::h2ade805364297b3f(&var_e8, arg1);
    let var_e0: *mut *mut c_void;
    
    if var_e8 != 0
    {
        return var_e0;
    }
    
    let fd_5: i32;
    let mut fd: i32 = fd_5;
    std::fs::File::create::h63900868be62ed17(&var_e8, arg3);
    let mut r13_1: *mut *mut c_void;
    
    if var_e8 == 0
    {
        let mut fd_2: i32 = fd_5;
        let mut fd_1: i32 = fd_2;
        std::fs::File::metadata::he899a18112e6f19e(&var_e8, &fd);
        
        if var_e8 != 2
        {
            let var_98: i64;
            core::result::Result$LT$T$C$E$GT$::unwrap::h73f8e5c4ab47dad3(var_98 >> 0x3f);
            
            if ftruncate(fd_2) < 0
            {
                r13_1 = std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() << 0x20 | 2;
            }
            else
            {
                let mut fd_3: i32 = fd;
                let rax_3: i64 = core::cmp::min_by::h2985dd7176bedd6f(var_98);
                let mut var_120: ();
                _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h3824b372c4eb90c7(&var_120, rax_3);
                let mut __arg2: off64_t = 0;
                let fd_4: i32 = fd_3;
                
                loop
                {
                    core::result::Result$LT$T$C$E$GT$::unwrap::h73f8e5c4ab47dad3(0);
                    let __arg2_1: off64_t = lseek(fd_3, __arg2, 3);
                    core::result::Result$LT$T$C$E$GT$::unwrap::h73f8e5c4ab47dad3(0);
                    let __arg2_2: off64_t = lseek(fd_3, __arg2_1, 4);
                    
                    if __arg2_1 == -1 || __arg2_2 == -1
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::ha0066fb3d75053fd(&var_120);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_1);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd);
                        return nullptr;
                    }
                    
                    if __arg2_1 < -1
                    {
                        break;
                    }
                    
                    if __arg2_2 < -1
                    {
                        break;
                    }
                    
                    __arg2 = __arg2_2;
                    let r12_2: i64 = __arg2_2 - __arg2_1;
                    let mut var_108: i128;
                    core::iter::adapters::step_by::StepBy$LT$I$GT$::new::h5a3e6c67f4c7aba8(
                        &var_108, r12_2, rax_3);
                    let var_f8: i72;
                    let mut var_d8_1: i72 = var_f8;
                    var_e8 = var_108;
                    
                    loop
                    {
                        *var_d8_1[8] = 0;
                        let mut rax_4: i64;
                        let mut rdx_3: i64;
                        rax_4 = _$LT$core..ops..range..Range$LT$T$GT$$u20$as$u20$core..iter..range..RangeIteratorImpl$GT$::spec_nth::h852b0ec0598f7b05(&var_e8);
                        
                        if rax_4 == 0
                        {
                            fd_3 = fd_4;
                            break;
                        }
                        
                        let var_118: i64;
                        let var_110: i64;
                        let mut rax_6: i64;
                        let mut rdx_5: u64;
                        rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h1f50fb9d1aa19a8f(core::cmp::min_by::h92b17324b21437ca(r12_2 - rdx_3, rax_3), 
                            var_118, var_110);
                        let rbp_2: off64_t = rdx_3 + __arg2_1;
                        let rax_7: *mut *mut c_void =
                            std::os::unix::fs::FileExt::read_exact_at::h6298917a1f7d0b8c(&fd, 
                            rax_6, rdx_5, rbp_2);
                        r13_1 = rax_7;
                        
                        if rax_7 != 0
                        {
                            goto 'label_51322e;
                        }
                        
                        let rax_8: *mut *mut c_void =
                            std::os::unix::fs::FileExt::write_all_at::h20b571d70eaa1579(&fd_1, 
                            rax_6, rdx_5, rbp_2);
                        r13_1 = rax_8;
                        
                        if rax_8 != 0
                        {
                            goto 'label_51322e;
                        }
                    }
                }
                
                r13_1 = std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() << 0x20 | 2;
                'label_51322e:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::ha0066fb3d75053fd(
                    &var_120);
                fd_2 = fd_1;
            }
        }
        else
        {
            r13_1 = var_e0;
        }
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_2);
    }
    else
    {
        r13_1 = var_e0;
    }
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd);
    r13_1
}
