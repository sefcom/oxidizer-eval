
  int64_t* uu_sort::check::check::h11c4cef265093291(int64_t arg1, uint64_t arg2, void* arg3)

{
    char r12 = 0 - *(arg3 + 0x84);
    char var_1d8;
    uu_sort::open::h6e0cf77724ac2e35(&var_1d8, arg1);
    int64_t* var_1d0;
    
    if (var_1d8 & 1)
        return var_1d0;
    
    int64_t r14;
    r14 = 1;
    std::sync::mpmc::sync_channel::h330c9ba5da901eb6(&var_1d8);
    int64_t rax_1 = var_1d8;
    int64_t var_200 = rax_1;
    int64_t* var_1f8_1 = var_1d0;
    int64_t var_1c8;
    int64_t var_100_1 = var_1c8;
    int64_t var_1c0;
    int64_t var_f8_1 = var_1c0;
    std::sync::mpmc::sync_channel::hb189ed79e26d1c27(&var_1d8, 2);
    int64_t r13_1 = var_1d8;
    int64_t var_f0_1 = r13_1;
    int64_t* var_e8_1 = var_1d0;
    int64_t var_e0_1 = var_1c8;
    int64_t var_d8_1 = var_1c0;
    r14 = 1;
    int64_t var_d0;
    _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h43265696f2462bc6(
        &var_d0, arg3);
    int64_t* var_118_1 = var_1d0;
    int64_t var_110_1 = var_1c8;
    var_1d8 = var_1c8;
    int64_t var_1d0_1 = var_1c0;
    int64_t* var_1c0_1 = var_1d0;
    void var_1b8;
    memcpy(&var_1b8, &var_d0, 0xa0);
    int64_t var_c0_1 = -0x8000000000000000;
    var_d0 = 0;
    char var_a8_1 = 0;
    int128_t var_278;
    std::thread::Builder::spawn_unchecked::h4b12415a4cf75a6b(&var_278, &var_d0, &var_1d8);
    core::result::Result$LT$T$C$E$GT$::expect::h12022375ebf47b21(&var_d0, &var_278);
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::hf4d447ad143c1ed5(&var_d0);
    int64_t rax_6 = *(arg3 + 0x68);
    int64_t rbx_2 = 0x19000;
    
    if (rax_6 < 0x19000)
        rbx_2 = rax_6;
    
    uu_sort::chunks::RecycledChunk::new::hb2d00041a3f0fa31(&var_1d8, rbx_2);
    std::sync::mpmc::Sender$LT$T$GT$::send::he79bf60cd8708165(&var_d0, rax_1, var_1d0, &var_1d8);
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$uu_sort..chunks..RecycledChunk$GT$$GT$$GT$::hd2fc59df8b1d9cab(&var_d0);
    uu_sort::chunks::RecycledChunk::new::hb2d00041a3f0fa31(&var_1d8, rbx_2);
    std::sync::mpmc::Sender$LT$T$GT$::send::he79bf60cd8708165(&var_d0, rax_1, var_1d0, &var_1d8);
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$uu_sort..chunks..RecycledChunk$GT$$GT$$GT$::hd2fc59df8b1d9cab(&var_d0);
    int128_t* var_298 = nullptr;
    int64_t rdi_14 = var_1c8;
    int64_t var_1f0 = rdi_14;
    int64_t var_1e8_1 = var_1c0;
    int128_t* rbx_3 = nullptr;
    void** const var_258_1 = &data_58c3f8;
    int64_t r15_2 = 0;
    label_4c0b99:
    int128_t* rax_7 = _$LT$std..sync..mpsc..IntoIter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h814ad6d3745a9547(rdi_14);
    
    if (!rax_7)
    {
        core::ptr::drop_in_place$LT$std..sync..mpsc..IntoIter$LT$uu_sort..chunks..Chunk$GT$$GT$::h61517e68e954f560(&var_1f0);
        core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::h7ff86e8d0d3ee6b2(&var_298);
        core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..RecycledChunk$GT$$GT$::h810b5076d75bca91(&var_200);
        return nullptr;
    }
    
    int128_t* var_220 = rax_7;
    r15_2 += 1;
    int128_t* var_1e0 = rbx_3;
    var_298 = nullptr;
    int64_t* rbx_5;
    int128_t* var_218;
    
    if (!rbx_3)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::h7ff86e8d0d3ee6b2(&var_1e0);
        label_4c0c6d:
        int64_t rax_10 = rax_7[2];
        int64_t rcx_7 = *(rax_7 + 0x28);
        var_d0 = rax_10;
        int64_t var_c8_1 = rax_10 + rcx_7 * 0x18;
        var_c0_1 = 0;
        char** rdx_7;
        char rax_12;
        
        do
        {
            void** rax_11;
            rax_11 = _$LT$itertools..tuple_impl..TupleWindows$LT$I$C$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1cd9f19e923758b9(&var_d0);
            
            if (!rax_11)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::h7ff86e8d0d3ee6b2(&var_298);
                var_298 = rax_7;
                rbx_3 = rax_7;
                rdi_14 = var_1c8;
                goto label_4c0b99;
            }
            
            rax_12 =
                uu_sort::compare_by::h7242c39af3d6a804(rax_11, rdx_7, arg3, &rax_7[3], &rax_7[3]);
            r15_2 += 1;
        } while (rax_12 <= r12);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1bb0423170e7fa7c(&var_1d8, arg1, arg2);
        var_218 = var_1d8;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1bb0423170e7fa7c(&var_278, *rdx_7, rdx_7[1]);
        int64_t var_268;
        int64_t var_1b0_1 = var_268;
        var_1c0_1 = var_278;
        int64_t var_1c8_2 = r13_1;
        var_1d8 = var_218;
        int64_t var_1a8_1 = r15_2;
        char var_1a0_1 = *(arg3 + 0x86);
        rbx_5 = alloc::boxed::Box$LT$T$GT$::new::h4da5af3d8a2f6642(&var_1d8);
    }
    else
    {
        var_218 = rbx_3;
        int64_t rax_8 = *(rbx_3 + 0x28);
        
        if (!rax_8)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        void* rdi_17 = rax_8 * 0x18 + rbx_3[2];
        
        if (rdi_17 == 0x18)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        if (!*(rax_7 + 0x28))
        {
            var_258_1 = &data_58c410;
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        char** rbp_2 = rax_7[2];
        
        if (uu_sort::compare_by::h7242c39af3d6a804(rdi_17 - 0x18, rbp_2, arg3, &rbx_3[3], &rax_7[3])
            <= r12)
        {
            uu_sort::chunks::Chunk::recycle::h028cbe8b563e97c5(&var_1d8, rbx_3);
            std::sync::mpmc::Sender$LT$T$GT$::send::he79bf60cd8708165(&var_d0, rax_1, var_1d0, 
                &var_1d8);
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$uu_sort..chunks..RecycledChunk$GT$$GT$$GT$::hd2fc59df8b1d9cab(&var_d0);
            goto label_4c0c6d;
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1bb0423170e7fa7c(&var_1d8, arg1, arg2);
        var_278 = var_1d8;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1bb0423170e7fa7c(&var_d0, *rbp_2, rbp_2[1]);
        int64_t var_1b0_2 = var_c0_1;
        var_1c0_1 = var_d0;
        int64_t var_1c8_3 = r13_1;
        var_1d8 = var_278;
        int64_t var_1a8_2 = r15_2;
        char var_1a0_2 = *(arg3 + 0x86);
        rbx_5 = alloc::boxed::Box$LT$T$GT$::new::h4da5af3d8a2f6642(&var_1d8);
        core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h49f783d79a42b220(&var_218);
    }
    core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h49f783d79a42b220(&var_220);
    core::ptr::drop_in_place$LT$std..sync..mpsc..IntoIter$LT$uu_sort..chunks..Chunk$GT$$GT$::h61517e68e954f560(&var_1f0);
    core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::h7ff86e8d0d3ee6b2(&var_298);
    core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..RecycledChunk$GT$$GT$::h810b5076d75bca91(&var_200);
    return rbx_5;
}
