
  fn uu_tail::follow::files::FileHandling::update_metadata::h25061ac57dde0fed(arg1: *mut c_void, arg2: *mut i8, arg3: u64, arg4: *mut i64) -> i64

{
    let mut r12: i64 = *arg4;
    let mut var_c8: ();
    
    if r12 != 2
    {
        memcpy(&var_c8, &arg4[1], 0xa8);
    }
    else
    {
        let mut var_178: i64;
        std::fs::metadata::h5c248dd9820946eb(&var_178, arg2);
        r12 = var_178;
        let mut var_170: ();
        
        if r12 != 2
        {
            memcpy(&var_c8, &var_170, 0xa8);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4975ed621f4cd7c(&var_178);
        }
    }
    
    let rax: *mut i64 =
        uu_tail::follow::files::FileHandling::get_mut::h1b58406c510d0063(arg1, arg2, arg3);
    *rax = r12;
    memcpy(&rax[1], &var_c8, 0xa8)
}
