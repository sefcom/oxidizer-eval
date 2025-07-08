
  fn uu_tail::follow::files::FileHandling::update_metadata::h4aaaeb16ccacaf37(arg1: *mut c_void, arg2: *mut i8, arg3: size_t, arg4: *mut i64) -> i64

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
        std::fs::metadata::h5a76b0b01e9dc15d(&var_178, arg2);
        r12 = var_178;
        let mut var_170: i64;
        
        if r12 != 2
        {
            memcpy(&var_c8, &var_170, 0xa8);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(var_170);
        }
    }
    
    let rax: *mut c_void =
        uu_tail::follow::files::FileHandling::get_mut::h1a80ce1ee4fcf7dc(arg1, arg2, arg3);
    *rax = r12;
    memcpy(rax.byte_offset(8), &var_c8, 0xa8)
}
