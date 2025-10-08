
  fn fd::cli::Opts::normalize_path::h71e0e83f385b24ab(arg1: *mut i128, arg2: i8, arg3: i64, arg4: u64) -> i64

{
    let mut var_b0: i64;
    let mut var_70: ();
    
    if (arg2 & 1) != 0
    {
        normpath::imp::normalize::h59e357bf70bb8f7b(&var_70, arg3);
        core::result::Result$LT$T$C$E$GT$::unwrap::hbbd6404ac53aa6a5(&var_b0, &var_70);
        let var_a8: *mut i8;
        let var_a0: u64;
        fd::filesystem::absolute_path::h431e4f2ac32a5803(&var_70, var_a8, var_a0);
        core::result::Result$LT$T$C$E$GT$::unwrap::hbed88187ad4fe09d(arg1, &var_70);
        /* tailcall */
        return core::ptr::drop_in_place$LT$fd..hyperlink..PathUrl$GT$::h2d976cf0ed371e6c(var_b0, 
            var_a8);
    }
    
    std::path::Path::components::hd0346d362206f2e9(&var_b0, arg3, arg4);
    std::path::Path::components::hd0346d362206f2e9(&var_70, ".//rustc/bf64d66bd58719fac2585ea…", 1);
    
    if _$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd9623c64792f17b1(
        &var_b0, &var_70) == 0
    {
        /* tailcall */
        return std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(arg1, arg3, 
            arg4);
    }
    
    /* tailcall */
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc59efc0c75b13120(arg1, "./cannot parse integer from empt…", 2)
}
