
  fn uu_uniq::open_input_file::h792d730de2d63225(arg1: *mut i64, arg2: i64, arg3: u64) -> *mut i64

{
    let mut rax_1: i8;
    
    if arg2 != 0
    {
        rax_1 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h34f4df7d1e205d5a(arg2, arg3, "-", 1);
    }
    
    let mut rax_3: *mut i64;
    let mut rcx: *mut *mut c_void;
    let mut rdx_1: i64;
    let mut var_50: *mut c_void;
    
    if arg2 != 0 && rax_1 == 0
    {
        std::fs::File::open::h5b9f23cfe6e73f37(&var_50, arg2);
        let mut var_60: *mut i64;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h36f5bf5261f39ece(&var_60, &var_50);
        rax_3 = var_60;
        let var_58: i32;
        
        if rax_3 == 0
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hcde770ac63110b2a(
                &var_50, 0x2000, var_58);
            rax_3 = alloc::boxed::Box$LT$T$GT$::new::h6a0535024ec58cb3(&var_50);
            rcx = &data_530570;
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
        std::io::stdio::stdin::h7215cc131abb55d8();
        var_50 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
        let mut rax_2: *mut i32;
        let mut rdx: i8;
        rax_2 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&var_50);
        rax_3 = alloc::boxed::Box$LT$T$GT$::new::he30472a92a05c52c(rax_2, rdx & 1);
        rcx = &data_5305f8;
        rdx_1 = 0;
    }
    arg1[1] = rax_3;
    arg1[2] = rcx;
    *arg1 = rdx_1;
    arg1
}
