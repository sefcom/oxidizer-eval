
  fn uu_split::ByteChunkWriter::new::ha12e0ca5c6566437(arg1: *mut i64, arg2: i64, arg3: *mut c_void) -> i64

{
    let mut var_108: *mut *mut [i8; 0x90];
    uu_split::filenames::FilenameIterator::new::hc2a8a0f7203a171b(&var_108, 
        *arg3.byte_offset(0x30), *arg3.byte_offset(0x38), arg3.byte_offset(0x40));
    let rdx_1: *mut *mut [i8; 0x90] = var_108;
    let mut result_1: i64;
    let result: i64 = result_1;
    let mut var_f8: *mut *mut i128;
    
    if rdx_1 == -0x7fffffffffffffff
    {
        arg1[1] = result;
        arg1[2] = var_f8;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let mut var_f0: i128;
    let var_60_1: i128 = var_f0;
    let mut var_78: *mut *mut [i8; 0x90] = rdx_1;
    let var_68_1: *mut *mut i128 = var_f8;
    let mut var_b0: *mut i128;
    _$LT$uu_split..filenames..FilenameIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h029d1b66ecb898b7(&var_b0, &var_78);
    let r12_1: *mut i128 = var_b0;
    let mut var_98: i128;
    
    if r12_1 != -0x8000000000000000
    {
        let var_a8: i64;
        let mut rdx_2: i64 = var_a8;
        let var_110_1: i64 = rdx_2;
        let var_a0: i64;
        
        if *arg3.byte_offset(0xa0) != 0
        {
            var_98 = 0;
            *var_98[8] = rdx_2;
            let var_88_1: i64 = var_a0;
            let var_80_1: i8 = 1;
            var_b0 = &var_98;
            let var_a8_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_108 = &data_50af08;
            result_1 = 2;
            *var_f0[8] = 0;
            var_f8 = &var_b0;
            var_f0 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_108);
            rdx_2 = var_110_1;
        }
        
        uu_split::Settings::instantiate_current_writer::hd292c92efbe44a3c(&var_108, arg3, rdx_2, 
            var_a0, 1);
        let rax_2: *mut *mut [i8; 0x90] = var_108;
        
        if rax_2 != -0x8000000000000000
        {
            *arg1.byte_offset(0x20) = var_f0;
            *arg1.byte_offset(0x10) = var_f8;
            let var_d0: i128;
            arg1[0xe] = *var_d0[8];
            let zmm0_3: i128 = var_78;
            let var_e0: i128;
            *arg1.byte_offset(0x60) = var_e0;
            *arg1.byte_offset(0x50) = var_60_1;
            *arg1.byte_offset(0x40) = var_68_1;
            *arg1.byte_offset(0x30) = zmm0_3;
            *arg1 = rax_2;
            arg1[1] = result_1;
            arg1[0xf] = arg3;
            arg1[0x10] = arg2;
            arg1[0x11] = 0;
            arg1[0x12] = arg2;
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7f9a6516de84fa50(r12_1, 
                var_110_1);
        }
        
        arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        arg1[2] = &data_50bc38;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7f9a6516de84fa50(r12_1, var_110_1);
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_98, "output file suffixes exhaustedcr…", 0x1e);
        let var_88: i64;
        let var_f8_1: i64 = var_88;
        var_108 = var_98;
        var_f0 = 1;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::he26860fb58d4a888(&var_108);
        arg1[2] = &data_50ab40;
        *arg1 = -0x8000000000000000;
    }
    core::ptr::drop_in_place$LT$uu_split..filenames..FilenameIterator$GT$::h3a3dca25075fae6f(
        var_78, result)
}
