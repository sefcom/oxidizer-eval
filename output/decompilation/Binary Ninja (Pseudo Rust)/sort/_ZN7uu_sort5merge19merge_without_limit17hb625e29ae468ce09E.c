
  fn uu_sort::merge::merge_without_limit::hb625e29ae468ce09(arg1: *mut i64, arg2: *mut i128, arg3: *mut c_void) -> i64

{
    let mut rbx: i64;
    rbx = 1;
    let var_2d8: *mut i128 = arg2;
    let mut var_210: i128;
    std::sync::mpmc::channel::h5ddab1e5e6a1bd36(&var_210);
    let mut var_318: i128 = var_210;
    let mut var_200: i128;
    let mut var_2c8: i128 = var_200;
    let mut var_2b8: i64;
    core::iter::traits::iterator::Iterator::size_hint::hc5375b5a717271de(&var_2b8);
    rbx = 1;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h9f8de3280e7f9938(&var_210, var_2b8, 0);
    let rdi_3: i64 = *var_210[8];
    
    if var_210 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(rdi_3);
        /* no return */
    }
    
    let mut var_308: i64 = rdi_3;
    let var_300: i64 = var_200;
    let var_2f8: i64 = 0;
    core::iter::traits::iterator::Iterator::size_hint::hc5375b5a717271de(&var_2b8);
    rbx = 1;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h42915b5ffb9cc436(&var_210, var_2b8, 0);
    let rdi_6: i64 = *var_210[8];
    
    if var_210 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(rdi_6);
        /* no return */
    }
    
    let mut var_2f0: i64 = rdi_6;
    let var_2e8: i64 = var_200;
    let var_2e0: i64 = 0;
    let mut var_f0: i64;
    core::iter::traits::iterator::Iterator::enumerate::h3979d50f35976674(&var_f0, arg2);
    let var_2d0: i64 = -0x7fffffffffffffff;
    let mut var_338: i128;
    let var_2a8: i64;
    let var_298: i64;
    let var_288: i128;
    let var_278: i128;
    let var_268: i128;
    let var_258: i128;
    let var_248: i64;
    let mut var_1e8: i128;
    let mut var_1b8: i64;
    let mut var_1a8: i64;
    let mut var_148: i128;
    let mut result: i64;
    let mut var_88: i64;
    
    loop
    {
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7bd62f8297192e3(&var_88, &var_f0);
        let var_80: i64;
        
        if var_80 == var_2d0
        {
            break;
        }
        
        let r12_1: i64 = var_88;
        let result_1: i64;
        result = result_1;
        var_148 = var_80;
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&var_210, 2);
        var_338 = var_210;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd9bef9599e472281(&var_2f0, var_200, *var_200[8]);
        let rax_3: i64 = var_148;
        let zmm0_3: i128 = var_148;
        
        if rax_3 == -0x8000000000000000
        {
            *arg1.byte_offset(8) = zmm0_3;
            *arg1 = 3;
            core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&var_338);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::he06ddb1f55f7d2d4(&var_f0);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h6707b4dafa67dfe9(&var_2f0);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..CompressedTmpMergeInput$GT$$GT$$GT$$GT$::h2d6b64055ac9a9df(&var_308);
            core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h91a7dc3f5ffa2425(&var_2c8);
            return core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066(&var_318);
        }
        
        let var_40: i128;
        var_1b8 = *var_40[8];
        let var_50: i128;
        let var_1c8_1: i128 = var_50;
        let var_60: i128;
        let var_1d8_1: i128 = var_60;
        let var_130: i128;
        var_1e8 = var_130;
        var_210 = var_338;
        var_200 = rax_3;
        var_200 = zmm0_3;
        let var_1b0_1: i64 = 0;
        var_1a8 = 1;
        let var_1a0_1: i64 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hbd7385c0063bae75(&var_308, &var_210);
        let rcx_2: i64 = uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&var_2b8, 0x2000);
        var_210 = r12_1;
        let var_198_1: i64 = var_248;
        var_1a8 = var_258;
        var_1b8 = var_268;
        let var_1c8_2: i128 = var_278;
        let zmm0_4: i128 = var_2b8;
        let var_1d8_2: i128 = var_288;
        var_1e8 = var_298;
        var_200 = var_2a8;
        var_210 = zmm0_4;
        std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&var_2b8, &var_318, &var_210, 
            rcx_2);
        core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&var_2b8);
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::he06ddb1f55f7d2d4(&var_f0);
    
    if var_2f8 != 0
    {
        let mut rbp_1: i64 = 0;
        let mut rax_5: i64;
        
        do
        {
            rax_5 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(rbp_1);
            let rcx_3: i64 =
                uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&var_2b8, 0x2000);
            var_210 = rbp_1;
            let var_198_2: i64 = var_248;
            var_1a8 = var_258;
            var_1b8 = var_268;
            let var_1c8_3: i128 = var_278;
            let zmm0_5: i128 = var_2b8;
            let var_1d8_3: i128 = var_288;
            var_1e8 = var_298;
            var_200 = var_2a8;
            var_210 = zmm0_5;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&var_2b8, &var_318, &var_210, 
                rcx_3);
            core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&var_2b8);
            rbp_1 = rax_5;
        } while rax_5 < var_2f8;
    }
    
    _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(
        &var_2b8, arg3);
    var_210 = var_2c8;
    let mut var_200_1: i128 = var_308;
    let var_1f0_1: i64 = var_2f8;
    memcpy(&var_1e8, &var_2b8, 0xa0);
    let var_2a8_1: i64 = -0x8000000000000000;
    var_2b8 = 0;
    let mut rbp_2: i64;
    rbp_2 = 1;
    std::thread::Builder::spawn_unchecked::h45a2032dbc3b2a60(&var_f0, &var_2b8);
    core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&var_148, &var_f0);
    var_88 = 0;
    let var_80_1: i64 = 8;
    let var_78_1: i64 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h198381c625d86b96(&var_2b8, &var_2f0);
    let var_298_1: i64 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&var_f0, &var_2b8);
    let i_1: i64;
    let mut i: i64 = i_1;
    
    if i != 3
    {
        do
        {
            let rbp_4: i64 = var_f0;
            var_338 = i;
            let var_e0: i64;
            *var_338[8] = var_e0;
            let rax_11: i64 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(&var_338);
            
            if rax_11 == 0
            {
                core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f(&var_338);
            }
            else
            {
                var_210 = 1;
                *var_210[8] = 1;
                var_200_1 = rax_11;
                var_200_1 = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&var_210);
                *var_200_1[8] = 0;
                var_210 = var_338;
                let var_1f0_2: i64 = rbp_4;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc28a32eabbe87ae2(&var_88, &var_210);
            }
            
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&var_f0, &var_2b8);
            i = i_1;
        } while i != 3;
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::hc305886e897b9a8c(&var_2b8);
    let var_2a8_2: i64 = var_78_1;
    var_2b8 = var_88;
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::hf2caa71b6fc3d8b6(
        &var_210, &var_2b8, arg3, 1);
    let zmm0_8: i128 = var_318;
    *arg1.byte_offset(0x30) = var_148;
    arg1[8] = result;
    *arg1.byte_offset(0x10) = var_210;
    *arg1.byte_offset(0x20) = var_200_1;
    *arg1 = zmm0_8;
    arg1[9] = 0;
    result
}
