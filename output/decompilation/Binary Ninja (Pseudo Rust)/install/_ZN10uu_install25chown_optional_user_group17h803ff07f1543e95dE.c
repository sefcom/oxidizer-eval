
  fn uu_install::chown_optional_user_group::h803ff07f1543e95d(arg1: i64, arg2: u64, arg3: *mut c_void) -> u64

{
    let rbp: i32 = *arg3.byte_offset(0x50);
    let mut r12: i32 = *arg3.byte_offset(0x58);
    let mut var_158_1: i32;
    let mut var_150_1: i32;
    let mut r13_1: i8;
    
    if (rbp | r12) != 0
    {
        var_150_1 = *arg3.byte_offset(0x54);
        var_158_1 = *arg3.byte_offset(0x5c);
        r13_1 = rbp;
    }
    else
    {
        if uucore::features::process::geteuid::hd0ed7b4820ed9632() != 0
        {
            return 0;
        }
        
        var_150_1 = 0;
        r13_1 = 1;
        r12 = 1;
        var_158_1 = 0;
    }
    
    let mut var_e0: i32;
    std::fs::metadata::hd1e2f191d36a0fa4(&var_e0, arg1);
    let mut var_120: i64;
    let mut var_118: i64;
    let mut var_d8: i64;
    
    if var_e0 == 2
    {
        var_118 = var_d8;
        var_120 = 0xa;
        return alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_120);
    }
    
    let var_a4: i32;
    let var_a0: i32;
    uucore::features::perms::wrap_chown::h181c39f30a5ca939(&var_120, arg1, arg2, var_a4, var_a0, 
        r13_1, var_150_1, r12, var_158_1, rbp == 0);
    let mut var_148: i128;
    let var_108: i64;
    
    if var_120 == 1
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_148, arg1, 
            arg2);
        let var_b0_1: i64 = var_108;
        let var_c0_1: i128 = var_118;
        var_d8 = var_148;
        let var_138: i64;
        let var_c8_1: i64 = var_138;
        var_e0 = 4;
        return alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_e0);
    }
    
    let mut rdi_6: *mut i128;
    
    if *arg3.byte_offset(0x61) != 1 || var_108 == 0
    {
        rdi_6 = &var_118;
    }
    else
    {
        let var_138_1: i64 = var_108;
        var_148 = var_118;
        let mut var_130: *mut i128 = &var_148;
        let var_128_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_e0 = &data_502478;
        let var_d8_1: i64 = 2;
        let mut var_c0: i128;
        var_c0 = 0;
        let var_d0_1: *mut *mut i128 = &var_130;
        let var_c8_2: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
        rdi_6 = &var_148;
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3429258871469867(rdi_6);
    0
}
