
  int64_t uu_sort::ext_sort::read_write_loop::h289e20b2b60c2e20(int64_t* arg1, int64_t* arg2, void* arg3, char arg4, int64_t arg5, void* arg6, int64_t* arg7, int128_t arg8)

{
    int64_t* var_1d8 = arg2;
    int128_t var_1d0 = arg8;
    int64_t rbp;
    rbp = 1;
    int128_t* var_178;
    _$LT$$RF$mut$u20$I$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1c21dc3d4ffd3568(&var_178, arg2);
    int128_t* rdx = var_178;
    
    if (rdx == 2)
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    int64_t var_170;
    int64_t* var_168;
    
    if (!rdx)
    {
        int64_t var_200 = var_170;
        int64_t* var_1f8_1 = var_168;
        int64_t var_1a8 = 0;
        int64_t var_1a0_1 = 1;
        int64_t var_198_1 = 0;
        int64_t rbp_1 = 0x1f40;
        
        if (arg5 < 0x1f40)
            rbp_1 = arg5;
        
        int32_t rbx_1 = 0;
        uint64_t rax_1 = arg4;
        int64_t r13_1;
        
        while (true)
        {
            rbx_1 = _$LT$i32$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h712e9cb68f36e349(rbx_1);
            uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&var_178, rbp_1);
            void* var_230_1 = arg6;
            int64_t var_f8;
            uu_sort::chunks::read::h2d67c43200642cfd(&var_f8, &var_1d0, &var_178, 1, arg5, 
                &var_1a8, &var_200, &var_1d8, rax_1);
            r13_1 = var_f8;
            int64_t var_f0;
            
            if (r13_1)
            {
                arg1[1] = r13_1;
                arg1[2] = var_f0;
                *arg1 = -0x7ffffffffffffffd;
                rbp_1 = 1;
                break;
            }
            
            if (!var_f0)
            {
                var_178 = var_1d0;
                core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&var_178);
                int128_t* rax_5 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(arg7);
                
                if (!rax_5)
                    *arg1 = -0x8000000000000000;
                else
                {
                    var_178 = rax_5;
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
                int128_t var_1f0 = var_1d0;
                int64_t var_1c0 = 0;
                int64_t var_1b8_1 = 8;
                int64_t var_1b0_1 = 0;
                int64_t rcx_1;
                
                if (*(arg6 + 0x30) == -0x8000000000000000)
                    rcx_1 = 0;
                else
                    rcx_1 = *(arg6 + 0x38);
                
                uint64_t r12_1 = *(arg6 + 0x40);
                
                while (true)
                {
                    int128_t* rax_7 =
                        std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(arg7);
                    var_178 = rax_7;
                    
                    if (!rax_7)
                    {
                        arg1[2] = var_1b0_1;
                        *arg1 = var_1c0;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::hbe180fe5a9f9be02(&var_178);
                        break;
                    }
                    
                    int128_t* var_218 = rax_7;
                    uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&var_f8, arg3);
                    int128_t var_e8;
                    
                    if (var_f0 == -0x8000000000000000)
                    {
                        *(arg1 + 8) = var_e8;
                        *arg1 = -0x7ffffffffffffffd;
                        core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h110e2935f03a115d(
                            &var_218);
                    }
                    else
                    {
                        int64_t var_80 = var_f8;
                        int64_t var_78_1 = var_f0;
                        int128_t var_70_1 = var_e8;
                        uu_sort::ext_sort::write::h9263e275eb902110(&var_178, var_218, &var_80, 
                            rcx_1, r12_1, rax_1);
                        int128_t* rdx_4 = var_178;
                        
                        if (rdx_4 == -0x8000000000000000)
                        {
                            arg1[1] = var_170;
                            arg1[2] = var_168;
                            *arg1 = -0x7ffffffffffffffd;
                            core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h110e2935f03a115d(&var_218);
                        }
                        else
                        {
                            int64_t var_150;
                            int64_t var_38_1 = var_150;
                            int128_t var_160;
                            int128_t var_48_1 = var_160;
                            int128_t* var_60 = rdx_4;
                            int64_t var_58_1 = var_170;
                            int64_t* var_50_1 = var_168;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h0eb5ff577fb6ec6f(&var_1c0, 
                                &var_60);
                            int64_t r8_2 = uu_sort::chunks::Chunk::recycle::h5f1e538d67d10031(
                                &var_f8, var_218);
                            
                            if (var_1f0 == 3)
                            {
                                core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h27a074d6bbea78e7(&var_f8);
                                continue;
                            }
                            else
                            {
                                int64_t var_88;
                                int64_t var_108_1 = var_88;
                                int128_t var_98;
                                int128_t var_118_1 = var_98;
                                int128_t var_a8;
                                int128_t var_128_1 = var_a8;
                                int128_t var_b8;
                                int128_t var_138_1 = var_b8;
                                int128_t var_c8;
                                int128_t var_148_1 = var_c8;
                                int128_t var_d8;
                                var_160 = var_d8;
                                var_168 = var_e8;
                                var_178 = var_f8;
                                void* var_230_2 = arg6;
                                int64_t var_188;
                                uu_sort::chunks::read::h2d67c43200642cfd(&var_188, &var_1f0, 
                                    &var_178, 0, r8_2, &var_1a8, &var_200, &var_1d8, rax_1);
                                int64_t rax_11 = var_188;
                                int64_t var_180;
                                
                                if (rax_11)
                                {
                                    arg1[1] = rax_11;
                                    arg1[2] = var_180;
                                    *arg1 = -0x7ffffffffffffffd;
                                }
                                else if (var_180)
                                    continue;
                                else
                                {
                                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h5e99902b231fa387(&var_1f0);
                                    var_1f0 = 3;
                                    continue;
                                }
                            }
                        }
                    }
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&var_1c0);
                    break;
                }
                
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h5e99902b231fa387(&var_1f0);
                break;
            }
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(&var_1a8);
        int64_t result = core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$::hda4324549e97968a(var_200, var_1f8_1);
        
        if (!r13_1)
            return result;
    }
    else
    {
        arg1[1] = var_170;
        arg1[2] = var_168;
        *arg1 = -0x7ffffffffffffffd;
    }
    return core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&var_1d0);
}
