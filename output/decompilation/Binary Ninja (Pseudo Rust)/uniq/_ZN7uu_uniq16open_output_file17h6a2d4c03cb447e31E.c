
  fn uu_uniq::open_output_file::h6a2d4c03cb447e31(arg1: *mut i64, arg2: i64, arg3: u64) -> *mut i64

{
    let mut rax_1: i8;
    
    if arg2 != 0
    {
        rax_1 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h679c5716f854e642(arg2, arg3, "-Could not open ", 1);
    }
    
    let mut rax_3: u64;
    let mut rcx: *mut *mut c_void;
    let mut rdx: i64;
    let mut var_40: *mut i64;
    
    if arg2 != 0 && rax_1 == 0
    {
        std::fs::File::create::h5f141230072c7c86(&var_40, arg2);
        let mut var_50: u64;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc64994a9983278f5(&var_50, &var_40);
        rax_3 = var_50;
        let var_48: i32;
        
        if rax_3 == 0
        {
            std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hda9b44c021880ad4(
                &var_40, var_48);
            rax_3 = alloc::boxed::Box$LT$T$GT$::new::h6a1ac761650a84ad(&var_40);
            rcx = &data_4f5a88;
            rdx = 0;
        }
        else
        {
            rcx = var_48;
            rdx = 1;
        }
    }
    else
    {
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        var_40 = &std::io::stdio::STDOUT::h411b213c5c9add46;
        rax_3 = alloc::boxed::Box$LT$T$GT$::new::h9d32404ba33e3096(
            std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_40));
        rcx = &data_4f5ad8;
        rdx = 0;
    }
    arg1[1] = rax_3;
    arg1[2] = rcx;
    *arg1 = rdx;
    arg1
}
