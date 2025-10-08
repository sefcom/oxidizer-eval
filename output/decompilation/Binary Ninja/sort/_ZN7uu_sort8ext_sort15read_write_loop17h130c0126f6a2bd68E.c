
  int64_t uu_sort::ext_sort::read_write_loop::h130c0126f6a2bd68(int64_t* arg1, int64_t* arg2, void* arg3, char arg4, int64_t arg5, void* arg6, int64_t arg7, int64_t arg8, int128_t* arg9, int64_t* arg10)

{
    int128_t* rbp = arg9;
    int128_t* var_198 = rbp;
    int64_t* var_190 = arg10;
    int64_t r15;
    r15 = 1;
    int128_t* var_170;
    _$LT$$RF$mut$u20$I$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h27c11185b3259f0c(&var_170, arg2);
    int128_t* rdx = var_170;
    
    if (rdx == 2)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int64_t var_168;
    int64_t* var_160;
    
    if (!(rdx & 1))
    {
        int64_t var_228 = var_168;
        int64_t var_1c0 = 0;
        int64_t var_1b8_1 = 1;
        int64_t var_1b0_1 = 0;
        int64_t r15_1 = 0x1f40;
        
        if (arg5 < 0x1f40)
            r15_1 = arg5;
        
        uu_sort::chunks::RecycledChunk::new::hb2d00041a3f0fa31(&var_170, r15_1);
        uint64_t rax_2 = arg4;
        void* var_248_1 = arg6;
        int64_t var_218;
        uu_sort::chunks::read::h58a9f38ae3d2e00d(&var_218, rbp, arg10, &var_170, 1, arg5, &var_1c0, 
            &var_228, arg2, rax_2);
        int64_t rax_3 = var_218;
        char var_210;
        
        if (rax_3)
        {
            label_4c4303:
            arg1[1] = rax_3;
            arg1[2] = var_210;
            *arg1 = -0x7ffffffffffffffd;
            r15_1 = 1;
        }
        else
        {
            int64_t var_1f0;
            
            if (!var_210)
            {
                label_4c43f2:
                var_170 = rbp;
                int64_t* var_168_1 = arg10;
                core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h11dcc279d58efe5d(&var_170);
                int64_t rax_7 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h60814cb01a26dc76(arg7);
                var_1f0 = rax_7;
                int128_t* rax_8;
                int64_t r15_2;
                
                if (!rax_7)
                {
                    rax_8 = core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::h7ff86e8d0d3ee6b2(&var_1f0);
                    r15_2 = -0x8000000000000000;
                }
                else
                {
                    var_218 = rax_7;
                    rax_8 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h60814cb01a26dc76(arg7);
                    var_170 = rax_8;
                    
                    if (!rax_8)
                    {
                        rax_8 = core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::h7ff86e8d0d3ee6b2(&var_170);
                        r15_2 = -0x7fffffffffffffff;
                    }
                    else
                        r15_2 = -0x7ffffffffffffffe;
                }
                
                *arg1 = r15_2;
                arg1[1] = rax_7;
                arg1[2] = rax_8;
                r15_1 = 0;
            }
            else
            {
                uu_sort::chunks::RecycledChunk::new::hb2d00041a3f0fa31(&var_170, r15_1);
                void* var_248_2 = arg6;
                uu_sort::chunks::read::h58a9f38ae3d2e00d(&var_218, rbp, arg10, &var_170, 1, arg5, 
                    &var_1c0, &var_228, arg2, rax_2);
                rax_3 = var_218;
                
                if (rax_3)
                    goto label_4c4303;
                
                if (var_210 != 1)
                    goto label_4c43f2;
                
                int128_t* var_200 = rbp;
                int64_t* var_1f8_1 = arg10;
                var_1f0 = 0;
                int64_t var_1e8_1 = 8;
                int64_t var_1e0_1 = 0;
                int64_t var_1d0_1 = -0x8000000000000000;
                int64_t var_1d8_1;
                
                if (*(arg6 + 0x30) == -0x8000000000000000)
                    var_1d8_1 = 0;
                else
                    var_1d8_1 = *(arg6 + 0x38);
                
                int64_t rax_9 = *(arg6 + 0x40);
                
                while (true)
                {
                    int128_t* rax_10 =
                        std::sync::mpmc::Receiver$LT$T$GT$::recv::h60814cb01a26dc76(arg7);
                    var_170 = rax_10;
                    
                    if (!rax_10)
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::h7ff86e8d0d3ee6b2(&var_170);
                        arg1[2] = var_1e0_1;
                        *arg1 = var_1f0;
                        break;
                    }
                    
                    int128_t* var_1c8 = rax_10;
                    uu_sort::tmp_dir::TmpDirWrapper::next_file::he098c4319062daf7(&var_170, arg3);
                    
                    if (var_168 == var_1d0_1)
                    {
                        *(arg1 + 8) = var_160;
                        *arg1 = -0x7ffffffffffffffd;
                        core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h49f783d79a42b220(
                            &var_1c8);
                    }
                    else
                    {
                        int128_t* var_e0 = var_170;
                        int64_t var_d8_1 = var_168;
                        int128_t var_d0_1 = var_160;
                        uu_sort::ext_sort::write::h98aba9eb6daabd79(&var_218, rax_10, &var_e0, 
                            var_1d8_1, rax_9, rax_2);
                        int64_t rdx_4 = var_218;
                        int64_t rax_12 = var_210;
                        int64_t var_208;
                        
                        if (rdx_4 == var_1d0_1)
                        {
                            arg1[1] = rax_12;
                            arg1[2] = var_208;
                            *arg1 = -0x7ffffffffffffffd;
                            core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h49f783d79a42b220(&var_1c8);
                        }
                        else
                        {
                            int64_t var_188 = rdx_4;
                            int64_t var_180_1 = rax_12;
                            int64_t var_178_1 = var_208;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::hb4bc2dc398314653(&var_1f0, 
                                &var_188);
                            void var_c0;
                            int64_t r9_3 =
                                uu_sort::chunks::Chunk::recycle::h028cbe8b563e97c5(&var_c0, rax_10);
                            int128_t* rcx_9;
                            
                            if (rbp == 3)
                            {
                                core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h1242833000dc0e63(&var_c0);
                                rbp = 3;
                                continue;
                            }
                            else
                            {
                                void* var_248_3 = arg6;
                                uu_sort::chunks::read::h58a9f38ae3d2e00d(&var_170, rbp, arg10, 
                                    &var_c0, 0, r9_3, &var_1c0, &var_228, arg2, rax_2);
                                rcx_9 = var_170;
                                
                                if (!rcx_9)
                                {
                                    if (var_168 & 1)
                                        continue;
                                    else
                                    {
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::he35ebd9a2df381cb(&var_200);
                                        var_200 = 3;
                                    }
                                    
                                    rbp = 3;
                                    continue;
                                }
                            }
                            
                            arg1[1] = rcx_9;
                            arg1[2] = var_168;
                            *arg1 = -0x7ffffffffffffffd;
                        }
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::hd5e30e780995eb35(&var_1f0);
                    break;
                }
                
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::he35ebd9a2df381cb(&var_200);
                r15_1 = 0;
            }
        }
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hf1471b789cf37b11(&var_1c0);
        int64_t result = core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hcc69def0910ab351(var_228, var_160);
        
        if (!r15_1)
            return result;
    }
    else
    {
        arg1[1] = var_168;
        arg1[2] = var_160;
        *arg1 = -0x7ffffffffffffffd;
    }
    return core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h11dcc279d58efe5d(&var_198);
}
