
  fn uu_tee::open::h0365940af90c88f0(arg1: *mut i64, arg2: i64, arg3: u64, arg4: i32, arg5: *mut i8) -> *mut i64

{
    let mut var_98: ();
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_98, arg2, arg3);
    let mut var_d8: i64 = 0x1b600000000;
    let mut var_d0: i32 = 0;
    let mut var_cc: i16 = 0;
    
    if arg4 == 0
    {
        *var_d0[3] = 1;
    }
    else
    {
        *var_d0[2] = 1;
    }
    
    *var_d0[1] = 1;
    var_cc = 1;
    let var_90: i64;
    let mut var_80: i32;
    std::fs::OpenOptions::open::h097a071329397a72(&var_80, &var_d8, var_90);
    let mut var_c8: i128;
    
    if var_80 == 0
    {
        let var_7c: i32;
        let rax_2: *mut i32 = alloc::boxed::Box$LT$T$GT$::new::h8dc79dc8461f5b4a(var_7c);
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h02ba9e8c78156205(&var_c8, 
            arg2, arg3);
        let var_b8: i64;
        arg1[2] = var_b8;
        *arg1 = var_c8;
        arg1[3] = rax_2;
        arg1[4] = &data_51f9f8;
    }
    else
    {
        let var_78: i64;
        let mut var_e0: i64 = var_78;
        let mut rax_1: i64;
        let mut rdx_1: i64;
        rax_1 = uucore::util_name::h60d842bf27b05e82();
        let mut var_50: i64 = rax_1;
        let var_48_1: i64 = rdx_1;
        let mut var_70: *mut i64 = &var_50;
        let var_68_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h845947ade0b20afc;
        var_c8 = &data_51f9a8;
        *var_c8[8] = 2;
        let var_a8_1: i64 = 0;
        let var_b8_1: *mut *mut i64 = &var_70;
        let var_b0_1: i64 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
        var_50 = 0;
        let var_48_2: i64 = arg2;
        let var_40_1: u64 = arg3;
        let var_38_1: i8 = 0;
        var_70 = &var_50;
        let var_68_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        let var_60_1: *mut i64 = &var_e0;
        let var_58_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
        var_c8 = &data_51f9c8;
        *var_c8[8] = 3;
        let var_a8_2: i64 = 0;
        let var_b8_2: *mut *mut i64 = &var_70;
        let var_b0_2: i64 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
        
        if arg5 == 0 || *arg5 <= 1
        {
            *arg1 = -0x7fffffffffffffff;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb33ceb02c1cf9a1d(var_e0);
        }
        else
        {
            let rax_4: i64 = var_e0;
            *arg1 = -0x8000000000000000;
            arg1[1] = rax_4;
        }
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc65b4027f210db7e(&var_98);
    arg1
}
