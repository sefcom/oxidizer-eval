
  int64_t* uu_sort::merge::merge_without_limit::h42878b45c516af63(int64_t* arg1, int128_t* arg2, void* arg3)

{
    uint64_t i_2;
    std::sync::mpmc::channel::h23653b051ee49459(&i_2);
    uint64_t i_6 = i_2;
    int64_t* result_2;
    int64_t* result = result_2;
    uint64_t i_10 = i_6;
    int64_t* result_1 = result;
    uint64_t i_5;
    uint64_t i_4 = i_5;
    uint64_t i_11 = i_5;
    int64_t* result_8;
    int64_t* result_3 = result_8;
    int64_t* result_9 = result_8;
    int64_t rbx_1 = *(arg2 + 8);
    int64_t r14 = *(arg2 + 0x18);
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::h39e7b7df2911933c(&i_2, rbx_1, r14);
    int64_t rbp;
    rbp = 1;
    int64_t rax_1;
    int64_t rdx_2;
    rax_1 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::hfd8a024c458e05a7(i_2, 8, 0x78);
    int64_t var_2b8 = rax_1;
    int64_t var_2b0 = rdx_2;
    int64_t var_2a8 = 0;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::h39e7b7df2911933c(&i_2, rbx_1, r14);
    char var_2f1 = 1;
    rbp = 1;
    int64_t rax_2;
    int64_t rdx_4;
    rax_2 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::hfd8a024c458e05a7(i_2, 8, 0x10);
    int64_t var_2a0 = rax_2;
    int64_t var_298 = rdx_4;
    int64_t var_290 = 0;
    int128_t var_108;
    core::iter::traits::iterator::Iterator::enumerate::h6b5309ea41ee41d1(&var_108, arg2);
    int64_t var_278 = -0x7fffffffffffffff;
    uint64_t i_1;
    int128_t var_200;
    uint64_t i_12;
    uint64_t i_3;
    int64_t* result_4;
    int64_t var_d0;
    
    while (true)
    {
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6ae339dbe463d158(&i_12, &var_108);
        
        if (i_3 == var_278)
            break;
        
        uint64_t i_7 = i_12;
        std::sync::mpmc::sync_channel::hb189ed79e26d1c27(&i_2, 2);
        uint64_t i_9 = i_2;
        int64_t* result_5 = result_2;
        i_1 = i_9;
        int64_t* result_6 = result_5;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h201a3de33b24f801(&var_2a0, i_5, result_8);
        int64_t var_148;
        
        if (i_3 == -0x8000000000000000)
        {
            arg1[1] = result_4;
            arg1[2] = var_148;
            *arg1 = 3;
            core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h11dcc279d58efe5d(&i_1);
            int64_t* rbx_3;
            rbx_3 = 1;
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h68222a5a85c081c0(&var_108);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h800b8e41f5635b1c(&var_2a0);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..CompressedTmpMergeInput$GT$$GT$$GT$$GT$::h5ead729a5d9da4e6(&var_2b8);
            core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h8226a8f17c574481(&i_11);
            return core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::hc042c6d348025020(&i_10);
        }
        
        int64_t var_110;
        int64_t var_1d0_1 = var_110;
        int128_t var_120;
        int128_t var_1e0_1 = var_120;
        int128_t var_130;
        int128_t var_1f0_1 = var_130;
        int128_t var_140;
        var_200 = var_140;
        i_2 = i_9;
        result_2 = result_5;
        i_5 = i_3;
        result_8 = result_4;
        int64_t var_208_1 = var_148;
        int64_t var_1c8_1 = 0;
        int64_t var_1c0_1 = 1;
        int64_t var_1b8_1 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h8111662257f0ee55(&var_2b8, &i_2);
        uu_sort::chunks::RecycledChunk::new::hb2d00041a3f0fa31(&var_d0, 0x2000);
        i_2 = i_7;
        memcpy(&result_2, &var_d0, 0x90);
        std::sync::mpmc::Sender$LT$T$GT$::send::h3b2f74fb04f1ee0c(&var_d0, i_6, result, &i_2);
        core::result::Result$LT$T$C$E$GT$::unwrap::h251beb4d5478fb09(&var_d0);
    }
    
    int64_t* rbx_2;
    rbx_2 = 1;
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h68222a5a85c081c0(&var_108);
    
    if (var_2a8)
    {
        uint64_t i_8 = 0;
        
        do
        {
            uu_sort::chunks::RecycledChunk::new::hb2d00041a3f0fa31(&var_d0, 0x2000);
            i_2 = i_8;
            memcpy(&result_2, &var_d0, 0x90);
            std::sync::mpmc::Sender$LT$T$GT$::send::h3b2f74fb04f1ee0c(&var_d0, i_6, result, &i_2);
            core::result::Result$LT$T$C$E$GT$::unwrap::h251beb4d5478fb09(&var_d0);
            i_8 += 1;
        } while (var_2a8 != i_8);
    }
    
    rbx_2 = 1;
    _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h43265696f2462bc6(
        &var_d0, arg3);
    i_2 = i_4;
    result_2 = result_3;
    i_5 = var_2b8;
    int64_t var_208_2 = var_2a8;
    memcpy(&var_200, &var_d0, 0xa0);
    int64_t var_c0_1 = -0x8000000000000000;
    var_d0 = 0;
    char var_a8_1 = 0;
    std::thread::Builder::spawn_unchecked::hcad965377b0ba44f(&i_12, &var_d0, &i_2);
    core::result::Result$LT$T$C$E$GT$::expect::h12022375ebf47b21(&var_108, &i_12);
    int64_t var_248 = 0;
    int64_t var_240_1 = 8;
    int64_t var_238_1 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h162218b9ede24dc7(&var_d0, &var_2a0);
    int64_t var_b0_1 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2dd4f5ee12df4679(&i_12, &var_d0);
    uint64_t i = i_3;
    
    if (i != 3)
    {
        do
        {
            uint64_t i_13 = i_12;
            i_1 = i;
            int64_t* result_7 = result_4;
            int64_t rax_13 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h60814cb01a26dc76(i);
            int64_t var_230 = rax_13;
            
            if (!rax_13)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::h7ff86e8d0d3ee6b2(&var_230);
                core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::h46cfb158905bad70(&i_1);
            }
            else
            {
                i_2 = 1;
                result_2 = 1;
                int64_t var_218 = rax_13;
                i_5 = alloc::boxed::Box$LT$T$GT$::new::h380512f813d0cda3(&i_2);
                int64_t var_210 = 0;
                i_2 = i;
                result_2 = result_4;
                uint64_t i_14 = i_13;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h8e51dcbac507e55a(&var_248, &i_2);
            }
            
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2dd4f5ee12df4679(&i_12, &var_d0);
            i = i_3;
        } while (i != 3);
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::h8bcba2f41827e630(&var_d0);
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::h24b3bd304cf4e3d6(
        &i_2, &var_248, arg3);
    int64_t var_f8;
    arg1[8] = var_f8;
    *(arg1 + 0x30) = var_108;
    *(arg1 + 0x10) = i_2;
    *(arg1 + 0x20) = i_5;
    *arg1 = i_6;
    arg1[1] = result;
    arg1[9] = 0;
    return result;
}
