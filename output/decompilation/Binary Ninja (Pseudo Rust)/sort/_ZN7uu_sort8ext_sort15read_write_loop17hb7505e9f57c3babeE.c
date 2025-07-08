
  fn uu_sort::ext_sort::read_write_loop::hb7505e9f57c3babe(arg1: *mut i64, arg2: *mut i64, arg3: *mut c_void, arg4: i8, arg5: i64, arg6: *mut c_void, arg7: *mut i64, arg8: i128) -> i64

{
    let mut var_1b0: *mut i64 = arg2;
    let mut var_1a8: i128 = arg8;
    let mut rbp: i64;
    rbp = 1;
    let mut var_158: *mut i128;
    _$LT$$RF$mut$u20$I$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1c21dc3d4ffd3568(&var_158, arg2);
    let rdx: *mut i128 = var_158;
    
    if rdx == 2
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    let var_150: i64;
    let mut var_148: *mut i64;
    
    if rdx == 0
    {
        let mut var_1e0: i64 = var_150;
        let var_1d8_1: *mut i64 = var_148;
        let mut var_180: i64 = 0;
        let var_178_1: i64 = 1;
        let var_170_1: i64 = 0;
        let mut rbp_1: i64 = 0x1f40;
        
        if arg5 < 0x1f40
        {
            rbp_1 = arg5;
        }
        
        let mut rbx_1: i32 = 0;
        let rax_1: u64 = arg4;
        let mut r13_1: i64;
        
        loop
        {
            rbx_1 = _$LT$i32$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h712e9cb68f36e349(rbx_1);
            uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&var_158, rbp_1);
            let var_200_1: *mut c_void = arg6;
            let mut var_c8: i64;
            uu_sort::chunks::read::h2d67c43200642cfd(&var_c8, &var_1a8, &var_158, 1, arg5, 
                &var_180, &var_1e0, &var_1b0, rax_1);
            r13_1 = var_c8;
            let var_c0: i64;
            
            if r13_1 != 0
            {
                arg1[1] = r13_1;
                arg1[2] = var_c0;
                *arg1 = -0x7ffffffffffffffd;
                rbp_1 = 1;
                break;
            }
            
            if var_c0 == 0
            {
                var_158 = var_1a8;
                core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&var_158);
                let rax_5: *mut i128 =
                    std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(arg7);
                
                if rax_5 == 0
                {
                    *arg1 = -0x8000000000000000;
                }
                else
                {
                    var_158 = rax_5;
                    let rax_6: i64 =
                        std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(arg7);
                    *arg1 = -0x7ffffffffffffffd + -1 - 0;
                    arg1[1] = rax_5;
                    arg1[2] = rax_6;
                }
                
                break;
            }
            
            if rbx_1 >= 2
            {
                let mut var_1d0: i128 = var_1a8;
                let mut var_198: i64 = 0;
                let var_190_1: i64 = 8;
                let var_188_1: i64 = 0;
                let mut rax_3: i64;
                
                if *arg6.byte_offset(0x30) == -0x8000000000000000
                {
                    rax_3 = 0;
                }
                else
                {
                    rax_3 = *arg6.byte_offset(0x38);
                }
                
                let r12_1: i64 = *arg6.byte_offset(0x40);
                
                loop
                {
                    let rax_7: *mut i128 =
                        std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(arg7);
                    var_158 = rax_7;
                    
                    if rax_7 == 0
                    {
                        arg1[2] = var_188_1;
                        *arg1 = var_198;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::hbe180fe5a9f9be02(&var_158);
                        break;
                    }
                    
                    let mut var_1f0: *mut i128 = rax_7;
                    uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&var_158, arg3);
                    
                    if var_150 == -0x8000000000000000
                    {
                        *arg1.byte_offset(8) = var_148;
                        *arg1 = -0x7ffffffffffffffd;
                        core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h110e2935f03a115d(
                            &var_1f0);
                    }
                    else
                    {
                        let mut var_50: *mut i128 = var_158;
                        let var_48_1: i64 = var_150;
                        let var_40_1: i128 = var_148;
                        uu_sort::ext_sort::write::h468c6beb400873d3(&var_c8, var_1f0, &var_50, 
                            rax_3, r12_1, rax_1);
                        let rdx_4: i64 = var_c8;
                        let var_b8: i64;
                        
                        if rdx_4 == -0x8000000000000000
                        {
                            arg1[1] = var_c0;
                            arg1[2] = var_b8;
                            *arg1 = -0x7ffffffffffffffd;
                            core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h110e2935f03a115d(&var_1f0);
                        }
                        else
                        {
                            let mut var_e0: i64 = rdx_4;
                            let var_d8_1: i64 = var_c0;
                            let var_d0_1: i64 = var_b8;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h3f59369679f0d1cb(&var_198, 
                                &var_e0);
                            let r8_2: i64 = uu_sort::chunks::Chunk::recycle::h5f1e538d67d10031(
                                &var_c8, var_1f0);
                            
                            if var_1d0 == 3
                            {
                                core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h27a074d6bbea78e7(&var_c8);
                                continue;
                            }
                            else
                            {
                                let var_58: i64;
                                let var_e8_1: i64 = var_58;
                                let var_68: i128;
                                let var_f8_1: i128 = var_68;
                                let var_78: i128;
                                let var_108_1: i128 = var_78;
                                let var_88: i128;
                                let var_118_1: i128 = var_88;
                                let var_98: i128;
                                let var_128_1: i128 = var_98;
                                let var_a8: i128;
                                let var_138_1: i128 = var_a8;
                                var_148 = var_b8;
                                var_158 = var_c8;
                                let var_200_2: *mut c_void = arg6;
                                let mut var_168: i64;
                                uu_sort::chunks::read::h2d67c43200642cfd(&var_168, &var_1d0, 
                                    &var_158, 0, r8_2, &var_180, &var_1e0, &var_1b0, rax_1);
                                let rax_11: i64 = var_168;
                                let var_160: i64;
                                
                                if rax_11 != 0
                                {
                                    arg1[1] = rax_11;
                                    arg1[2] = var_160;
                                    *arg1 = -0x7ffffffffffffffd;
                                }
                                else if var_160 != 0
                                {
                                    continue;
                                }
                                else
                                {
                                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h5e99902b231fa387(&var_1d0);
                                    var_1d0 = 3;
                                    continue;
                                }
                            }
                        }
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&var_198);
                    break;
                }
                
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h5e99902b231fa387(&var_1d0);
                break;
            }
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(&var_180);
        let result: i64 = core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$::hda4324549e97968a(var_1e0, var_1d8_1);
        
        if r13_1 == 0
        {
            return result;
        }
    }
    else
    {
        arg1[1] = var_150;
        arg1[2] = var_148;
        *arg1 = -0x7ffffffffffffffd;
    }
    core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&var_1a8)
}
