
  fn uu_sort::merge::merge_without_limit::h3f51658ed9f64253(arg1: *mut i64, arg2: *mut i128, arg3: *mut c_void) -> i64

{
    let mut rbp: i64;
    rbp = 1;
    let var_2a8: *mut i128 = arg2;
    let mut var_1e0: i128;
    std::sync::mpmc::channel::h5ddab1e5e6a1bd36(&var_1e0);
    let mut var_2e8: i128 = var_1e0;
    let mut var_1d0: i128;
    let mut var_298: i128 = var_1d0;
    let rbx: i64 = *arg2.byte_offset(8);
    let r14: i64 = *arg2.byte_offset(0x18);
    let mut var_288: i64;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::h7b20c5f54fb69ecf(&var_288, rbx, r14);
    rbp = 1;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h9f8de3280e7f9938(&var_1e0, var_288, 0);
    let rdi_3: i64 = *var_1e0[8];
    
    if var_1e0 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(rdi_3);
        /* no return */
    }
    
    let mut var_2d8: i64 = rdi_3;
    let var_2d0: i64 = var_1d0;
    let var_2c8: i64 = 0;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::h7b20c5f54fb69ecf(&var_288, rbx, r14);
    rbp = 1;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h42915b5ffb9cc436(&var_1e0, var_288, 0);
    let rdi_6: i64 = *var_1e0[8];
    
    if var_1e0 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(rdi_6);
        /* no return */
    }
    
    let mut var_2c0: i64 = rdi_6;
    let var_2b8: i64 = var_1d0;
    let var_2b0: i64 = 0;
    let mut var_c0: i128;
    core::iter::traits::iterator::Iterator::enumerate::h1228247505420bdd(&var_c0, arg2);
    let var_2a0: i64 = -0x7fffffffffffffff;
    let mut var_308: i128;
    let var_278: i64;
    let var_268: i64;
    let var_258: i128;
    let var_248: i128;
    let var_238: i128;
    let var_228: i128;
    let var_218: i64;
    let mut var_1b8: i128;
    let mut var_188: i64;
    let mut var_178: i64;
    let mut var_118: i128;
    let mut var_108: i64;
    let mut var_88: i64;
    let i_1: i64;
    
    loop
    {
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf119c123769f4d04(&var_88, &var_c0);
        
        if i_1 == var_2a0
        {
            break;
        }
        
        let r12_1: i64 = var_88;
        let var_70: i64;
        var_108 = var_70;
        var_118 = i_1;
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&var_1e0, 2);
        var_308 = var_1e0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd9bef9599e472281(&var_2c0, var_1d0, *var_1d0[8]);
        let rax_3: i64 = var_118;
        let zmm0_3: i128 = var_118;
        
        if rax_3 == -0x8000000000000000
        {
            *arg1.byte_offset(8) = zmm0_3;
            *arg1 = 3;
            core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&var_308);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h18fd41d9722d8243(&var_c0);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h6707b4dafa67dfe9(&var_2c0);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..CompressedTmpMergeInput$GT$$GT$$GT$$GT$::h2d6b64055ac9a9df(&var_2d8);
            core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h91a7dc3f5ffa2425(&var_298);
            return core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066(&var_2e8);
        }
        
        let var_40: i128;
        var_188 = *var_40[8];
        let var_50: i128;
        let var_198_1: i128 = var_50;
        let var_60: i128;
        let var_1a8_1: i128 = var_60;
        let var_100: i128;
        var_1b8 = var_100;
        var_1e0 = var_308;
        var_1d0 = rax_3;
        var_1d0 = zmm0_3;
        let var_180_1: i64 = 0;
        var_178 = 1;
        let var_170_1: i64 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hbd7385c0063bae75(&var_2d8, &var_1e0);
        let rcx_2: i64 = uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&var_288, 0x2000);
        var_1e0 = r12_1;
        let var_168_1: i64 = var_218;
        var_178 = var_228;
        var_188 = var_238;
        let var_198_2: i128 = var_248;
        let zmm0_4: i128 = var_288;
        let var_1a8_2: i128 = var_258;
        var_1b8 = var_268;
        var_1d0 = var_278;
        var_1e0 = zmm0_4;
        std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&var_288, &var_2e8, &var_1e0, 
            rcx_2);
        core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&var_288);
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h18fd41d9722d8243(&var_c0);
    
    if var_2c8 != 0
    {
        let mut rbp_1: i64 = 0;
        let mut rax_5: i64;
        
        do
        {
            rax_5 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(rbp_1);
            let rcx_3: i64 =
                uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&var_288, 0x2000);
            var_1e0 = rbp_1;
            let var_168_2: i64 = var_218;
            var_178 = var_228;
            var_188 = var_238;
            let var_198_3: i128 = var_248;
            let zmm0_5: i128 = var_288;
            let var_1a8_3: i128 = var_258;
            var_1b8 = var_268;
            var_1d0 = var_278;
            var_1e0 = zmm0_5;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&var_288, &var_2e8, &var_1e0, 
                rcx_3);
            core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&var_288);
            rbp_1 = rax_5;
        } while rax_5 < var_2c8;
    }
    
    _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(
        &var_288, arg3);
    var_1e0 = var_298;
    let mut var_1d0_1: i128 = var_2d8;
    let var_1c0_1: i64 = var_2c8;
    memcpy(&var_1b8, &var_288, 0xa0);
    let var_278_1: i64 = -0x8000000000000000;
    var_288 = 0;
    let mut rbx_2: i64;
    rbx_2 = 1;
    std::thread::Builder::spawn_unchecked::h85f432c29e7d33dc(&var_88, &var_288);
    core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&var_c0, &var_88);
    var_118 = 0;
    *var_118[8] = 8;
    var_108 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h198381c625d86b96(&var_288, &var_2c0);
    let var_268_1: i64 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&var_88, &var_288);
    let mut i: i64 = i_1;
    
    if i != 3
    {
        do
        {
            let rbp_5: i64 = var_88;
            var_308 = i;
            let var_78: i64;
            *var_308[8] = var_78;
            let rax_11: i64 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(&var_308);
            
            if rax_11 == 0
            {
                core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f(&var_308);
            }
            else
            {
                var_1e0 = 1;
                *var_1e0[8] = 1;
                var_1d0_1 = rax_11;
                var_1d0_1 = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&var_1e0);
                *var_1d0_1[8] = 0;
                var_1e0 = var_308;
                let var_1c0_2: i64 = rbp_5;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc28a32eabbe87ae2(&var_118, &var_1e0);
            }
            
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&var_88, &var_288);
            i = i_1;
        } while i != 3;
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::hc305886e897b9a8c(&var_288);
    let var_278_2: i64 = var_108;
    var_288 = var_118;
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::hf2caa71b6fc3d8b6(
        &var_1e0, &var_288, arg3, 1);
    let zmm0_8: i128 = var_2e8;
    *arg1.byte_offset(0x30) = var_c0;
    let result: i64;
    arg1[8] = result;
    *arg1.byte_offset(0x10) = var_1e0;
    *arg1.byte_offset(0x20) = var_1d0_1;
    *arg1 = zmm0_8;
    arg1[9] = 0;
    result
}
