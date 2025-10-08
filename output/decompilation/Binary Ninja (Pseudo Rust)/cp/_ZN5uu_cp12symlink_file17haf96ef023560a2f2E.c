
  fn uu_cp::symlink_file::haf96ef023560a2f2(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: *mut *mut i8) -> i64

{
    let rax: i64 = std::os::unix::fs::symlink::ha0101dd5a62d8719(arg2, arg3, arg4);
    let var_1d8: i64 = rax;
    let mut rax_1: *const i8;
    let mut rdx_1: i64;
    rax_1 = uucore::features::fs::get_filename::hf3decfe9888d2f9f(arg4, arg5);
    
    if rax_1 == 0
    {
        rdx_1 = 0x11;
    }
    
    let mut rbx_1: *const i8 = "invalid file namecannot create s…";
    
    if rax_1 == 0
    {
        rax_1 = "invalid file namecannot create s…";
    }
    
    let mut var_198: i64 = 0;
    let var_190: *const i8 = rax_1;
    let var_188: i64 = rdx_1;
    let var_180: i8 = 1;
    let mut rax_2: *mut i8;
    let mut rdx_2: i64;
    rax_2 = uucore::features::fs::get_filename::hf3decfe9888d2f9f(arg2, arg3);
    
    if rax_2 == 0
    {
        rdx_2 = 0x11;
    }
    
    if rax_2 != 0
    {
        rbx_1 = rax_2;
    }
    
    let mut var_178: i64 = 0;
    let var_170: *const i8 = rbx_1;
    let var_168: i64 = rdx_2;
    let var_160: i8 = 1;
    let mut var_1b8: *mut i64 = &var_198;
    let var_1b0: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    let var_1a8: *mut i64 = &var_178;
    let var_1a0: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    let mut var_158: *mut *mut [i8; 0x126] = &data_55ebb8;
    let mut var_150: i64 = 2;
    let var_138: i64 = 0;
    let var_148: *mut *mut i64 = &var_1b8;
    let var_140: i64 = 2;
    let mut result_1: i64;
    core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&result_1, &var_158);
    let mut result: i64;
    
    if rax == 0
    {
        core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h92d6353b521410cd(&result_1);
        uucore::features::fs::FileInformation::from_path::hfd069e4f76a9cc58(&var_158, arg4, arg5, 
            0);
        
        if (var_158 & 1) == 0
        {
            let mut var_c0: ();
            memcpy(&var_c0, &var_150, 0x90);
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::he952524e990dcb56(arg6, &var_c0);
        }
        
        result = core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::h6445ae0773dfc02a(&var_158);
        *arg1 = -0x7ffffffffffffff4;
    }
    else
    {
        result = result_1;
        let var_1c8: i128;
        *arg1.byte_offset(0x10) = var_1c8;
        *arg1 = -0x7ffffffffffffffe;
        arg1[1] = result;
        arg1[4] = rax;
    }
    
    result
}
