
  int64_t uu_sort::merge::merge_without_limit::h8c704bfae6c82ba5(int64_t* arg1, int128_t* arg2, void* arg3)

{
    int64_t rbp;
    rbp = 1;
    int128_t* var_290 = arg2;
    int128_t var_1a0;
    std::sync::mpmc::channel::h5ddab1e5e6a1bd36(&var_1a0);
    int128_t var_2d0 = var_1a0;
    int128_t var_190;
    int128_t var_280 = var_190;
    int64_t rbx = *(arg2 + 8);
    int64_t r14 = *(arg2 + 0x18);
    int64_t var_248;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::hf1abf12206d60953(&var_248, rbx, r14);
    rbp = 1;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h9f8de3280e7f9938(&var_1a0, var_248, 0);
    int64_t rdi_3 = *var_1a0[8];
    
    if (var_1a0)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(rdi_3);
        /* no return */
    }
    
    int64_t var_2c0 = rdi_3;
    int64_t var_2b8 = var_190;
    int64_t var_2b0 = 0;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::hf1abf12206d60953(&var_248, rbx, r14);
    rbp = 1;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h42915b5ffb9cc436(&var_1a0, var_248, 0);
    int64_t rdi_6 = *var_1a0[8];
    
    if (var_1a0)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(rdi_6);
        /* no return */
    }
    
    int64_t var_2a8 = rdi_6;
    int64_t var_2a0 = var_190;
    int64_t var_298 = 0;
    int128_t var_270;
    core::iter::traits::iterator::Iterator::enumerate::hbb098ae072900dce(&var_270, arg2);
    int64_t var_288 = -0x7fffffffffffffff;
    int128_t var_2f0;
    int64_t var_238;
    int64_t var_228;
    int128_t var_218;
    int128_t var_208;
    int128_t var_1f8;
    int128_t var_1e8;
    int64_t var_1d8;
    int128_t var_178;
    int64_t var_148;
    int64_t var_138;
    int128_t var_d8;
    int64_t var_c8;
    int64_t var_88;
    int64_t i_1;
    
    while (true)
    {
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h78e7259025d50d0e(&var_88, &var_270);
        
        if (i_1 == var_288)
            break;
        
        int64_t r12_1 = var_88;
        int64_t var_70;
        var_c8 = var_70;
        var_d8 = i_1;
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&var_1a0, 2);
        var_2f0 = var_1a0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd9bef9599e472281(&var_2a8, var_190, *var_190[8]);
        int64_t rax_3 = var_d8;
        int128_t zmm0_3 = var_d8;
        
        if (rax_3 == -0x8000000000000000)
        {
            *(arg1 + 8) = zmm0_3;
            *arg1 = 3;
            core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&var_2f0);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h2d9b5f74f21be7ac(&var_270);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h6707b4dafa67dfe9(&var_2a8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..CompressedTmpMergeInput$GT$$GT$$GT$$GT$::h2d6b64055ac9a9df(&var_2c0);
            core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h91a7dc3f5ffa2425(&var_280);
            return core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066(&var_2d0);
        }
        
        int128_t var_40;
        var_148 = *var_40[8];
        int128_t var_50;
        int128_t var_158_1 = var_50;
        int128_t var_60;
        int128_t var_168_1 = var_60;
        int128_t var_c0;
        var_178 = var_c0;
        var_1a0 = var_2f0;
        var_190 = rax_3;
        var_190 = zmm0_3;
        int64_t var_140_1 = 0;
        var_138 = 1;
        int64_t var_130_1 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hbd7385c0063bae75(&var_2c0, &var_1a0);
        int64_t rcx_2 = uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&var_248, 0x2000);
        var_1a0 = r12_1;
        int64_t var_128_1 = var_1d8;
        var_138 = var_1e8;
        var_148 = var_1f8;
        int128_t var_158_2 = var_208;
        int128_t zmm0_4 = var_248;
        int128_t var_168_2 = var_218;
        var_178 = var_228;
        var_190 = var_238;
        var_1a0 = zmm0_4;
        std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&var_248, &var_2d0, &var_1a0, 
            rcx_2);
        core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&var_248);
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h2d9b5f74f21be7ac(&var_270);
    
    if (var_2b0)
    {
        int64_t rbp_1 = 0;
        int64_t rax_5;
        
        do
        {
            rax_5 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(rbp_1);
            int64_t rcx_3 =
                uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&var_248, 0x2000);
            var_1a0 = rbp_1;
            int64_t var_128_2 = var_1d8;
            var_138 = var_1e8;
            var_148 = var_1f8;
            int128_t var_158_3 = var_208;
            int128_t zmm0_5 = var_248;
            int128_t var_168_3 = var_218;
            var_178 = var_228;
            var_190 = var_238;
            var_1a0 = zmm0_5;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&var_248, &var_2d0, &var_1a0, 
                rcx_3);
            core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&var_248);
            rbp_1 = rax_5;
        } while (rax_5 < var_2b0);
    }
    
    _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(
        &var_248, arg3);
    var_1a0 = var_280;
    int128_t var_190_1 = var_2c0;
    int64_t var_180_1 = var_2b0;
    memcpy(&var_178, &var_248, 0xa0);
    int64_t var_238_1 = -0x8000000000000000;
    var_248 = 0;
    int64_t rbx_2;
    rbx_2 = 1;
    std::thread::Builder::spawn_unchecked::hfc41e77c3832f4c7(&var_88, &var_248);
    core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&var_270, &var_88);
    var_d8 = 0;
    *var_d8[8] = 8;
    var_c8 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h198381c625d86b96(&var_248, &var_2a8);
    int64_t var_228_1 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&var_88, &var_248);
    int64_t i = i_1;
    
    if (i != 3)
    {
        do
        {
            int64_t rbp_5 = var_88;
            var_2f0 = i;
            int64_t var_78;
            *var_2f0[8] = var_78;
            int64_t rax_11 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(&var_2f0);
            
            if (!rax_11)
                core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f(&var_2f0);
            else
            {
                var_1a0 = 1;
                *var_1a0[8] = 1;
                var_190_1 = rax_11;
                var_190_1 = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&var_1a0);
                *var_190_1[8] = 0;
                var_1a0 = var_2f0;
                int64_t var_180_2 = rbp_5;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc28a32eabbe87ae2(&var_d8, &var_1a0);
            }
            
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&var_88, &var_248);
            i = i_1;
        } while (i != 3);
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::hc305886e897b9a8c(&var_248);
    int64_t var_238_2 = var_c8;
    var_248 = var_d8;
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::hf2caa71b6fc3d8b6(
        &var_1a0, &var_248, arg3, 1);
    int128_t zmm0_8 = var_2d0;
    *(arg1 + 0x30) = var_270;
    int64_t result;
    arg1[8] = result;
    *(arg1 + 0x10) = var_1a0;
    *(arg1 + 0x20) = var_190_1;
    *arg1 = zmm0_8;
    arg1[9] = 0;
    return result;
}
