
  fn uu_split::LineChunkWriter::start_new_chunk::h270b7287cecb38e1(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i64) -> *mut c_void

{
    let mut var_90: i64;
    _$LT$uu_split..filenames..FilenameIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h029d1b66ecb898b7(&var_90, arg3);
    let r14: i64 = var_90;
    let mut var_60: *mut *mut [i8; 0x90];
    
    if -(r14) == -0x8000000000000000
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_60, "output file suffixes exhaustedcr…", 0x1e);
        let result: *mut c_void = std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
            alloc::boxed::Box$LT$T$GT$::new::h8b7f7ad758f1175c(&var_60), &data_50ad88);
        arg1[1] = result;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let var_88: i64;
    let var_80: i64;
    
    if *arg2.byte_offset(0xa0) != 0
    {
        var_90 = 0;
        let var_88_1: i64 = var_88;
        let var_80_1: i64 = var_80;
        let var_78_1: i8 = 1;
        let mut var_70: *mut i64 = &var_90;
        let var_68_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_60 = &data_50af08;
        let var_58_1: i64 = 2;
        let var_40_1: i64 = 0;
        let var_50_1: *mut *mut i64 = &var_70;
        let var_48_1: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_60);
    }
    
    uu_split::Settings::instantiate_current_writer::hd292c92efbe44a3c(arg1, arg2, var_88, var_80, 
        1);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7f9a6516de84fa50(r14, var_88)
}
