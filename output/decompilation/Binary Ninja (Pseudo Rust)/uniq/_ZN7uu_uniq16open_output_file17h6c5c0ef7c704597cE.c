
  fn uu_uniq::open_output_file::h6c5c0ef7c704597c(arg1: *mut i64, arg2: i64, arg3: u64) -> *mut i64

{
    let mut rax_1: i8;
    
    if arg2 != 0
    {
        rax_1 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h34f4df7d1e205d5a(arg2, arg3, "-", 1);
    }
    
    let mut rax_3: *mut i64;
    let mut rcx: *mut *mut c_void;
    let mut rdx: i64;
    let mut var_40: *mut i64;
    
    if arg2 != 0 && rax_1 == 0
    {
        std::fs::File::create::hde7652c601917767(&var_40, arg2);
        let mut var_50: *mut i64;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h09998b69f307355c(&var_50, &var_40);
        rax_3 = var_50;
        let var_48: i32;
        
        if rax_3 == 0
        {
            std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h1113dda0f4545092(
                &var_40, 0x2000, var_48);
            rax_3 = alloc::boxed::Box$LT$T$GT$::new::h8ba536df269a656b(&var_40);
            rcx = &data_530680;
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
        std::io::stdio::stdout::h077da66234850927();
        var_40 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
        rax_3 = alloc::boxed::Box$LT$T$GT$::new::hde928dde2dc59f44(
            std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_40));
        rcx = &data_5306d0;
        rdx = 0;
    }
    arg1[1] = rax_3;
    arg1[2] = rcx;
    *arg1 = rdx;
    arg1
}
