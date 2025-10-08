
  fn uu_sort::ext_sort::read_write_loop::h130c0126f6a2bd68(arg1: *mut i64, arg2: *mut i64, arg3: *mut c_void, arg4: i8, arg5: i64, arg6: *mut c_void, arg7: i64, arg8: i64, arg9: *mut i128, arg10: *mut i64) -> i64

{
    let mut rbp: *mut i128 = arg9;
    let mut var_198: *mut i128 = rbp;
    let var_190: *mut i64 = arg10;
    let mut r15: i64;
    r15 = 1;
    let mut var_170: *mut i128;
    _$LT$$RF$mut$u20$I$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h27c11185b3259f0c(&var_170, arg2);
    let rdx: *mut i128 = var_170;
    
    if rdx == 2
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let var_168: i64;
    let var_160: *mut i64;
    
    if (rdx & 1) == 0
    {
        let mut var_228: i64 = var_168;
        let mut var_1c0: i64 = 0;
        let var_1b8_1: i64 = 1;
        let var_1b0_1: i64 = 0;
        let mut r15_1: i64 = 0x1f40;
        
        if arg5 < 0x1f40
        {
            r15_1 = arg5;
        }
        
        uu_sort::chunks::RecycledChunk::new::hb2d00041a3f0fa31(&var_170, r15_1);
        let rax_2: u64 = arg4;
        let var_248_1: *mut c_void = arg6;
        let mut var_218: i64;
        uu_sort::chunks::read::h58a9f38ae3d2e00d(&var_218, rbp, arg10, &var_170, 1, arg5, &var_1c0, 
            &var_228, arg2, rax_2);
        let mut rax_3: i64 = var_218;
        let var_210: i8;
        
        if rax_3 != 0
        {
            'label_4c4303:
            arg1[1] = rax_3;
            arg1[2] = var_210;
            *arg1 = -0x7ffffffffffffffd;
            r15_1 = 1;
        }
        else
        {
            let mut var_1f0: i64;
            
            if var_210 == 0
            {
                'label_4c43f2:
                var_170 = rbp;
                let var_168_1: *mut i64 = arg10;
                core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h11dcc279d58efe5d(&var_170);
                let rax_7: i64 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h60814cb01a26dc76(arg7);
                var_1f0 = rax_7;
                let mut rax_8: *mut i128;
                let mut r15_2: i64;
                
                if rax_7 == 0
                {
                    rax_8 = core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::h7ff86e8d0d3ee6b2(&var_1f0);
                    r15_2 = -0x8000000000000000;
                }
                else
                {
                    var_218 = rax_7;
                    rax_8 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h60814cb01a26dc76(arg7);
                    var_170 = rax_8;
                    
                    if rax_8 == 0
                    {
                        rax_8 = core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::h7ff86e8d0d3ee6b2(&var_170);
                        r15_2 = -0x7fffffffffffffff;
                    }
                    else
                    {
                        r15_2 = -0x7ffffffffffffffe;
                    }
                }
                
                *arg1 = r15_2;
                arg1[1] = rax_7;
                arg1[2] = rax_8;
                r15_1 = 0;
            }
            else
            {
                uu_sort::chunks::RecycledChunk::new::hb2d00041a3f0fa31(&var_170, r15_1);
                let var_248_2: *mut c_void = arg6;
                uu_sort::chunks::read::h58a9f38ae3d2e00d(&var_218, rbp, arg10, &var_170, 1, arg5, 
                    &var_1c0, &var_228, arg2, rax_2);
                rax_3 = var_218;
                
                if rax_3 != 0
                {
                    goto 'label_4c4303;
                }
                
                if var_210 != 1
                {
                    goto 'label_4c43f2;
                }
                
                let mut var_200: *mut i128 = rbp;
                let var_1f8_1: *mut i64 = arg10;
                var_1f0 = 0;
                let var_1e8_1: i64 = 8;
                let var_1e0_1: i64 = 0;
                let var_1d0_1: i64 = -0x8000000000000000;
                let mut var_1d8_1: i64;
                
                if *arg6.byte_offset(0x30) == -0x8000000000000000
                {
                    var_1d8_1 = 0;
                }
                else
                {
                    var_1d8_1 = *arg6.byte_offset(0x38);
                }
                
                let rax_9: i64 = *arg6.byte_offset(0x40);
                
                loop
                {
                    let rax_10: *mut i128 =
                        std::sync::mpmc::Receiver$LT$T$GT$::recv::h60814cb01a26dc76(arg7);
                    var_170 = rax_10;
                    
                    if rax_10 == 0
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::h7ff86e8d0d3ee6b2(&var_170);
                        arg1[2] = var_1e0_1;
                        *arg1 = var_1f0;
                        break;
                    }
                    
                    let mut var_1c8: *mut i128 = rax_10;
                    uu_sort::tmp_dir::TmpDirWrapper::next_file::he098c4319062daf7(&var_170, arg3);
                    
                    if var_168 == var_1d0_1
                    {
                        *arg1.byte_offset(8) = var_160;
                        *arg1 = -0x7ffffffffffffffd;
                        core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h49f783d79a42b220(
                            &var_1c8);
                    }
                    else
                    {
                        let mut var_e0: *mut i128 = var_170;
                        let var_d8_1: i64 = var_168;
                        let var_d0_1: i128 = var_160;
                        uu_sort::ext_sort::write::h98aba9eb6daabd79(&var_218, rax_10, &var_e0, 
                            var_1d8_1, rax_9, rax_2);
                        let rdx_4: i64 = var_218;
                        let rax_12: i64 = var_210;
                        let var_208: i64;
                        
                        if rdx_4 == var_1d0_1
                        {
                            arg1[1] = rax_12;
                            arg1[2] = var_208;
                            *arg1 = -0x7ffffffffffffffd;
                            core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h49f783d79a42b220(&var_1c8);
                        }
                        else
                        {
                            let mut var_188: i64 = rdx_4;
                            let var_180_1: i64 = rax_12;
                            let var_178_1: i64 = var_208;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::hb4bc2dc398314653(&var_1f0, 
                                &var_188);
                            let mut var_c0: ();
                            let r9_3: i64 =
                                uu_sort::chunks::Chunk::recycle::h028cbe8b563e97c5(&var_c0, rax_10);
                            let mut rcx_9: *mut i128;
                            
                            if rbp == 3
                            {
                                core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h1242833000dc0e63(&var_c0);
                                rbp = 3;
                                continue;
                            }
                            else
                            {
                                let var_248_3: *mut c_void = arg6;
                                uu_sort::chunks::read::h58a9f38ae3d2e00d(&var_170, rbp, arg10, 
                                    &var_c0, 0, r9_3, &var_1c0, &var_228, arg2, rax_2);
                                rcx_9 = var_170;
                                
                                if rcx_9 == 0
                                {
                                    if (var_168 & 1) != 0
                                    {
                                        continue;
                                    }
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
        let result: i64 = core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hcc69def0910ab351(var_228, var_160);
        
        if r15_1 == 0
        {
            return result;
        }
    }
    else
    {
        arg1[1] = var_168;
        arg1[2] = var_160;
        *arg1 = -0x7ffffffffffffffd;
    }
    core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h11dcc279d58efe5d(&var_198)
}
