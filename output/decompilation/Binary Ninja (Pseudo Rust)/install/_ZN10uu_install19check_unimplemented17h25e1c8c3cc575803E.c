
  fn uu_install::check_unimplemented::h25e1c8c3cc575803(arg1: *mut c_void) -> u64

{
    let mut rdx: u64;
    let mut rsi: *const i8;
    let mut rdi: *mut c_void;
    let mut var_40: ();
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, 
        "preserve-context", 0x10) == 0
    {
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg1, "contextinnerUUsageErrormessagech…", 7) == 0
        {
            return 0;
        }
        
        rdi = &var_40;
        rsi = "--context, -ZOptions --target-di…";
        rdx = 0xd;
    }
    else
    {
        rdi = &var_40;
        rsi = "--preserve-context, -P--context,…";
        rdx = 0x16;
    }
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7990a55799cbd755(rdi, rsi, rdx);
    let mut var_48: i64 = 0;
    alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_48)
}
