
  fn uu_truncate::file_truncate::h8689dfa8e5b80143(arg1: i64, arg2: i64, arg3: i8, arg4: i64) -> *mut i128

{
    let mut var_d0: i64;
    std::fs::metadata::h6368ec5e748c38e4(&var_d0, arg1);
    let rdi_1: i64 = var_d0;
    let mut var_148: i32;
    let mut fd_1: i32;
    let mut var_c8: i64;
    let var_98: i32;
    
    if rdi_1 != 2 && (0xf000 & var_98) == 0x1000
    {
        fd_1 = 0;
        let var_110_1: i64 = arg1;
        let var_108_1: i64 = arg2;
        let var_100_1: i8 = 1;
        let mut var_f8: *mut i32 = &fd_1;
        let var_f0_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_148 = &data_5165a0;
        let var_140_1: i64 = 2;
        let var_128_1: i64 = 0;
        let var_138_1: *mut *mut i32 = &var_f8;
        let mut var_130_1: i64 = 1;
        let mut var_e8: i128;
        core::option::Option$LT$T$GT$::map_or_else::ha526a84f6413e2dc(&var_e8, &var_148);
        var_130_1 = 1;
        var_148 = var_e8;
        let var_d8: i64;
        let var_138_2: i64 = var_d8;
        let result: *mut i128 = alloc::boxed::Box$LT$T$GT$::new::h2e09ae21cbeee3ec(&var_148);
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf10946d364a1ba5f(rdi_1, var_c8);
        return result;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf10946d364a1ba5f(rdi_1, var_c8);
    var_d0 = 0x1b600000000;
    var_c8 = 0;
    *var_c8[4] = 0;
    *var_c8[1] = 1;
    *var_c8[4] = arg3;
    std::fs::OpenOptions::open::h4c049ac57fc11c66(&var_148, &var_d0, arg1);
    let mut r15_2: i64;
    
    if var_148 == 0
    {
        let fd: i32;
        fd_1 = fd;
        r15_2 = std::fs::File::set_len::hd21acd2eeb028efb(&fd_1, arg4);
        core::ptr::drop_in_place$LT$std..fs..File$GT$::hb7323c6ad1fce92a(fd);
    }
    else
    {
        let var_140: i64;
        r15_2 = var_140;
        
        if std::io::error::Error::kind::hb2ff5fa058639b3d(r15_2) == 0 && arg3 == 0
        {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hbd0972a5eeb59076(r15_2);
            r15_2 = 0;
        }
    }
    
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd5342900d4cb632d(r15_2)
}
