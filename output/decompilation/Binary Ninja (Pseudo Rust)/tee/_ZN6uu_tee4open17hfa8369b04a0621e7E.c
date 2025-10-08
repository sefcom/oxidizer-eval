
  fn uu_tee::open::hfa8369b04a0621e7(arg1: *mut i64, arg2: i64, arg3: u64, arg4: i32, arg5: *mut i8) -> i64

{
    let mut var_c0: *mut c_void;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hbc1a098f16dd279e(&var_c0, arg2, arg3);
    let rax: *mut c_void = var_c0;
    let mut var_d0: i64 = 0x1b600000000;
    let mut var_c8: i32 = 0;
    let mut var_c4: i16 = 0;
    
    if arg4 == 0
    {
        *var_c8[3] = 1;
    }
    else
    {
        *var_c8[2] = 1;
    }
    
    *var_c8[1] = 1;
    var_c4 = 1;
    let var_b8: i64;
    let mut var_80: i32;
    std::fs::OpenOptions::open::h2690ee4aec4a6280(&var_80, &var_d0, var_b8);
    
    if var_80 != 1
    {
        let var_7c: i32;
        let rax_4: u64 = alloc::boxed::Box$LT$T$GT$::new::h74aa50a9b650d9d3(var_7c);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hbc1a098f16dd279e(&var_c0, arg2, arg3);
        let var_b0: i64;
        arg1[2] = var_b0;
        *arg1 = var_c0;
        arg1[3] = rax_4;
        arg1[4] = &data_4ea540;
    }
    else
    {
        let var_78: i64;
        let mut var_d8: i64 = var_78;
        let mut rax_2: i64;
        let mut rdx_1: i64;
        rax_2 = uucore::util_name::h074417a1e6395129();
        let mut var_50: i64 = rax_2;
        let var_48_1: i64 = rdx_1;
        let mut var_70: *mut i64 = &var_50;
        let var_68_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c0a48ca77de87af;
        var_c0 = &data_4ea4f0;
        let var_b8_1: i64 = 2;
        let var_a0_1: i64 = 0;
        let var_b0_1: *mut *mut i64 = &var_70;
        let var_a8_1: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_c0);
        var_50 = 0;
        let var_48_2: i64 = arg2;
        let var_40_1: u64 = arg3;
        let var_38_1: i8 = 0;
        var_70 = &var_50;
        let var_68_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        let var_60_1: *mut i64 = &var_d8;
        let var_58_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
        var_c0 = &data_4ea510;
        let var_b8_2: i64 = 3;
        let var_a0_2: i64 = 0;
        let var_b0_2: *mut *mut i64 = &var_70;
        let var_a8_2: i64 = 2;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_c0);
        
        if arg5 == 0 || *arg5 <= 1
        {
            *arg1 = -0x7fffffffffffffff;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc399f132f0256091(var_d8);
        }
        else
        {
            let rax_6: i64 = var_d8;
            *arg1 = -0x8000000000000000;
            arg1[1] = rax_6;
        }
    }
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ef7ab37ae5a30d7(rax, var_b8)
}
