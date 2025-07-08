
  fn uu_cksum::handle_tag_text_binary_flags::h54d38c67ed693625(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "untagged0", 8);
    let rax_1: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "tagbinary0.0.28{} [OPTIONS] [FIL…", 3);
    let rax_2: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "binary0.0.28{} [OPTIONS] [FILE].…", 6);
    let mut var_48: ();
    std::env::args_os::h433b833009c91492(&var_48);
    let mut var_60: ();
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h1b0607e581fae2c2(&var_60, &var_48);
    let r14: i8 = rax_1 | (rax ^ 1);
    let var_58: i64;
    let var_50: i64;
    let r15_1: i8 = rax_2 & ((uu_cksum::had_reset::h64707811948cf7fa(var_58, var_50) | r14) ^ 1);
    arg1[1] = r14;
    *arg1.byte_offset(9) = r15_1;
    *arg1 = 0;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h821faefc0bb30ceb(&var_60);
    arg1
}
