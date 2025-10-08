
  fn uu_tail::follow::files::PathData::from_other_with_path::h24752379624f266e(arg1: *mut c_void, arg2: *mut c_void, arg3: i64) -> i64

{
    let r14: u64 = *arg2.byte_offset(0xc8);
    let mut r12: *mut *mut c_void = *arg2.byte_offset(0xd0);
    let var_1a0: *mut *mut c_void = r12;
    let mut r15: u64 = r14;
    let mut var_190: i32;
    let mut var_e0: i32;
    
    if r14 == 0
    {
        std::fs::File::open::h45183e62b5972047(&var_190, arg3);
        
        if var_190 != 1
        {
            let var_18c: i32;
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h293b79a640eb5f10(
                &var_e0, var_18c);
            r15 = alloc::boxed::Box$LT$T$GT$::new::hf1e01b4c89005b4b(&var_e0);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h1d555ffd127b633f(&var_190);
            r15 = 0;
        }
        
        r12 = &data_573408;
    }
    
    std::fs::metadata::h5c248dd9820946eb(&var_e0, arg3);
    
    if var_e0 != 2
    {
        memcpy(&var_190, &var_e0, 0xb0);
    }
    else
    {
        var_190 = 2;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4975ed621f4cd7c(&var_e0);
    }
    
    uu_tail::follow::files::PathData::new::h86625b3b593f4467(arg1, r15, r12, &var_190, 
        *arg2.byte_offset(0xb8), *arg2.byte_offset(0xc0));
    
    if r14 == 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h1ddfbf499f92a46c(0, var_1a0);
    }
    
    /* tailcall */
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha5fed46387940267(arg2.byte_offset(0xb0))
}
