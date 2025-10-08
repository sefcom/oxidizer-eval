
  fn uu_nohup::find_stdout::hadffd7477f170ba3(arg1: *mut *mut i128) -> *mut c_void

{
    let mut var_f8: i8;
    std::env::var::h9bd4fb999c9dbe8d(&var_f8, "POSIXLY_CORRECTsrc/uu/nohup/src/…");
    let r15: i8 = var_f8;
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::he0e3335e5b80ba06(&var_f8);
    let mut var_78: i64 = 0x1b600000000;
    let mut var_6c: i16 = 0;
    let mut var_70: i32 = 0;
    var_6c = 1;
    *var_70[2] = 1;
    let mut var_58: i32;
    std::fs::OpenOptions::open::h9017e185fad19e88(&var_58, &var_78, 
        "nohup.out(uutils coreutils) 0.0.…");
    let mut var_c8: *mut i64;
    let mut var_b0: i64;
    
    if var_58 != 1
    {
        let mut rax_2: i64;
        let mut rdx_2: i64;
        rax_2 = uucore::util_name::h074417a1e6395129();
        var_b0 = rax_2;
        let var_a8_1: i64 = rdx_2;
        var_c8 = &var_b0;
        let var_c0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2ca060958355d931;
        var_f8 = &data_4dec18;
        let var_f0_2: i64 = 2;
        let var_d8_1: i64 = 0;
        let var_e8_1: *mut *mut i64 = &var_c8;
        let var_e0_1: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_f8);
        var_b0 = 0;
        let var_a8_2: *const i8 = "nohup.out(uutils coreutils) 0.0.…";
        let var_a0_1: i64 = 9;
        let var_98_1: i8 = 1;
        var_c8 = &var_b0;
        let var_c0_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_f8 = &data_4dec38;
        let var_f0_3: i64 = 2;
        let var_d8_2: i64 = 0;
        let var_e8_2: *mut *mut i64 = &var_c8;
        let var_e0_2: i64 = 1;
        let result: *mut c_void = std::io::stdio::_eprint::h57899770eacec2ad(&var_f8);
        let var_54: i32;
        arg1[1] = var_54;
        *arg1 = nullptr;
        return result;
    }
    
    let var_50: *mut i64;
    let mut var_80: *mut i64 = var_50;
    std::env::var::h9bd4fb999c9dbe8d(&var_b0, &data_417224[0xc]);
    let r14_1: i32 = ((r15 ^ 1) << 1) + 0x7d;
    let mut var_e8: u64;
    
    if var_b0 == 1
    {
        var_e8 = r14_1;
        let var_f0_1: *mut i64 = var_50;
        var_f8 = -0x7ffffffffffffffe;
        *arg1 = alloc::boxed::Box$LT$T$GT$::new::hea0f551513cd90e2(&var_f8);
        arg1[1] = &data_4debb0;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::he0e3335e5b80ba06(&var_b0);
    }
    
    let var_a8: i64;
    var_c8 = var_a8;
    std::path::PathBuf::push::h7e011101ff3a8e62(&var_c8);
    let var_c0: *mut i8;
    let var_98: i8;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_f8, var_c0, var_98);
    
    if (var_f8 & 1) != 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let mut var_68: i64 = 0x1b600000000;
    let mut var_5c_1: i16 = 0;
    let mut var_60_1: i32 = 0;
    var_5c_1 = 1;
    *var_60_1[2] = 1;
    let mut var_48: i32;
    std::fs::OpenOptions::open::hc8219ae85e6b165d(&var_48, &var_68, &var_c8);
    let var_f0: i64;
    let mut var_90: *mut i64;
    
    if var_48 == 1
    {
        let var_40: i64;
        let var_38_1: i64 = var_40;
        var_90 = var_50;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd404e6f6c4fd17c6(&var_b0, var_f0, var_e8);
        let var_a0: i64;
        let var_e8_3: i64 = var_a0;
        var_f8 = var_b0;
        let var_d0_1: i32 = r14_1;
        let var_e0_3: *mut i64 = var_50;
        let var_d8_3: i64 = var_40;
        *arg1 = alloc::boxed::Box$LT$T$GT$::new::hea0f551513cd90e2(&var_f8);
        arg1[1] = &data_4debb0;
        return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he63e5d41399ae48f(var_c8, 
            var_c0);
    }
    
    let mut rax_6: i64;
    let mut rdx_6: i64;
    rax_6 = uucore::util_name::h074417a1e6395129();
    var_b0 = rax_6;
    let var_a8_3: i64 = rdx_6;
    var_90 = &var_b0;
    let var_88_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2ca060958355d931;
    var_f8 = &data_4dec18;
    let var_f0_4: i64 = 2;
    let var_d8_4: i64 = 0;
    let var_e8_4: *mut *mut i64 = &var_90;
    let var_e0_4: i64 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_f8);
    var_b0 = 0;
    let var_a8_4: i64 = var_f0;
    let var_a0_2: u64 = var_e8;
    let var_98_2: i8 = 1;
    var_90 = &var_b0;
    let var_88_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    var_f8 = &data_4dec38;
    let var_f0_5: i64 = 2;
    let var_d8_5: i64 = 0;
    let var_e8_5: *mut *mut i64 = &var_90;
    let var_e0_5: i64 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_f8);
    let var_44: i32;
    arg1[1] = var_44;
    *arg1 = nullptr;
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he63e5d41399ae48f(var_c8, var_c0);
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb34077f862f5102e(&var_80)
}
