
  fn flealib::fileserver::FileServer::change_directory::h46ba8243e2a4185e(arg1: *mut i64, arg2: *mut i128, arg3: i64, arg4: u64) -> *mut i64

{
    let mut var_168: i128;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_168, arg3, 
        arg4);
    let mut var_148: i32 = 0;
    let mut rax: *mut i8;
    let mut rdx_1: u64;
    rax = core::char::methods::encode_utf8_raw::hdf17d5a6360402f0(0x2f, &var_148);
    let mut var_f8: i128;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_f8, rax, 
        rdx_1);
    let mut var_e8: u64;
    let var_178: u64 = var_e8;
    let mut var_188: i128 = var_f8;
    let var_160: u64;
    let mut var_158: *mut c_void;
    
    if _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h57cc45937a75ced8(
        *var_188[8], var_e8, var_160, var_158) == 0
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_188);
        var_188 = "/";
        *var_188[8] = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h1abb60216f8bb06d;
        let var_178_1: *mut i128 = &var_168;
        let var_170_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
        var_f8 = &data_450610;
        *var_f8[8] = 2;
        let var_d8_1: i64 = 0;
        var_e8 = &var_188;
        let var_e0_1: i64 = 2;
        let mut var_110: i128;
        core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_110, &var_f8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_168);
        let var_100: *mut c_void;
        var_158 = var_100;
        var_168 = var_110;
    }
    else
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_188);
    }
    
    let r13_1: i64 = *arg2.byte_offset(8);
    let rbp: i64 = arg2[1];
    var_148 = 0;
    let mut rax_3: *mut i8;
    let mut rdx_3: u64;
    rax_3 = core::char::methods::encode_utf8_raw::hdf17d5a6360402f0(0x2f, &var_148);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_f8, rax_3, 
        rdx_3);
    let var_178_2: u64 = var_e8;
    var_188 = var_f8;
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h7ff1b9328b1378bc(r13_1, rbp, 
        *var_188[8], var_e8) == 0
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_188);
    }
    else
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_188);
        var_148 = 0;
        let mut rax_5: *mut i8;
        let mut rdx_5: u64;
        rax_5 = core::char::methods::encode_utf8_raw::hdf17d5a6360402f0(0x2f, &var_148);
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_f8, 
            rax_5, rdx_5);
        let var_178_3: u64 = var_e8;
        var_188 = var_f8;
        alloc::str::_$LT$impl$u20$str$GT$::replace::hc91b576f7ea4e5c5(&var_f8, var_160, var_158, 
            *var_188[8], var_e8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_168);
        let var_158_1: u64 = var_e8;
        var_168 = var_f8;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_188);
    }
    
    var_148 = arg2;
    var_188 = &var_148;
    *var_188[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49740bff2e11fb82;
    let var_178_4: *mut i128 = &var_168;
    let var_170_2: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
    var_f8 = &data_450610;
    *var_f8[8] = 2;
    let var_d8_2: i64 = 0;
    let var_e8_1: *mut i128 = &var_188;
    let var_e0_2: i64 = 2;
    let mut var_48: i128;
    core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_48, &var_f8);
    let mut var_128: i128 = var_48;
    let var_38: i64;
    let var_118: i64 = var_38;
    let r12_1: *mut i8 = *var_128[8];
    let rdx_8: i64 = std::fs::metadata::h198ddbb2419bae71(&var_f8, r12_1);
    let var_c0: i32;
    
    if var_f8 == 2
    {
        var_148 = *var_f8[8];
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(
            &var_188, &var_148, rdx_8);
        arg1[2] = var_178_4;
        *arg1 = var_188;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(&var_148);
    }
    else if (0xf000 & var_c0) != 0x4000
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_188, 
            "Not a directory/root/.rustup/too…", 0xf);
        arg1[2] = var_178_4;
        *arg1 = var_188;
    }
    else
    {
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::hb4876b8b08d05247(&var_188, r12_1, var_38);
        
        if var_188 == 1
        {
            core::option::unwrap_failed::hf53ee17a2013bd69();
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_188, 
            *var_188[8], var_178_4);
        var_148 = var_188;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg2);
        arg2[1] = var_178_4;
        *arg2 = var_148;
        *arg1 = -0x8000000000000000;
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_128);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_168);
    arg1
}
