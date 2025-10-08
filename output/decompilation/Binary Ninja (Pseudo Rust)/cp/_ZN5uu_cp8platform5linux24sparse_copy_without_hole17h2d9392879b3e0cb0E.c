
  fn uu_cp::platform::linux::sparse_copy_without_hole::h2d9392879b3e0cb0(arg1: i64, arg2: i64, arg3: i64) -> *mut *mut c_void

{
    let mut var_e8: i32;
    std::fs::File::open::h87ebb42518eeb9ff(&var_e8, arg1);
    let var_e0: *mut *mut c_void;
    
    if var_e8 == 1
    {
        return var_e0;
    }
    
    let fd_5: i32;
    let mut fd: i32 = fd_5;
    std::fs::File::create::h515d4c5b46fc5d80(&var_e8, arg3);
    let mut r13_1: *mut *mut c_void;
    
    if (var_e8 & 1) == 0
    {
        let mut fd_2: i32 = fd_5;
        let mut fd_1: i32 = fd_2;
        std::fs::File::metadata::h5e84e533705f8c98(&var_e8, &fd);
        
        if var_e8 != 2
        {
            let var_98: i64;
            core::result::Result$LT$T$C$E$GT$::unwrap::h9e6c4a291aa92713(var_98 >> 0x3f);
            
            if ftruncate(fd_2) < 0
            {
                r13_1 = *__errno_location() << 0x20 | 2;
            }
            else
            {
                let mut fd_3: i32 = fd;
                let rax_3: i64 = core::cmp::Ord::min::hb27fc151278b8567(var_98);
                let mut var_120: i64;
                _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h451713e6c2a4190a(&var_120, rax_3);
                let mut __arg2: off64_t = 0;
                let fd_4: i32 = fd_3;
                let var_118: i64;
                
                loop
                {
                    core::result::Result$LT$T$C$E$GT$::unwrap::h9e6c4a291aa92713(0);
                    let __arg2_1: off64_t = lseek(fd_3, __arg2, 3);
                    core::result::Result$LT$T$C$E$GT$::unwrap::h9e6c4a291aa92713(0);
                    let __arg2_2: off64_t = lseek(fd_3, __arg2_1, 4);
                    
                    if __arg2_1 == -1 || __arg2_2 == -1
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h320a3f42966bf686(var_120, var_118);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd_1);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd);
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
                    core::iter::adapters::step_by::StepBy$LT$I$GT$::new::h10be5d279cda01b9(
                        &var_108, r12_2, rax_3);
                    let var_f8: i72;
                    let mut var_d8_1: i72 = var_f8;
                    var_e8 = var_108;
                    
                    loop
                    {
                        *var_d8_1[8] = 0;
                        let mut rax_4: i8;
                        let mut rdx_4: *mut c_void;
                        rax_4 = _$LT$core..ops..range..Range$LT$T$GT$$u20$as$u20$core..iter..range..RangeIteratorImpl$GT$::spec_nth::hb2ca9648191df11e(&var_e8);
                        
                        if (rax_4 & 1) == 0
                        {
                            fd_3 = fd_4;
                            break;
                        }
                        
                        let var_110: i64;
                        let mut rax_6: i64;
                        let mut rdx_6: u64;
                        rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h2dbef9c3b49f89ca(core::cmp::Ord::min::he5724570cd2b0d00(r12_2 - rdx_4, rax_3), 
                            var_118, var_110);
                        let rbp_2: *mut c_void = rdx_4.byte_offset(__arg2_1);
                        let rax_7: *mut *mut c_void =
                            std::os::unix::fs::FileExt::read_exact_at::h9b8d46c56d66108a(&fd, 
                            rax_6, rdx_6, rbp_2);
                        r13_1 = rax_7;
                        
                        if rax_7 != 0
                        {
                            goto 'label_49b547;
                        }
                        
                        let rax_8: *mut *mut c_void =
                            std::os::unix::fs::FileExt::write_all_at::h89d9f0be51744c7e(&fd_1, 
                            rax_6, rdx_6, rbp_2);
                        r13_1 = rax_8;
                        
                        if rax_8 != 0
                        {
                            goto 'label_49b547;
                        }
                    }
                }
                
                r13_1 = *__errno_location() << 0x20 | 2;
                'label_49b547:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h320a3f42966bf686(
                    var_120, var_118);
                fd_2 = fd_1;
            }
        }
        else
        {
            r13_1 = var_e0;
        }
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd_2);
    }
    else
    {
        r13_1 = var_e0;
    }
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd);
    r13_1
}
