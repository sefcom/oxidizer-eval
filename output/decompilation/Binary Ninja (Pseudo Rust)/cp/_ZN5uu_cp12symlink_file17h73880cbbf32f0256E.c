
  fn uu_cp::symlink_file::h73880cbbf32f0256(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: *mut i64) -> *mut *mut [i8; 0xff]

{
    let rax: i64 = std::os::unix::fs::symlink::h7d55b4689024f9f4(arg2, arg3, arg4);
    let var_1d8: i64 = rax;
    let mut rax_1: *const i8;
    let mut rdx_1: i64;
    rax_1 = uucore::features::fs::get_filename::h4988c52a18f1d407(arg4, arg5);
    
    if rax_1 == 0
    {
        rdx_1 = 0x11;
    }
    
    let mut r12_1: *const i8 = "invalid file namecannot create s…";
    
    if rax_1 == 0
    {
        rax_1 = "invalid file namecannot create s…";
    }
    
    let mut var_1b0: i64 = 0;
    let var_1a8: *const i8 = rax_1;
    let var_1a0: i64 = rdx_1;
    let var_198: i8 = 1;
    let mut rax_2: *mut i8;
    let mut rdx_2: i64;
    rax_2 = uucore::features::fs::get_filename::h4988c52a18f1d407(arg2, arg3);
    
    if rax_2 != 0
    {
        r12_1 = rax_2;
    }
    
    if rax_2 == 0
    {
        rdx_2 = 0x11;
    }
    
    let mut var_190: i64 = 0;
    let var_188: *const i8 = r12_1;
    let var_180: i64 = rdx_2;
    let var_178: i8 = 1;
    let mut var_1d0: *mut i64 = &var_1b0;
    let var_1c8: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    let var_1c0: *mut i64 = &var_190;
    let var_1b8: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    let mut result_1: *mut *mut [i8; 0xff] = &data_5b5e88;
    let mut var_150: i64 = 2;
    let var_138: i64 = 0;
    let var_148: *mut *mut i64 = &var_1d0;
    let var_140: i64 = 2;
    let mut var_170: i128;
    core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_170, &result_1);
    result_1 = var_170;
    let mut result: *mut *mut [i8; 0xff];
    
    if rax == 0
    {
        core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h0c139c7d53bd4e4a(&result_1);
        uucore::features::fs::FileInformation::from_path::he917b6b2466acd0f(&result_1, arg4, arg5, 
            0);
        
        if result_1 == 0
        {
            let mut var_c0: ();
            memcpy(&var_c0, &var_150, 0x90);
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h531130355967ce20(arg6, &var_c0);
        }
        
        result = core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::hf438bf76be742e1b(&result_1);
        *arg1 = 0xd;
    }
    else
    {
        result = result_1;
        arg1[2] = var_150;
        let var_160: i64;
        arg1[3] = var_160;
        *arg1 = 3;
        arg1[1] = result;
        arg1[4] = rax;
    }
    
    result
}
