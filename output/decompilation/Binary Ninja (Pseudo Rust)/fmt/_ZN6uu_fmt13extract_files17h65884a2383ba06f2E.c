
  fn uu_fmt::extract_files::h65884a2383ba06f2(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = clap_builder::parser::matches::arg_matches::ArgMatches::index_of::hc3c8b487726d2353(arg2, 
        "fileswidthinvalid width: src/uu/…", 5);
    rax = rax != 0;
    let mut var_17a: bool = rdx == 1 & rax;
    let mut var_160: i128;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h09abd7b1f5ddbade(
        &var_160, arg2, "fileswidthinvalid width: src/uu/…", 5);
    let mut var_f8: ();
    clap_builder::parser::error::MatchesError::unwrap::h7cc34044724f6ef1(&var_f8, 
        "fileswidthinvalid width: src/uu/…", 5, &var_160);
    let mut var_100: i64 = 1;
    let var_b8: i64 = 0;
    let var_78: i64 = 0;
    let var_38: i64 = 0;
    let mut var_179: ();
    let var_30: *mut c_void = &var_179;
    let var_28: *mut bool = &var_17a;
    let mut var_178: i64;
    core::iter::adapters::try_process::h0378d5530d4cfb57(&var_178, &var_100);
    let mut rdi_4: i64;
    rdi_4 = var_178 == -0x8000000000000000;
    let mut var_188: ();
    
    if core::result::Result$LT$T$C$E$GT$::is_ok_and::h29c70ed0bca145e8(rdi_4, 
        (&var_188).byte_offset(rdi_4 << 3).byte_offset(0x10)) == 0
    {
        let var_168: i64;
        arg1[1] = var_168;
        *arg1 = var_178;
    }
    else
    {
        let rax_2: *mut i128 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 0x18);
        
        if rax_2 == 0
        {
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h5bbd8c4ce611c1c9(&var_160, 
            "-read error\nfileswidthinvalid w…", 1);
        let var_150: i64;
        let var_108_1: i64 = var_150;
        let zmm0_1: i128 = var_160;
        let var_118_1: i128 = zmm0_1;
        rax_2[1] = var_150;
        *rax_2 = zmm0_1;
        alloc::slice::hack::into_vec::hec8791858ac76d0c(&var_160, rax_2, 1);
        arg1[1] = var_150;
        *arg1 = var_160;
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h73b975fc798ab75a(&var_178);
    }
    
    arg1
}
