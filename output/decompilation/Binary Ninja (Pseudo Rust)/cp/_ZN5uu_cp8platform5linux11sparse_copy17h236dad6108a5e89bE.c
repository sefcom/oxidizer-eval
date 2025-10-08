
  fn uu_cp::platform::linux::sparse_copy::h236dad6108a5e89b(arg1: i64, arg2: i64, arg3: i64) -> *mut *mut c_void

{
    let mut var_e0: i32;
    std::fs::File::open::h87ebb42518eeb9ff(&var_e0, arg1);
    let var_d8: *mut *mut c_void;
    
    if var_e0 == 1
    {
        return var_d8;
    }
    
    let fd_4: i32;
    let mut fd_2: i32 = fd_4;
    let mut fd: i32 = fd_2;
    std::fs::File::create::h515d4c5b46fc5d80(&var_e0, arg3);
    let mut r14_1: *mut *mut c_void;
    
    if (var_e0 & 1) == 0
    {
        let mut fd_3: i32 = fd_4;
        let mut fd_1: i32 = fd_3;
        std::fs::File::metadata::h5e84e533705f8c98(&var_e0, &fd);
        
        if var_e0 == 2
        {
            r14_1 = var_d8;
        }
        else
        {
            let var_90: i64;
            core::result::Result$LT$T$C$E$GT$::unwrap::h9e6c4a291aa92713(var_90 >> 0x3f);
            
            if ftruncate(fd_3) < 0
            {
                r14_1 = *__errno_location() << 0x20 | 2;
            }
            else
            {
                std::fs::File::metadata::h5e84e533705f8c98(&var_e0, &fd_1);
                
                if var_e0 != 2
                {
                    let var_88: i64;
                    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h451713e6c2a4190a(&var_e0, var_88);
                    
                    if var_90 == 0
                    {
                        'label_49b799:
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h320a3f42966bf686(var_e0, var_d8);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd_1);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd);
                        return nullptr;
                    }
                    
                    let mut r13_1: *mut c_void = nullptr;
                    
                    loop
                    {
                        let var_d0: u64;
                        let mut rax_3: i8;
                        let mut rdx_4: *mut *mut c_void;
                        rax_3 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h614ade6d36e62b0e(&fd, var_d8, var_d0);
                        r14_1 = rdx_4;
                        
                        if (rax_3 & 1) == 0
                        {
                            let mut rax_4: i64;
                            let mut rdx_6: u64;
                            rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2c9d32cad28cad50(0, r14_1, var_d8, var_d0);
                            let mut var_f0: i64 = rax_4;
                            let var_e8_1: i64 = rax_4 + rdx_6;
                            let rax_6: i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h634df474c9b6c8b5(&var_f0);
                            let mut rax_7: *mut *mut c_void;
                            
                            if rax_6 != 0
                            {
                                rax_7 = std::os::unix::fs::FileExt::write_all_at::h89d9f0be51744c7e(
                                    &fd_1, rax_4, rdx_6, r13_1);
                            }
                            
                            if rax_6 == 0 || rax_7 == 0
                            {
                                r13_1 += r14_1;
                                
                                if r13_1 >= var_90
                                {
                                    goto 'label_49b799;
                                }
                                
                                continue;
                            }
                            else
                            {
                                r14_1 = rax_7;
                            }
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h320a3f42966bf686(var_e0, var_d8);
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
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd_3);
        fd_2 = fd;
    }
    else
    {
        r14_1 = var_d8;
    }
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd_2);
    r14_1
}
