
  fn flealib::fileserver::FileServer::read_binary_file::hc1f3948005c4522f(arg1: *mut i64, arg2: *mut c_void, arg3: i64) -> *mut i64

{
    let mut var_f8: i64 = arg3;
    let rcx: i64;
    let var_f0: i64 = rcx;
    let mut var_148: i32 = 0;
    let mut rax: *mut i8;
    let mut rdx: u64;
    rax = core::char::methods::encode_utf8_raw::hdf17d5a6360402f0(0x2f, &var_148);
    let mut var_e8: i128;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_e8, rax, 
        rdx);
    let var_d8: u64;
    let var_158: u64 = var_d8;
    let mut var_168: i128 = var_e8;
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h7ff1b9328b1378bc(
        *arg2.byte_offset(8), *arg2.byte_offset(0x10), *var_168[8], var_d8) != 0
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_e8, 1, 
            0);
        var_148 = var_e8;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_168);
        let var_158_1: u64 = var_d8;
        var_168 = var_148;
    }
    
    var_e8 = arg2;
    *var_e8[8] =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
    let var_d8_1: *mut i128 = &var_168;
    let var_d0: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
    let var_c8: *mut i64 = &var_f8;
    let var_c0: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e99a2697242919d;
    var_148 = &data_46b258;
    let var_140: i64 = 3;
    let var_128: i64 = 0;
    let var_138_2: *mut i128 = &var_e8;
    let var_130: i64 = 3;
    let mut var_30: i128;
    core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_30, &var_148);
    let mut var_118: i128 = var_30;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h7ef9d321b3428b60(
        &var_148, &var_118);
    std::fs::metadata::hab0b5a644e120762(&var_e8, &var_148);
    let mut rax_5: *mut c_void;
    
    if var_e8 != 2
    {
        let var_98: i64;
        
        if var_98 > 0x1f400000
        {
            rax_5 = std::io::error::Error::new::h73bba56a22ab7bbe(0x28, "File too large", 0xe);
            goto 'label_77b676;
        }
        
        let var_20: i64;
        let var_d8_2: i64 = var_20;
        var_e8 = var_118;
        std::fs::File::open::h7ac33442c85c547d(&var_148, &var_e8);
        
        if (var_148 & 1) == 0
        {
            let fd_1: i32;
            let mut fd: i32 = fd_1;
            var_e8 = 0;
            *var_e8[8] = 1;
            let var_d8_3: i64 = 0;
            let mut rax_10: i64;
            let mut rdx_2: i64;
            rax_10 =
                _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_to_end::hc5ce334212601c81(
                &fd, &var_e8);
            
            if rax_10 == 0
            {
                arg1[2] = var_d8_3;
                *arg1 = var_e8;
            }
            else
            {
                arg1[1] = rdx_2;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc1da1ed81c1be07b(
                    &var_e8);
            }
            
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h427eb749d8d610e5(fd);
        }
        else
        {
            arg1[1] = var_140;
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        rax_5 = *var_e8[8];
        'label_77b676:
        arg1[1] = rax_5;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_118);
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_168);
    arg1
}
