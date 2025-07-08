
  int64_t* uu_cksum::handle_tag_text_binary_flags::h54d38c67ed693625(int64_t* arg1, void* arg2)

{
    char rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        arg2, "untagged0", 8);
    char rax_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "tagbinary0.0.28{} [OPTIONS] [FIL…", 3);
    char rax_2 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "binary0.0.28{} [OPTIONS] [FILE].…", 6);
    void var_48;
    std::env::args_os::h433b833009c91492(&var_48);
    void var_60;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h1b0607e581fae2c2(&var_60, &var_48);
    char r14 = rax_1 | (rax ^ 1);
    int64_t var_58;
    int64_t var_50;
    char r15_1 = rax_2 & ((uu_cksum::had_reset::h64707811948cf7fa(var_58, var_50) | r14) ^ 1);
    arg1[1] = r14;
    *(arg1 + 9) = r15_1;
    *arg1 = 0;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h821faefc0bb30ceb(&var_60);
    return arg1;
}
