
  fn flealib::fileserver::FileServer::read_binary_file_by_path::h8cccdbe61e884fb8(arg1: *mut i64, arg2: i64, arg3: *mut c_void) -> *mut i64

{
    let mut fd: i32;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h6b169aa4c72fa5e4(
        &fd, arg3);
    let mut var_c8: i32;
    std::fs::metadata::hffdd0865439b20c5(&var_c8, &fd);
    let var_78: i64;
    
    if var_c8 == 2
    {
        'label_77b39d:
        let var_c0: *mut c_void;
        arg1[1] = var_c0;
        *arg1 = -0x8000000000000000;
    }
    else if var_78 <= 0x1f400000
    {
        std::fs::File::open::he10002f3cfe76741(&var_c8, arg3);
        
        if (var_c8 & 1) != 0
        {
            goto 'label_77b39d;
        }
        
        let fd_1: i32;
        fd = fd_1;
        var_c8 = 0;
        let var_c0_1: i64 = 1;
        let var_b8_1: i64 = 0;
        let mut rax_3: i64;
        let mut rdx_1: i64;
        rax_3 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_to_end::hc5ce334212601c81(
            &fd, &var_c8);
        
        if rax_3 == 0
        {
            arg1[2] = var_b8_1;
            *arg1 = var_c8;
        }
        else
        {
            arg1[1] = rdx_1;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc1da1ed81c1be07b(&var_c8);
        }
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h427eb749d8d610e5(fd);
    }
    else
    {
        arg1[1] = std::io::error::Error::new::h73bba56a22ab7bbe(0x28, "File too large", 0xe);
        *arg1 = -0x8000000000000000;
    }
    arg1
}
