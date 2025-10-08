
  int64_t uu_tail::follow::files::PathData::from_other_with_path::h24752379624f266e(void* arg1, void* arg2, int64_t arg3)

{
    uint64_t r14 = *(arg2 + 0xc8);
    void** const r12 = *(arg2 + 0xd0);
    void** const var_1a0 = r12;
    uint64_t r15 = r14;
    int32_t var_190;
    int32_t var_e0;
    
    if (!r14)
    {
        std::fs::File::open::h45183e62b5972047(&var_190, arg3);
        
        if (var_190 != 1)
        {
            int32_t var_18c;
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
    
    if (var_e0 != 2)
        memcpy(&var_190, &var_e0, 0xb0);
    else
    {
        var_190 = 2;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4975ed621f4cd7c(&var_e0);
    }
    
    uu_tail::follow::files::PathData::new::h86625b3b593f4467(arg1, r15, r12, &var_190, 
        *(arg2 + 0xb8), *(arg2 + 0xc0));
    
    if (!r14)
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h1ddfbf499f92a46c(0, var_1a0);
    
    /* tailcall */
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha5fed46387940267(arg2 + 0xb0);
}
