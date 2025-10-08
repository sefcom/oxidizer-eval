
  fn uu_fmt::extract_files::h7eb5920ec72ef96b(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut rax: i8;
    let mut rdx: i64;
    rax = clap_builder::parser::matches::arg_matches::ArgMatches::index_of::h533e2cba337d4042(arg2, 
        "filesa negative number should be…", 5);
    let mut var_162: bool = rdx == 1 & rax;
    let mut var_68: i128;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h81c090d18757eba4(
        &var_68, arg2);
    let mut var_140: ();
    clap_builder::parser::error::MatchesError::unwrap::h09395f96ef88f6e5(&var_140, &var_68);
    let mut var_148: i64 = 1;
    let var_100: i64 = 0;
    let var_c0: i64 = 0;
    let var_80: i64 = 0;
    let mut var_161: ();
    let var_78: *mut c_void = &var_161;
    let var_70: *mut bool = &var_162;
    let mut var_160: i64;
    core::iter::traits::iterator::Iterator::collect::h351c737f9a1f280f(&var_160, &var_148);
    let mut rdi_4: i64;
    rdi_4 = 0 + -(var_160);
    let mut var_168: ();
    
    if core::result::Result$LT$T$C$E$GT$::is_ok_and::h78e54e6f75f967bc(rdi_4, 
        (&var_168).byte_offset(rdi_4 << 3).byte_offset(8)) == 0
    {
        let var_150: i64;
        arg1[2] = var_150;
        *arg1 = var_160;
    }
    else
    {
        let rax_2: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
        
        if rax_2 == 0
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7c69efe601866818(&var_148, "-read errorcannot open  for read…", 1);
        let var_138: i64;
        let var_58_1: i64 = var_138;
        let zmm0_1: i128 = var_148;
        var_68 = zmm0_1;
        *(rax_2 + 0x10) = var_138;
        *rax_2 = zmm0_1;
        *arg1 = 1;
        arg1[1] = rax_2;
        arg1[2] = 1;
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hd5ff8bdd337469f7(&var_160);
    }
    
    arg1
}
