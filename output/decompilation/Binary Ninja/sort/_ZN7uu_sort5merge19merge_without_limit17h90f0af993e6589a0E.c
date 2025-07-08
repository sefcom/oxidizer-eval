
  int64_t uu_sort::merge::merge_without_limit::h90f0af993e6589a0(int64_t* arg1, int128_t* arg2, void* arg3)

{
    int64_t rbx;
    rbx = 1;
    int128_t* var_2d8 = arg2;
    int128_t var_210;
    std::sync::mpmc::channel::h5ddab1e5e6a1bd36(&var_210);
    int128_t var_318 = var_210;
    int128_t var_200;
    int128_t var_2c8 = var_200;
    int64_t var_2b8;
    core::iter::traits::iterator::Iterator::size_hint::hc920bdbb84672c97(&var_2b8);
    rbx = 1;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h9f8de3280e7f9938(&var_210, var_2b8, 0);
    int64_t rdi_3 = *var_210[8];
    
    if (var_210)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(rdi_3);
        /* no return */
    }
    
    int64_t var_308 = rdi_3;
    int64_t var_300 = var_200;
    int64_t var_2f8 = 0;
    core::iter::traits::iterator::Iterator::size_hint::hc920bdbb84672c97(&var_2b8);
    rbx = 1;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h42915b5ffb9cc436(&var_210, var_2b8, 0);
    int64_t rdi_6 = *var_210[8];
    
    if (var_210)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(rdi_6);
        /* no return */
    }
    
    int64_t var_2f0 = rdi_6;
    int64_t var_2e8 = var_200;
    int64_t var_2e0 = 0;
    int64_t var_f0;
    core::iter::traits::iterator::Iterator::enumerate::h6b14892366491be4(&var_f0, arg2);
    int64_t var_2d0 = -0x7fffffffffffffff;
    int128_t var_338;
    int64_t var_2a8;
    int64_t var_298;
    int128_t var_288;
    int128_t var_278;
    int128_t var_268;
    int128_t var_258;
    int64_t var_248;
    int128_t var_1e8;
    int64_t var_1b8;
    int64_t var_1a8;
    int128_t var_148;
    int64_t result;
    int64_t var_88;
    
    while (true)
    {
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c455ea14e0b8ab9(&var_88, &var_f0);
        int64_t var_80;
        
        if (var_80 == var_2d0)
            break;
        
        int64_t r12_1 = var_88;
        int64_t result_1;
        result = result_1;
        var_148 = var_80;
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&var_210, 2);
        var_338 = var_210;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd9bef9599e472281(&var_2f0, var_200, *var_200[8]);
        int64_t rax_3 = var_148;
        int128_t zmm0_3 = var_148;
        
        if (rax_3 == -0x8000000000000000)
        {
            *(arg1 + 8) = zmm0_3;
            *arg1 = 3;
            core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&var_338);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::h4e2fc01d8e622ffb(&var_f0);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h6707b4dafa67dfe9(&var_2f0);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..CompressedTmpMergeInput$GT$$GT$$GT$$GT$::h2d6b64055ac9a9df(&var_308);
            core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h91a7dc3f5ffa2425(&var_2c8);
            return core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066(&var_318);
        }
        
        int128_t var_40;
        var_1b8 = *var_40[8];
        int128_t var_50;
        int128_t var_1c8_1 = var_50;
        int128_t var_60;
        int128_t var_1d8_1 = var_60;
        int128_t var_130;
        var_1e8 = var_130;
        var_210 = var_338;
        var_200 = rax_3;
        var_200 = zmm0_3;
        int64_t var_1b0_1 = 0;
        var_1a8 = 1;
        int64_t var_1a0_1 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hbd7385c0063bae75(&var_308, &var_210);
        int64_t rcx_2 = uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&var_2b8, 0x2000);
        var_210 = r12_1;
        int64_t var_198_1 = var_248;
        var_1a8 = var_258;
        var_1b8 = var_268;
        int128_t var_1c8_2 = var_278;
        int128_t zmm0_4 = var_2b8;
        int128_t var_1d8_2 = var_288;
        var_1e8 = var_298;
        var_200 = var_2a8;
        var_210 = zmm0_4;
        std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&var_2b8, &var_318, &var_210, 
            rcx_2);
        core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&var_2b8);
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::h4e2fc01d8e622ffb(&var_f0);
    
    if (var_2f8)
    {
        int64_t rbp_1 = 0;
        int64_t rax_5;
        
        do
        {
            rax_5 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(rbp_1);
            int64_t rcx_3 =
                uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&var_2b8, 0x2000);
            var_210 = rbp_1;
            int64_t var_198_2 = var_248;
            var_1a8 = var_258;
            var_1b8 = var_268;
            int128_t var_1c8_3 = var_278;
            int128_t zmm0_5 = var_2b8;
            int128_t var_1d8_3 = var_288;
            var_1e8 = var_298;
            var_200 = var_2a8;
            var_210 = zmm0_5;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&var_2b8, &var_318, &var_210, 
                rcx_3);
            core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&var_2b8);
            rbp_1 = rax_5;
        } while (rax_5 < var_2f8);
    }
    
    _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(
        &var_2b8, arg3);
    var_210 = var_2c8;
    int128_t var_200_1 = var_308;
    int64_t var_1f0_1 = var_2f8;
    memcpy(&var_1e8, &var_2b8, 0xa0);
    int64_t var_2a8_1 = -0x8000000000000000;
    var_2b8 = 0;
    int64_t rbp_2;
    rbp_2 = 1;
    std::thread::Builder::spawn_unchecked::hf926034b83ad36ac(&var_f0, &var_2b8);
    core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&var_148, &var_f0);
    var_88 = 0;
    int64_t var_80_1 = 8;
    int64_t var_78_1 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h198381c625d86b96(&var_2b8, &var_2f0);
    int64_t var_298_1 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&var_f0, &var_2b8);
    int64_t i_1;
    int64_t i = i_1;
    
    if (i != 3)
    {
        do
        {
            int64_t rbp_4 = var_f0;
            var_338 = i;
            int64_t var_e0;
            *var_338[8] = var_e0;
            int64_t rax_11 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(&var_338);
            
            if (!rax_11)
                core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f(&var_338);
            else
            {
                var_210 = 1;
                *var_210[8] = 1;
                var_200_1 = rax_11;
                var_200_1 = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&var_210);
                *var_200_1[8] = 0;
                var_210 = var_338;
                int64_t var_1f0_2 = rbp_4;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc28a32eabbe87ae2(&var_88, &var_210);
            }
            
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&var_f0, &var_2b8);
            i = i_1;
        } while (i != 3);
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::hc305886e897b9a8c(&var_2b8);
    int64_t var_2a8_2 = var_78_1;
    var_2b8 = var_88;
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::hf2caa71b6fc3d8b6(
        &var_210, &var_2b8, arg3, 1);
    int128_t zmm0_8 = var_318;
    *(arg1 + 0x30) = var_148;
    arg1[8] = result;
    *(arg1 + 0x10) = var_210;
    *(arg1 + 0x20) = var_200_1;
    *arg1 = zmm0_8;
    arg1[9] = 0;
    return result;
}
