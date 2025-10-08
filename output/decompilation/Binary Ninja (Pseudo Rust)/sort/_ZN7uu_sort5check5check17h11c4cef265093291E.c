
  fn uu_sort::check::check::h11c4cef265093291(arg1: i64, arg2: u64, arg3: *mut c_void) -> *mut i64

{
    let r12: i8 = 0 - *arg3.byte_offset(0x84);
    let mut var_1d8: i8;
    uu_sort::open::h6e0cf77724ac2e35(&var_1d8, arg1);
    let var_1d0: *mut i64;
    
    if (var_1d8 & 1) != 0
    {
        return var_1d0;
    }
    
    let mut r14: i64;
    r14 = 1;
    std::sync::mpmc::sync_channel::h330c9ba5da901eb6(&var_1d8);
    let rax_1: i64 = var_1d8;
    let mut var_200: i64 = rax_1;
    let var_1f8_1: *mut i64 = var_1d0;
    let var_1c8: i64;
    let var_100_1: i64 = var_1c8;
    let var_1c0: i64;
    let var_f8_1: i64 = var_1c0;
    std::sync::mpmc::sync_channel::hb189ed79e26d1c27(&var_1d8, 2);
    let r13_1: i64 = var_1d8;
    let var_f0_1: i64 = r13_1;
    let var_e8_1: *mut i64 = var_1d0;
    let var_e0_1: i64 = var_1c8;
    let var_d8_1: i64 = var_1c0;
    r14 = 1;
    let mut var_d0: i64;
    _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h43265696f2462bc6(
        &var_d0, arg3);
    let var_118_1: *mut i64 = var_1d0;
    let var_110_1: i64 = var_1c8;
    var_1d8 = var_1c8;
    let var_1d0_1: i64 = var_1c0;
    let mut var_1c0_1: *mut i64 = var_1d0;
    let mut var_1b8: ();
    memcpy(&var_1b8, &var_d0, 0xa0);
    let mut var_c0_1: i64 = -0x8000000000000000;
    var_d0 = 0;
    let var_a8_1: i8 = 0;
    let mut var_278: i128;
    std::thread::Builder::spawn_unchecked::h4b12415a4cf75a6b(&var_278, &var_d0, &var_1d8);
    core::result::Result$LT$T$C$E$GT$::expect::h12022375ebf47b21(&var_d0, &var_278);
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::hf4d447ad143c1ed5(&var_d0);
    let rax_6: i64 = *arg3.byte_offset(0x68);
    let mut rbx_2: i64 = 0x19000;
    
    if rax_6 < 0x19000
    {
        rbx_2 = rax_6;
    }
    
    uu_sort::chunks::RecycledChunk::new::hb2d00041a3f0fa31(&var_1d8, rbx_2);
    std::sync::mpmc::Sender$LT$T$GT$::send::he79bf60cd8708165(&var_d0, rax_1, var_1d0, &var_1d8);
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$uu_sort..chunks..RecycledChunk$GT$$GT$$GT$::hd2fc59df8b1d9cab(&var_d0);
    uu_sort::chunks::RecycledChunk::new::hb2d00041a3f0fa31(&var_1d8, rbx_2);
    std::sync::mpmc::Sender$LT$T$GT$::send::he79bf60cd8708165(&var_d0, rax_1, var_1d0, &var_1d8);
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$uu_sort..chunks..RecycledChunk$GT$$GT$$GT$::hd2fc59df8b1d9cab(&var_d0);
    let mut var_298: *mut i128 = nullptr;
    let mut rdi_14: i64 = var_1c8;
    let mut var_1f0: i64 = rdi_14;
    let var_1e8_1: i64 = var_1c0;
    let mut rbx_3: *mut i128 = nullptr;
    let mut var_258_1: *mut *mut c_void = &data_58c3f8;
    let mut r15_2: i64 = 0;
    'label_4c0b99:
    let rax_7: *mut i128 = _$LT$std..sync..mpsc..IntoIter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h814ad6d3745a9547(rdi_14);
    
    if rax_7 == 0
    {
        core::ptr::drop_in_place$LT$std..sync..mpsc..IntoIter$LT$uu_sort..chunks..Chunk$GT$$GT$::h61517e68e954f560(&var_1f0);
        core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::h7ff86e8d0d3ee6b2(&var_298);
        core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..RecycledChunk$GT$$GT$::h810b5076d75bca91(&var_200);
        return nullptr;
    }
    
    let mut var_220: *mut i128 = rax_7;
    r15_2 += 1;
    let mut var_1e0: *mut i128 = rbx_3;
    var_298 = nullptr;
    let mut rbx_5: *mut i64;
    let mut var_218: *mut i128;
    
    if rbx_3 == 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::h7ff86e8d0d3ee6b2(&var_1e0);
        'label_4c0c6d:
        let rax_10: i64 = rax_7[2];
        let rcx_7: i64 = *rax_7.byte_offset(0x28);
        var_d0 = rax_10;
        let var_c8_1: i64 = rax_10 + rcx_7 * 0x18;
        var_c0_1 = 0;
        let mut rdx_7: *mut *mut i8;
        let mut rax_12: i8;
        
        do
        {
            let mut rax_11: *mut *mut c_void;
            rax_11 = _$LT$itertools..tuple_impl..TupleWindows$LT$I$C$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1cd9f19e923758b9(&var_d0);
            
            if rax_11 == 0
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::h7ff86e8d0d3ee6b2(&var_298);
                var_298 = rax_7;
                rbx_3 = rax_7;
                rdi_14 = var_1c8;
                goto 'label_4c0b99;
            }
            
            rax_12 =
                uu_sort::compare_by::h7242c39af3d6a804(rax_11, rdx_7, arg3, &rax_7[3], &rax_7[3]);
            r15_2 += 1;
        } while rax_12 <= r12;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1bb0423170e7fa7c(&var_1d8, arg1, arg2);
        var_218 = var_1d8;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1bb0423170e7fa7c(&var_278, *rdx_7, rdx_7[1]);
        let var_268: i64;
        let var_1b0_1: i64 = var_268;
        var_1c0_1 = var_278;
        let var_1c8_2: i64 = r13_1;
        var_1d8 = var_218;
        let var_1a8_1: i64 = r15_2;
        let var_1a0_1: i8 = *arg3.byte_offset(0x86);
        rbx_5 = alloc::boxed::Box$LT$T$GT$::new::h4da5af3d8a2f6642(&var_1d8);
    }
    else
    {
        var_218 = rbx_3;
        let rax_8: i64 = *rbx_3.byte_offset(0x28);
        
        if rax_8 == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        let rdi_17: *mut c_void = rax_8 * 0x18 + rbx_3[2];
        
        if rdi_17 == 0x18
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        if *rax_7.byte_offset(0x28) == 0
        {
            var_258_1 = &data_58c410;
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        let rbp_2: *mut *mut i8 = rax_7[2];
        
        if uu_sort::compare_by::h7242c39af3d6a804(rdi_17.byte_offset(-0x18), rbp_2, arg3, 
            &rbx_3[3], &rax_7[3]) <= r12
        {
            uu_sort::chunks::Chunk::recycle::h028cbe8b563e97c5(&var_1d8, rbx_3);
            std::sync::mpmc::Sender$LT$T$GT$::send::he79bf60cd8708165(&var_d0, rax_1, var_1d0, 
                &var_1d8);
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$uu_sort..chunks..RecycledChunk$GT$$GT$$GT$::hd2fc59df8b1d9cab(&var_d0);
            goto 'label_4c0c6d;
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1bb0423170e7fa7c(&var_1d8, arg1, arg2);
        var_278 = var_1d8;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1bb0423170e7fa7c(&var_d0, *rbp_2, rbp_2[1]);
        let var_1b0_2: i64 = var_c0_1;
        var_1c0_1 = var_d0;
        let var_1c8_3: i64 = r13_1;
        var_1d8 = var_278;
        let var_1a8_2: i64 = r15_2;
        let var_1a0_2: i8 = *arg3.byte_offset(0x86);
        rbx_5 = alloc::boxed::Box$LT$T$GT$::new::h4da5af3d8a2f6642(&var_1d8);
        core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h49f783d79a42b220(&var_218);
    }
    core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h49f783d79a42b220(&var_220);
    core::ptr::drop_in_place$LT$std..sync..mpsc..IntoIter$LT$uu_sort..chunks..Chunk$GT$$GT$::h61517e68e954f560(&var_1f0);
    core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::h7ff86e8d0d3ee6b2(&var_298);
    core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..RecycledChunk$GT$$GT$::h810b5076d75bca91(&var_200);
    rbx_5
}
