
  fn uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::h98cc8f29e16f1909(arg1: *mut c_void) -> *mut i128

{
    if *arg1.byte_offset(0x28) != 2
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: self.temp_dir.…");
        /* no return */
    }
    
    let mut var_c8: i64;
    
    if *arg1.byte_offset(0x38) != 0
    {
        var_c8 = 0;
        core::panicking::assert_failed::hd9eafe0b9dbc486f(0, arg1.byte_offset(0x38), 
            &data_4241e8[0x10], &var_c8);
        /* no return */
    }
    
    let var_60: i64 = 6;
    let var_70: i64 = 1;
    let var_68: i64 = 0;
    let var_58: i16 = 0;
    let mut var_88: i32 = 0;
    let var_80: *const i8 = "uutils_sortassertion failed: sel…";
    let var_78: i64 = 0xb;
    let mut var_e0: i128;
    tempfile::Builder::tempdir_in::h2c1cb977497001f4(&var_e0, &var_88, arg1);
    let var_d0: i8;
    let mut result: *mut i128;
    let mut var_50: i8;
    let var_40: i128;
    
    if var_d0 != 2
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$tempfile..dir..TempDir$GT$$GT$::h781346d64f7035c3(arg1.byte_offset(0x18));
        *arg1.byte_offset(0x28) = var_d0;
        *arg1.byte_offset(0x18) = var_e0;
        
        if *arg1.byte_offset(0x28) == 2
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_50, 
            *arg1.byte_offset(0x18), *arg1.byte_offset(0x20));
        let rax_2: *mut i64 = *arg1.byte_offset(0x30);
        let temp0_1: i64 = *rax_2;
        *rax_2 += 1;
        
        if temp0_1 <= -1
        {
            trap(6);
        }
        
        let mut var_b8: i128;
        *var_b8[8] = *arg1.byte_offset(0x30);
        var_c8 = var_50;
        var_b8 = var_40;
        ctrlc::init_and_set_handler::h6af8d99ede2ba210(&var_88, &var_c8, 1);
        
        if var_88 != 3
        {
            var_c8 = var_88;
            result = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::_$u7b$$u7b$closure$u7d$$u7d$::hdf55d06592a2f2db(&var_c8);
        }
        else
        {
            result = nullptr;
        }
    }
    else
    {
        uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::_$u7b$$u7b$closure$u7d$$u7d$::h483fa247c502359f(&var_50, arg1, var_e0);
        let var_b8_1: i128 = var_40;
        let var_4f: i128;
        *var_c8[1] = var_4f;
        let var_30: i128;
        let var_a8_1: i128 = var_30;
        let var_20: i128;
        let var_98_1: i128 = var_20;
        var_c8 = var_50;
        result = alloc::boxed::Box$LT$T$GT$::new::hebf92c849c48588d(&var_c8);
    }
    result
}
