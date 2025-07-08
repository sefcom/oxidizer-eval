
  fn uu_expand::open::h447e326a625c2cbf(arg1: *mut i64, arg2: i64, arg3: u64) -> i64

{
    let mut rax_1: *mut i64;
    let mut rcx: *mut c_void;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h93b642f2c60b0d07(arg2, arg3, "- --tabs=0.0.28Convert tabs in e…", 1) == 0
    {
        let mut var_30: ();
        std::fs::File::open::h7a18960032b2623a(&var_30, arg2);
        let mut result_1: i64;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::he232720af68fd4be(&result_1, &var_30);
        let result: i64 = result_1;
        let var_38: i32;
        
        if result != 0
        {
            arg1[1] = result;
            arg1[2] = var_38;
            *arg1 = 0;
            return result;
        }
        
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::h092a5431f0b59057(var_38);
        rcx = &data_51cdc0;
    }
    else
    {
        std::io::stdio::stdin::h7215cc131abb55d8();
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::h038c1d0fe051ec46(
            &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
        rcx = &data_51ce18;
    }
    
    /* tailcall */
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::he6e2f9fcb356c1db(arg1, 
        0x2000, rax_1, rcx)
}
