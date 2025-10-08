
  fn uu_truncate::file_truncate::ha430ef778d6571e6(arg1: i64, arg2: i64, arg3: i8, arg4: i64) -> u64

{
    let mut var_e0: i64;
    std::fs::metadata::h460bc532d18d3302(&var_e0, arg1);
    let r15: i64 = var_e0;
    let mut rdi_1: i64 = 2;
    let mut var_158: i32;
    let mut fd_1: i32;
    let mut var_d8: i64;
    
    if r15 != 2
    {
        let var_a8: i32;
        
        if (0xf000 & var_a8) == 0x1000
        {
            fd_1 = 0;
            let var_120_1: i64 = arg1;
            let var_118_1: i64 = arg2;
            let var_110_1: i8 = 1;
            let mut var_108: *mut i32 = &fd_1;
            let var_100_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_158 = &data_4e4020;
            let var_150_1: i64 = 2;
            let var_138_1: i64 = 0;
            let var_148_1: *mut *mut i32 = &var_108;
            let mut var_140_1: i64 = 1;
            let mut var_f8: i128;
            core::option::Option$LT$T$GT$::map_or_else::hccc437e8064ad343(&var_f8, &var_158);
            var_140_1 = 1;
            var_158 = var_f8;
            let var_e8: i64;
            let var_148_2: i64 = var_e8;
            let result: u64 = alloc::boxed::Box$LT$T$GT$::new::h0fcae278b0f73f4a(&var_158);
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hd1c66196369792c3(r15, var_d8);
            return result;
        }
        
        rdi_1 = r15;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hd1c66196369792c3(rdi_1, var_d8);
    var_e0 = 0x1b600000000;
    var_d8 = 0;
    *var_d8[4] = 0;
    *var_d8[1] = 1;
    *var_d8[4] = arg3;
    std::fs::OpenOptions::open::h4717b18b07f3e237(&var_158, &var_e0, arg1);
    let mut r15_1: i64;
    
    if var_158 != 1
    {
        let fd: i32;
        fd_1 = fd;
        r15_1 = std::fs::File::set_len::h8625c3bc8a96431d(&fd_1, arg4);
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h3fd183804f862cdc(fd);
    }
    else
    {
        let var_150: i64;
        r15_1 = var_150;
        
        if arg3 == 0 && std::io::error::Error::kind::h135fe00c4e7365f3(r15_1) == 0
        {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha9e3f05fa01eaf64(r15_1);
            r15_1 = 0;
        }
    }
    
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd29365e4fd14d88e(r15_1)
}
