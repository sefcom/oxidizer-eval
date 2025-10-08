
  fn uu_uniq::open_input_file::hce9e3218d9949fef(arg1: *mut i64, arg2: i64, arg3: u64) -> *mut i64

{
    let mut rax_1: i8;
    
    if arg2 != 0
    {
        rax_1 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h679c5716f854e642(arg2, arg3, "-Could not open ", 1);
    }
    
    let mut rax_3: u64;
    let mut rcx: *mut *mut c_void;
    let mut rdx_1: i64;
    let mut var_50: *mut c_void;
    
    if arg2 != 0 && rax_1 == 0
    {
        std::fs::File::open::h89bebe60b629907a(&var_50, arg2);
        let mut var_60: u64;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc64994a9983278f5(&var_60, &var_50);
        rax_3 = var_60;
        let var_58: i32;
        
        if rax_3 == 0
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha5cb902d0606ef3d(
                &var_50, var_58);
            rax_3 = alloc::boxed::Box$LT$T$GT$::new::hcfb3c24bb78fa996(&var_50);
            rcx = &data_4f5968;
            rdx_1 = 0;
        }
        else
        {
            rcx = var_58;
            rdx_1 = 1;
        }
    }
    else
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        var_50 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
        let mut rax_2: *mut i32;
        let mut rdx: i8;
        rax_2 = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&var_50);
        rax_3 = alloc::boxed::Box$LT$T$GT$::new::h9df9e3bedef2cae6(rax_2, rdx & 1);
        rcx = &data_4f59f0;
        rdx_1 = 0;
    }
    arg1[1] = rax_3;
    arg1[2] = rcx;
    *arg1 = rdx_1;
    arg1
}
