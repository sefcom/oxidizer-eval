
  fn uu_sort::merge::merge_without_limit::h8c704bfae6c82ba5(arg1: *mut i64, arg2: *mut i128, arg3: *mut c_void) -> i64

{
    let mut rbp: i64;
    rbp = 1;
    let var_290: *mut i128 = arg2;
    let mut var_1a0: i128;
    std::sync::mpmc::channel::h5ddab1e5e6a1bd36(&var_1a0);
    let mut var_2d0: i128 = var_1a0;
    let mut var_190: i128;
    let mut var_280: i128 = var_190;
    let rbx: i64 = *arg2.byte_offset(8);
    let r14: i64 = *arg2.byte_offset(0x18);
    let mut var_248: i64;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::hf1abf12206d60953(&var_248, rbx, r14);
    rbp = 1;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h9f8de3280e7f9938(&var_1a0, var_248, 0);
    let rdi_3: i64 = *var_1a0[8];
    
    if var_1a0 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(rdi_3);
        /* no return */
    }
    
    let mut var_2c0: i64 = rdi_3;
    let var_2b8: i64 = var_190;
    let var_2b0: i64 = 0;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::hf1abf12206d60953(&var_248, rbx, r14);
    rbp = 1;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h42915b5ffb9cc436(&var_1a0, var_248, 0);
    let rdi_6: i64 = *var_1a0[8];
    
    if var_1a0 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(rdi_6);
        /* no return */
    }
    
    let mut var_2a8: i64 = rdi_6;
    let var_2a0: i64 = var_190;
    let var_298: i64 = 0;
    let mut var_270: i128;
    core::iter::traits::iterator::Iterator::enumerate::hbb098ae072900dce(&var_270, arg2);
    let var_288: i64 = -0x7fffffffffffffff;
    let mut var_2f0: i128;
    let var_238: i64;
    let var_228: i64;
    let var_218: i128;
    let var_208: i128;
    let var_1f8: i128;
    let var_1e8: i128;
    let var_1d8: i64;
    let mut var_178: i128;
    let mut var_148: i64;
    let mut var_138: i64;
    let mut var_d8: i128;
    let mut var_c8: i64;
    let mut var_88: i64;
    let i_1: i64;
    
    loop
    {
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h78e7259025d50d0e(&var_88, &var_270);
        
        if i_1 == var_288
        {
            break;
        }
        
        let r12_1: i64 = var_88;
        let var_70: i64;
        var_c8 = var_70;
        var_d8 = i_1;
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&var_1a0, 2);
        var_2f0 = var_1a0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd9bef9599e472281(&var_2a8, var_190, *var_190[8]);
        let rax_3: i64 = var_d8;
        let zmm0_3: i128 = var_d8;
        
        if rax_3 == -0x8000000000000000
        {
            *arg1.byte_offset(8) = zmm0_3;
            *arg1 = 3;
            core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&var_2f0);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h2d9b5f74f21be7ac(&var_270);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h6707b4dafa67dfe9(&var_2a8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..CompressedTmpMergeInput$GT$$GT$$GT$$GT$::h2d6b64055ac9a9df(&var_2c0);
            core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h91a7dc3f5ffa2425(&var_280);
            return core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066(&var_2d0);
        }
        
        let var_40: i128;
        var_148 = *var_40[8];
        let var_50: i128;
        let var_158_1: i128 = var_50;
        let var_60: i128;
        let var_168_1: i128 = var_60;
        let var_c0: i128;
        var_178 = var_c0;
        var_1a0 = var_2f0;
        var_190 = rax_3;
        var_190 = zmm0_3;
        let var_140_1: i64 = 0;
        var_138 = 1;
        let var_130_1: i64 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hbd7385c0063bae75(&var_2c0, &var_1a0);
        let rcx_2: i64 = uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&var_248, 0x2000);
        var_1a0 = r12_1;
        let var_128_1: i64 = var_1d8;
        var_138 = var_1e8;
        var_148 = var_1f8;
        let var_158_2: i128 = var_208;
        let zmm0_4: i128 = var_248;
        let var_168_2: i128 = var_218;
        var_178 = var_228;
        var_190 = var_238;
        var_1a0 = zmm0_4;
        std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&var_248, &var_2d0, &var_1a0, 
            rcx_2);
        core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&var_248);
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h2d9b5f74f21be7ac(&var_270);
    
    if var_2b0 != 0
    {
        let mut rbp_1: i64 = 0;
        let mut rax_5: i64;
        
        do
        {
            rax_5 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(rbp_1);
            let rcx_3: i64 =
                uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&var_248, 0x2000);
            var_1a0 = rbp_1;
            let var_128_2: i64 = var_1d8;
            var_138 = var_1e8;
            var_148 = var_1f8;
            let var_158_3: i128 = var_208;
            let zmm0_5: i128 = var_248;
            let var_168_3: i128 = var_218;
            var_178 = var_228;
            var_190 = var_238;
            var_1a0 = zmm0_5;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&var_248, &var_2d0, &var_1a0, 
                rcx_3);
            core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&var_248);
            rbp_1 = rax_5;
        } while rax_5 < var_2b0;
    }
    
    _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(
        &var_248, arg3);
    var_1a0 = var_280;
    let mut var_190_1: i128 = var_2c0;
    let var_180_1: i64 = var_2b0;
    memcpy(&var_178, &var_248, 0xa0);
    let var_238_1: i64 = -0x8000000000000000;
    var_248 = 0;
    let mut rbx_2: i64;
    rbx_2 = 1;
    std::thread::Builder::spawn_unchecked::hfc41e77c3832f4c7(&var_88, &var_248);
    core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&var_270, &var_88);
    var_d8 = 0;
    *var_d8[8] = 8;
    var_c8 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h198381c625d86b96(&var_248, &var_2a8);
    let var_228_1: i64 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&var_88, &var_248);
    let mut i: i64 = i_1;
    
    if i != 3
    {
        do
        {
            let rbp_5: i64 = var_88;
            var_2f0 = i;
            let var_78: i64;
            *var_2f0[8] = var_78;
            let rax_11: i64 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(&var_2f0);
            
            if rax_11 == 0
            {
                core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f(&var_2f0);
            }
            else
            {
                var_1a0 = 1;
                *var_1a0[8] = 1;
                var_190_1 = rax_11;
                var_190_1 = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&var_1a0);
                *var_190_1[8] = 0;
                var_1a0 = var_2f0;
                let var_180_2: i64 = rbp_5;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc28a32eabbe87ae2(&var_d8, &var_1a0);
            }
            
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&var_88, &var_248);
            i = i_1;
        } while i != 3;
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::hc305886e897b9a8c(&var_248);
    let var_238_2: i64 = var_c8;
    var_248 = var_d8;
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::hf2caa71b6fc3d8b6(
        &var_1a0, &var_248, arg3, 1);
    let zmm0_8: i128 = var_2d0;
    *arg1.byte_offset(0x30) = var_270;
    let result: i64;
    arg1[8] = result;
    *arg1.byte_offset(0x10) = var_1a0;
    *arg1.byte_offset(0x20) = var_190_1;
    *arg1 = zmm0_8;
    arg1[9] = 0;
    result
}
