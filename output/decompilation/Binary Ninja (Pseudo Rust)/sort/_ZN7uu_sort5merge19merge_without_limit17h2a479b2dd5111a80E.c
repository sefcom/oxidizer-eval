
  fn uu_sort::merge::merge_without_limit::h2a479b2dd5111a80(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut c_void) -> i64

{
    let mut var_1a0: i128;
    std::sync::mpmc::channel::h5ddab1e5e6a1bd36(&var_1a0);
    let mut var_230: i128 = var_1a0;
    let mut var_190: i128;
    let mut var_1b0: i128 = var_190;
    let mut var_d8: i64;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::h4bc4ad31aabd6369(&var_d8, arg2, arg3);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h518af1d201706e3d(&var_1a0, var_d8, 0);
    let rdi_3: i64 = *var_1a0[8];
    
    if var_1a0 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(rdi_3);
        /* no return */
    }
    
    let mut var_220: i64 = rdi_3;
    let var_218: i64 = var_190;
    let var_210: i64 = 0;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::h4bc4ad31aabd6369(&var_d8, arg2, arg3);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h42915b5ffb9cc436(&var_1a0, var_d8, 0);
    let rdi_6: i64 = *var_1a0[8];
    
    if var_1a0 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(rdi_6);
        /* no return */
    }
    
    let mut var_1c8: i64 = rdi_6;
    let var_1c0: i64 = var_190;
    let var_1b8: i64 = 0;
    let mut var_208: i64;
    core::iter::traits::iterator::Iterator::enumerate::h6ac0e6a3d87da25f(&var_208, arg2, arg3);
    let mut var_260: i64;
    let i_1: i64;
    let var_250: i64;
    let mut var_1f0: i128;
    let mut var_178: i64;
    let var_c8: i64;
    let var_b8: i64;
    let var_a8: i128;
    let var_98: i128;
    let var_88: i128;
    let var_78: i128;
    let var_68: i64;
    
    loop
    {
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h11156b527aa8346d(&var_260, &var_208);
        
        if i_1 == 2
        {
            break;
        }
        
        let r14_1: i64 = var_260;
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&var_1a0, 2);
        var_1f0 = var_1a0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd9bef9599e472281(&var_1c8, var_190, *var_190[8]);
        let var_248: i64;
        
        if i_1 != 0
        {
            arg1[1] = var_250;
            arg1[2] = var_248;
            *arg1 = 3;
            core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&var_1f0);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h6707b4dafa67dfe9(&var_1c8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..PlainMergeInput$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$::h7da5697cc958b506(&var_220);
            core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h91a7dc3f5ffa2425(&var_1b0);
            return core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066(&var_230);
        }
        
        var_1a0 = var_1f0;
        var_190 = 0;
        *var_190[8] = 1;
        let var_180_1: i64 = 0;
        var_178 = var_250;
        let var_170_1: i64 = var_248;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h0518107e2aaed03f(&var_220, &var_1a0);
        let rcx: i64 = uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&var_d8, 0x2000);
        var_1a0 = r14_1;
        let var_128_1: i64 = var_68;
        let var_138_1: i128 = var_78;
        let var_148_1: i128 = var_88;
        let var_158_1: i128 = var_98;
        let var_168_1: i128 = var_a8;
        var_178 = var_b8;
        var_190 = var_c8;
        var_1a0 = var_d8;
        std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&var_d8, &var_230, &var_1a0, rcx);
        core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&var_d8);
    }
    
    if var_210 != 0
    {
        let mut rbp_2: i64 = 0;
        let mut rax_3: i64;
        
        do
        {
            rax_3 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(rbp_2);
            let rcx_1: i64 =
                uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&var_d8, 0x2000);
            var_1a0 = rbp_2;
            let var_128_2: i64 = var_68;
            let var_138_2: i128 = var_78;
            let var_148_2: i128 = var_88;
            let var_158_2: i128 = var_98;
            let var_168_2: i128 = var_a8;
            var_178 = var_b8;
            var_190 = var_c8;
            var_1a0 = var_d8;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&var_d8, &var_230, &var_1a0, 
                rcx_1);
            core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&var_d8);
            rbp_2 = rax_3;
        } while rax_3 < var_210;
    }
    
    _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(
        &var_d8, arg4);
    var_1a0 = var_1b0;
    let mut var_190_1: i128 = var_220;
    let var_180_2: i64 = var_210;
    memcpy(&var_178, &var_d8, 0xa0);
    let var_c8_1: i64 = -0x8000000000000000;
    var_d8 = 0;
    let mut rbp_3: i64;
    rbp_3 = 1;
    std::thread::Builder::spawn_unchecked::h37331e2a693fd9a0(&var_260, &var_d8);
    core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&var_1f0, &var_260);
    var_208 = 0;
    let var_200_1: i64 = 8;
    let var_1f8_1: i64 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h198381c625d86b96(&var_d8, &var_1c8);
    let var_b8_1: i64 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&var_260, &var_d8);
    let mut i: i64 = i_1;
    
    if i != 3
    {
        do
        {
            let rbp_4: i64 = var_260;
            let mut i_2: i64 = i;
            let var_1d0_1: i64 = var_250;
            let rax_9: i64 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(&i_2);
            
            if rax_9 == 0
            {
                core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f(&i_2);
            }
            else
            {
                var_1a0 = 1;
                *var_1a0[8] = 1;
                var_190_1 = rax_9;
                var_190_1 = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&var_1a0);
                *var_190_1[8] = 0;
                var_1a0 = i_2;
                let var_180_3: i64 = rbp_4;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc28a32eabbe87ae2(&var_208, &var_1a0);
            }
            
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&var_260, &var_d8);
            i = i_1;
        } while i != 3;
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::hc305886e897b9a8c(&var_d8);
    let var_c8_2: i64 = var_1f8_1;
    var_d8 = var_208;
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::hf2caa71b6fc3d8b6(
        &var_1a0, &var_d8, arg4, 1);
    let zmm0_7: i128 = var_230;
    *arg1.byte_offset(0x30) = var_1f0;
    let result: i64;
    arg1[8] = result;
    *arg1.byte_offset(0x10) = var_1a0;
    *arg1.byte_offset(0x20) = var_190_1;
    *arg1 = zmm0_7;
    arg1[9] = 0;
    result
}
