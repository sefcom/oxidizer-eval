
  uint64_t fd::walk::ReceiverBuffer$LT$W$GT$::poll::h9f4121b39c66ee5a(int64_t* arg1)

{
    uint64_t r12;
    uint64_t var_28 = r12;
    char var_408;
    fd::walk::ReceiverBuffer$LT$W$GT$::recv::h8dbfc300797ecbf6(&var_408, arg1);
    int32_t rax_3;
    
    if (var_408 != 1)
    {
        void* var_400;
        void var_3f8;
        _$LT$fd..walk..Batch$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::ha3478b4a51e5ebd4(&var_3f8, var_400);
        int64_t var_2a0;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hedaba6ae2ed0cd7a(&var_2a0, &var_3f8);
        int64_t rax_1 = var_2a0;
        
        if (rax_1 != 5)
        {
            while (true)
            {
                int128_t var_3d8;
                int128_t var_298;
                int128_t var_288;
                int128_t var_278;
                int64_t var_268;
                int64_t var_168;
                
                if (rax_1 != 4)
                {
                    var_168 = rax_1;
                    int64_t var_130_1 = var_268;
                    int128_t var_140_1 = var_278;
                    int128_t var_150_1 = var_288;
                    int128_t var_160_1 = var_298;
                    void var_260;
                    void var_128;
                    memcpy(&var_128, &var_260, 0xf8);
                    
                    if (*(arg1[0xc] + 0x1e4))
                    {
                        r12 = 1;
                        label_5f8196:
                        core::ptr::drop_in_place$LT$fd..dir_entry..DirEntry$GT$::h394f0ee2b950b509(
                            &var_168);
                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$fd..walk..WorkerResult$GT$$GT$::hcd63f5c23d93d0e6(&var_3f8);
                        break;
                    }
                    
                    char r13_1 = arg1[0x10];
                    
                    if (r13_1 != 1)
                    {
                        memcpy(&var_3d8, &var_168, 0x138);
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h7dac86c0f96ef44d(&arg1[7], &var_3d8);
                        
                        if (arg1[9] >= 0x3e9)
                        {
                            int32_t rax_9 =
                                fd::walk::ReceiverBuffer$LT$W$GT$::stream::hd6ded5132bc549ae(arg1);
                            r12 = rax_9;
                            
                            if (rax_9 != 6)
                            {
                                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$fd..walk..WorkerResult$GT$$GT$::hcd63f5c23d93d0e6(&var_3f8);
                                break;
                                break;
                            }
                        }
                    }
                    else
                    {
                        int32_t rax_8 = fd::walk::ReceiverBuffer$LT$W$GT$::print::hd2dc40990132b5db(
                            arg1, &var_168);
                        r12 = rax_8;
                        
                        if (rax_8 != 6)
                            goto label_5f8196;
                    }
                    
                    void* rax_10 = arg1[0xc];
                    int64_t rcx_4 = arg1[0xf] + 1;
                    arg1[0xf] = rcx_4;
                    
                    if (*(rax_10 + 0x20) & 1 && rcx_4 >= *(rax_10 + 0x28))
                    {
                        r12 = fd::walk::ReceiverBuffer$LT$W$GT$::stop::h953efcef9522a5da(arg1);
                        
                        if (r13_1)
                            goto label_5f8196;
                        
                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$fd..walk..WorkerResult$GT$$GT$::hcd63f5c23d93d0e6(&var_3f8);
                        break;
                    }
                    
                    if (r13_1)
                        core::ptr::drop_in_place$LT$fd..dir_entry..DirEntry$GT$::h394f0ee2b950b509(
                            &var_168);
                }
                else
                {
                    int64_t var_3a8_1 = var_268;
                    int128_t var_3b8_1 = var_278;
                    int128_t var_3c8_1 = var_288;
                    var_3d8 = var_298;
                    
                    if (*(arg1[0xc] + 0x1e6))
                    {
                        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h7dbe7d6fc55b9016(&var_168, &var_3d8);
                        fd::error::print_error::h653511955bf98e50(&var_168);
                    }
                    
                    core::ptr::drop_in_place$LT$ignore..Error$GT$::hba255aab589c455f(&var_3d8);
                }
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hedaba6ae2ed0cd7a(&var_2a0, &var_3f8);
                rax_1 = var_2a0;
                
                if (rax_1 == 5)
                    goto label_5f7f91;
            }
        }
        else
        {
            label_5f7f91:
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$fd..walk..WorkerResult$GT$$GT$::hcd63f5c23d93d0e6(&var_3f8);
            
            if (arg1[0x10] != 1)
                r12 = 6;
            else if (!crossbeam_channel::channel::Receiver$LT$T$GT$::is_empty::hc60a607ed2b18f6a(
                    *arg1, arg1[1]))
                r12 = 6;
            else
            {
                rax_3 = fd::walk::ReceiverBuffer$LT$W$GT$::flush::h793374cb5c5836e2(arg1);
                
                if (rax_3 == 6)
                    r12 = 6;
                else
                    r12 = rax_3;
            }
        }
    }
    else
    {
        char var_407;
        
        if (var_407)
            /* tailcall */
            return fd::walk::ReceiverBuffer$LT$W$GT$::stop::h953efcef9522a5da(arg1);
        
        rax_3 = fd::walk::ReceiverBuffer$LT$W$GT$::stream::hd6ded5132bc549ae(arg1);
        
        if (rax_3 != 6)
            r12 = rax_3;
        else
            r12 = 6;
    }
    return r12;
}
