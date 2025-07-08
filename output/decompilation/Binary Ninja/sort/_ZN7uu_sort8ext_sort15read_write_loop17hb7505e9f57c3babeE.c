
  int64_t uu_sort::ext_sort::read_write_loop::hb7505e9f57c3babe(int64_t* arg1, int64_t* arg2, void* arg3, char arg4, int64_t arg5, void* arg6, int64_t* arg7, int128_t arg8)

{
    int64_t* var_1b0 = arg2;
    int128_t var_1a8 = arg8;
    int64_t rbp;
    rbp = 1;
    int128_t* var_158;
    _$LT$$RF$mut$u20$I$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1c21dc3d4ffd3568(&var_158, arg2);
    int128_t* rdx = var_158;
    
    if (rdx == 2)
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    int64_t var_150;
    int64_t* var_148;
    
    if (!rdx)
    {
        int64_t var_1e0 = var_150;
        int64_t* var_1d8_1 = var_148;
        int64_t var_180 = 0;
        int64_t var_178_1 = 1;
        int64_t var_170_1 = 0;
        int64_t rbp_1 = 0x1f40;
        
        if (arg5 < 0x1f40)
            rbp_1 = arg5;
        
        int32_t rbx_1 = 0;
        uint64_t rax_1 = arg4;
        int64_t r13_1;
        
        while (true)
        {
            rbx_1 = _$LT$i32$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h712e9cb68f36e349(rbx_1);
            uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&var_158, rbp_1);
            void* var_200_1 = arg6;
            int64_t var_c8;
            uu_sort::chunks::read::h2d67c43200642cfd(&var_c8, &var_1a8, &var_158, 1, arg5, 
                &var_180, &var_1e0, &var_1b0, rax_1);
            r13_1 = var_c8;
            int64_t var_c0;
            
            if (r13_1)
            {
                arg1[1] = r13_1;
                arg1[2] = var_c0;
                *arg1 = -0x7ffffffffffffffd;
                rbp_1 = 1;
                break;
            }
            
            if (!var_c0)
            {
                var_158 = var_1a8;
                core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&var_158);
                int128_t* rax_5 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(arg7);
                
                if (!rax_5)
                    *arg1 = -0x8000000000000000;
                else
                {
                    var_158 = rax_5;
                    int64_t rax_6 =
                        std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(arg7);
                    *arg1 = -0x7ffffffffffffffd + -1 - 0;
                    arg1[1] = rax_5;
                    arg1[2] = rax_6;
                }
                
                break;
            }
            
            if (rbx_1 >= 2)
            {
                int128_t var_1d0 = var_1a8;
                int64_t var_198 = 0;
                int64_t var_190_1 = 8;
                int64_t var_188_1 = 0;
                int64_t rax_3;
                
                if (*(arg6 + 0x30) == -0x8000000000000000)
                    rax_3 = 0;
                else
                    rax_3 = *(arg6 + 0x38);
                
                int64_t r12_1 = *(arg6 + 0x40);
                
                while (true)
                {
                    int128_t* rax_7 =
                        std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(arg7);
                    var_158 = rax_7;
                    
                    if (!rax_7)
                    {
                        arg1[2] = var_188_1;
                        *arg1 = var_198;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::hbe180fe5a9f9be02(&var_158);
                        break;
                    }
                    
                    int128_t* var_1f0 = rax_7;
                    uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&var_158, arg3);
                    
                    if (var_150 == -0x8000000000000000)
                    {
                        *(arg1 + 8) = var_148;
                        *arg1 = -0x7ffffffffffffffd;
                        core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h110e2935f03a115d(
                            &var_1f0);
                    }
                    else
                    {
                        int128_t* var_50 = var_158;
                        int64_t var_48_1 = var_150;
                        int128_t var_40_1 = var_148;
                        uu_sort::ext_sort::write::h468c6beb400873d3(&var_c8, var_1f0, &var_50, 
                            rax_3, r12_1, rax_1);
                        int64_t rdx_4 = var_c8;
                        int64_t var_b8;
                        
                        if (rdx_4 == -0x8000000000000000)
                        {
                            arg1[1] = var_c0;
                            arg1[2] = var_b8;
                            *arg1 = -0x7ffffffffffffffd;
                            core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h110e2935f03a115d(&var_1f0);
                        }
                        else
                        {
                            int64_t var_e0 = rdx_4;
                            int64_t var_d8_1 = var_c0;
                            int64_t var_d0_1 = var_b8;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h3f59369679f0d1cb(&var_198, 
                                &var_e0);
                            int64_t r8_2 = uu_sort::chunks::Chunk::recycle::h5f1e538d67d10031(
                                &var_c8, var_1f0);
                            
                            if (var_1d0 == 3)
                            {
                                core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h27a074d6bbea78e7(&var_c8);
                                continue;
                            }
                            else
                            {
                                int64_t var_58;
                                int64_t var_e8_1 = var_58;
                                int128_t var_68;
                                int128_t var_f8_1 = var_68;
                                int128_t var_78;
                                int128_t var_108_1 = var_78;
                                int128_t var_88;
                                int128_t var_118_1 = var_88;
                                int128_t var_98;
                                int128_t var_128_1 = var_98;
                                int128_t var_a8;
                                int128_t var_138_1 = var_a8;
                                var_148 = var_b8;
                                var_158 = var_c8;
                                void* var_200_2 = arg6;
                                int64_t var_168;
                                uu_sort::chunks::read::h2d67c43200642cfd(&var_168, &var_1d0, 
                                    &var_158, 0, r8_2, &var_180, &var_1e0, &var_1b0, rax_1);
                                int64_t rax_11 = var_168;
                                int64_t var_160;
                                
                                if (rax_11)
                                {
                                    arg1[1] = rax_11;
                                    arg1[2] = var_160;
                                    *arg1 = -0x7ffffffffffffffd;
                                }
                                else if (var_160)
                                    continue;
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
        int64_t result = core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$::hda4324549e97968a(var_1e0, var_1d8_1);
        
        if (!r13_1)
            return result;
    }
    else
    {
        arg1[1] = var_150;
        arg1[2] = var_148;
        *arg1 = -0x7ffffffffffffffd;
    }
    return core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&var_1a8);
}
