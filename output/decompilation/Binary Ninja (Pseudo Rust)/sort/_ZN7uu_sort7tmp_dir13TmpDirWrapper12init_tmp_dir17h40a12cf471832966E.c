
  fn uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::h40a12cf471832966(arg1: *mut c_void) -> u64

{
    if *arg1.byte_offset(0x28) != 2
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: self.temp_dir.…");
        /* no return */
    }
    
    let mut var_f8: i64;
    
    if *arg1.byte_offset(0x38) != 0
    {
        var_f8 = 0;
        core::panicking::assert_failed::h449f2a7fe5426575(0, arg1.byte_offset(0x38), &data_426a60, 
            &var_f8);
        /* no return */
    }
    
    let var_78: i64 = 6;
    let var_88: i64 = 1;
    let var_80: i64 = 0;
    let var_70: i16 = 0;
    let mut var_a0: i32 = 0;
    let var_98: *const i8 = "uutils_sortassertion failed: sel…";
    let var_90: i64 = 0xb;
    let mut var_b8: i128;
    tempfile::Builder::tempdir_in::h41e65ac92346cc8c(&var_b8, &var_a0, arg1);
    let var_a8: i8;
    let mut var_68: i64;
    let var_60: i128;
    
    if var_a8 == 2
    {
        uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::_$u7b$$u7b$closure$u7d$$u7d$::h2186ef868a4f153a(&var_68, *arg1.byte_offset(8), *arg1.byte_offset(0x10), var_b8);
        let var_50: i64;
        let var_18: i64 = var_50;
        let var_28: i128 = var_60;
        let var_38: i128;
        let var_c8: i128 = var_38;
        let var_48: i128;
        let var_d8: i128 = var_48;
        let var_118: i128 = var_60;
        let var_f0_1: i128 = var_60;
        let var_e0: i64 = var_50;
        var_f8 = var_68;
        return alloc::boxed::Box$LT$T$GT$::new::h4da5af3d8a2f6642(&var_f8);
    }
    
    let zmm0: i128 = var_b8;
    core::ptr::drop_in_place$LT$core..option..Option$LT$tempfile..dir..TempDir$GT$$GT$::h3def595bc319fe18(arg1.byte_offset(0x18));
    *arg1.byte_offset(0x28) = var_a8;
    *arg1.byte_offset(0x18) = zmm0;
    
    if *arg1.byte_offset(0x28) == 2
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_68, 
        *arg1.byte_offset(0x18), *arg1.byte_offset(0x20));
    let rax_4: *mut i64 = *arg1.byte_offset(0x30);
    let temp0: i64 = *rax_4;
    *rax_4 += 1;
    
    if temp0 <= -1
    {
        trap(6);
    }
    
    let var_e0_1: i64 = *arg1.byte_offset(0x30);
    var_f8 = var_68;
    let mut var_f0: i128;
    *var_f0[8] = *var_60[8];
    ctrlc::init_and_set_handler::hcd032e68e80ef580(&var_a0, &var_f8);
    
    if var_a0 == 3
    {
        return 0;
    }
    
    var_f8 = var_a0;
    uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::_$u7b$$u7b$closure$u7d$$u7d$::h7a2370e9f611060b(
        &var_f8)
}
