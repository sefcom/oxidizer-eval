
  fn uu_split::ByteChunkWriter::new::hf26f4f49e0f52e08(arg1: *mut i64, arg2: i64, arg3: *mut c_void) -> i64

{
    let mut var_f8: *mut *mut [i8; 0x3d];
    uu_split::filenames::FilenameIterator::new::hd5c894c6ceac3496(&var_f8, *arg3.byte_offset(0x30), 
        *arg3.byte_offset(0x38), arg3.byte_offset(0x40));
    let rdx_1: *mut *mut [i8; 0x3d] = var_f8;
    let mut result: i64;
    let mut var_e8: *mut *mut i128;
    
    if rdx_1 == -0x7fffffffffffffff
    {
        arg1[1] = result;
        arg1[2] = var_e8;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let mut var_e0: i128;
    let var_58_1: i128 = var_e0;
    let mut var_70: *mut *mut [i8; 0x3d] = rdx_1;
    let result_1: i64 = result;
    let var_60_1: *mut *mut i128 = var_e8;
    let mut var_a8: *mut i128;
    _$LT$uu_split..filenames..FilenameIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5ad8a6a4076a29c8(&var_a8, &var_70);
    let rax_1: *mut i128 = var_a8;
    let mut var_90: i128;
    
    if rax_1 != -0x8000000000000000
    {
        let mut var_110: *mut i128 = rax_1;
        let var_a0: i64;
        let var_98: i64;
        
        if *arg3.byte_offset(0xa0) != 0
        {
            var_90 = 0;
            *var_90[8] = var_a0;
            let var_80_1: i64 = var_98;
            let var_78_1: i8 = 1;
            var_a8 = &var_90;
            let var_a0_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_f8 = &data_5483e0;
            result = 2;
            *var_e0[8] = 0;
            var_e8 = &var_a8;
            var_e0 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&var_f8);
        }
        
        uu_split::Settings::instantiate_current_writer::h325c265ed321d02d(&var_f8, arg3, var_a0, 
            var_98, 1);
        let rax_4: *mut *mut [i8; 0x3d] = var_f8;
        
        if rax_4 != -0x8000000000000000
        {
            *arg1.byte_offset(0x20) = var_e0;
            *arg1.byte_offset(0x10) = var_e8;
            let var_c0: i128;
            arg1[0xe] = *var_c0[8];
            let zmm0_3: i128 = var_70;
            let var_d0: i128;
            *arg1.byte_offset(0x60) = var_d0;
            *arg1.byte_offset(0x50) = var_58_1;
            *arg1.byte_offset(0x40) = var_60_1;
            *arg1.byte_offset(0x30) = zmm0_3;
            *arg1 = rax_4;
            arg1[1] = result;
            arg1[0xf] = arg3;
            arg1[0x10] = arg2;
            arg1[0x11] = 0;
            arg1[0x12] = arg2;
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha786b13c7b7ee26d(
                &var_110);
        }
        
        arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        arg1[2] = &data_549a38;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha786b13c7b7ee26d(&var_110);
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha461c13160c52a35(&var_90, 
            "output file suffixes exhaustedcr…", 0x1e);
        let var_80: i64;
        let var_e8_1: i64 = var_80;
        var_f8 = var_90;
        var_e0 = 1;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hb3c54f980883cdc1(&var_f8);
        arg1[2] = &data_548438;
        *arg1 = -0x8000000000000000;
    }
    core::ptr::drop_in_place$LT$uu_split..filenames..FilenameIterator$GT$::h4a1cc4a00f07c721(
        &var_70)
}
