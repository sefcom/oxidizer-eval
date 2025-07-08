
  int64_t uu_sort::merge::merge_without_limit::h7e976ef640532e43(int64_t* arg1, int128_t* arg2, void* arg3)

{
    int64_t rbx;
    rbx = 1;
    int128_t* var_1b8 = arg2;
    int128_t var_1a0;
    std::sync::mpmc::channel::h5ddab1e5e6a1bd36(&var_1a0);
    int128_t var_250 = var_1a0;
    int128_t var_190;
    int128_t var_1b0 = var_190;
    int64_t var_d8;
    core::iter::traits::iterator::Iterator::size_hint::h696b96077833da96(&var_d8);
    rbx = 1;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h518af1d201706e3d(&var_1a0, var_d8, 0);
    int64_t rdi_3 = *var_1a0[8];
    
    if (var_1a0)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(rdi_3);
        /* no return */
    }
    
    int64_t var_240 = rdi_3;
    int64_t var_238 = var_190;
    int64_t var_230 = 0;
    core::iter::traits::iterator::Iterator::size_hint::h696b96077833da96(&var_d8);
    rbx = 1;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h42915b5ffb9cc436(&var_1a0, var_d8, 0);
    int64_t rdi_6 = *var_1a0[8];
    
    if (var_1a0)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(rdi_6);
        /* no return */
    }
    
    int64_t var_200 = rdi_6;
    int64_t var_1f8 = var_190;
    int64_t var_1f0 = 0;
    int64_t var_1e8;
    core::iter::traits::iterator::Iterator::enumerate::hf7aa1a58076079fe(&var_1e8, arg2);
    int64_t var_280;
    int128_t var_228;
    int64_t var_178;
    int64_t var_c8;
    int64_t var_b8;
    int128_t var_a8;
    int128_t var_98;
    int128_t var_88;
    int128_t var_78;
    int64_t var_68;
    
    while (true)
    {
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbf953a0acfae760b(&var_280, &var_1e8);
        int64_t var_278;
        
        if (var_278 == 2)
            break;
        
        int64_t r12_1 = var_280;
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&var_1a0, 2);
        var_228 = var_1a0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd9bef9599e472281(&var_200, var_190, *var_190[8]);
        int64_t var_270;
        int64_t var_268;
        
        if (var_278)
        {
            arg1[1] = var_270;
            arg1[2] = var_268;
            *arg1 = 3;
            core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&var_228);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h934af70cdb3bb56e(&var_1e8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h6707b4dafa67dfe9(&var_200);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..PlainMergeInput$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$::h7da5697cc958b506(&var_240);
            core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h91a7dc3f5ffa2425(&var_1b0);
            return core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066(&var_250);
        }
        
        var_1a0 = var_228;
        var_190 = 0;
        *var_190[8] = 1;
        int64_t var_180_1 = 0;
        var_178 = var_270;
        int64_t var_170_1 = var_268;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h0518107e2aaed03f(&var_240, &var_1a0);
        int64_t rcx_1 = uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&var_d8, 0x2000);
        var_1a0 = r12_1;
        int64_t var_128_1 = var_68;
        int128_t var_138_1 = var_78;
        int128_t var_148_1 = var_88;
        int128_t var_158_1 = var_98;
        int128_t var_168_1 = var_a8;
        var_178 = var_b8;
        var_190 = var_c8;
        var_1a0 = var_d8;
        std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&var_d8, &var_250, &var_1a0, 
            rcx_1);
        core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&var_d8);
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h934af70cdb3bb56e(&var_1e8);
    
    if (var_230)
    {
        int64_t rbp_3 = 0;
        int64_t rax_3;
        
        do
        {
            rax_3 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(rbp_3);
            int64_t rcx_2 = uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&var_d8, 0x2000);
            var_1a0 = rbp_3;
            int64_t var_128_2 = var_68;
            int128_t var_138_2 = var_78;
            int128_t var_148_2 = var_88;
            int128_t var_158_2 = var_98;
            int128_t var_168_2 = var_a8;
            var_178 = var_b8;
            var_190 = var_c8;
            var_1a0 = var_d8;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&var_d8, &var_250, &var_1a0, 
                rcx_2);
            core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&var_d8);
            rbp_3 = rax_3;
        } while (rax_3 < var_230);
    }
    
    _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(
        &var_d8, arg3);
    var_1a0 = var_1b0;
    int128_t var_190_1 = var_240;
    int64_t var_180_2 = var_230;
    memcpy(&var_178, &var_d8, 0xa0);
    int64_t var_c8_1 = -0x8000000000000000;
    var_d8 = 0;
    int64_t rbp_4;
    rbp_4 = 1;
    std::thread::Builder::spawn_unchecked::h3b01fcfabb9c426f(&var_1e8, &var_d8);
    core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&var_228, &var_1e8);
    var_280 = 0;
    int64_t var_278_1 = 8;
    int64_t var_270_1 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h198381c625d86b96(&var_d8, &var_200);
    int64_t var_b8_1 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&var_1e8, &var_d8);
    int64_t i_2;
    int64_t i = i_2;
    
    if (i != 3)
    {
        do
        {
            int64_t rbp_6 = var_1e8;
            int64_t i_1 = i;
            int64_t var_1d8;
            int64_t var_208_1 = var_1d8;
            int64_t rax_9 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(&i_1);
            
            if (!rax_9)
                core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f(&i_1);
            else
            {
                var_1a0 = 1;
                *var_1a0[8] = 1;
                var_190_1 = rax_9;
                var_190_1 = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&var_1a0);
                *var_190_1[8] = 0;
                var_1a0 = i_1;
                int64_t var_180_3 = rbp_6;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc28a32eabbe87ae2(&var_280, &var_1a0);
            }
            
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&var_1e8, &var_d8);
            i = i_2;
        } while (i != 3);
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::hc305886e897b9a8c(&var_d8);
    int64_t var_c8_2 = var_270_1;
    var_d8 = var_280;
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::hf2caa71b6fc3d8b6(
        &var_1a0, &var_d8, arg3, 1);
    int128_t zmm0_7 = var_250;
    *(arg1 + 0x30) = var_228;
    int64_t result;
    arg1[8] = result;
    *(arg1 + 0x10) = var_1a0;
    *(arg1 + 0x20) = var_190_1;
    *arg1 = zmm0_7;
    arg1[9] = 0;
    return result;
}
