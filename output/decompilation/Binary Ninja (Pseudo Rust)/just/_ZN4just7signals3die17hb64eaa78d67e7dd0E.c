
  fn just::signals::die::hb64eaa78d67e7dd0(arg1: i64, arg2: i64) -> !

{
    let mut var_238: i64 = 0;
    let mut var_220: ();
    memset(&var_220, 0, 0x200);
    just::signals::die::_$u7b$$u7b$closure$u7d$$u7d$::h5c64d3748b64bdd1(&var_220, &var_238, 
        "error: src/signals.rsunexpected …", 7);
    just::signals::die::_$u7b$$u7b$closure$u7d$$u7d$::h5c64d3748b64bdd1(&var_220, &var_238, arg1, 
        arg2);
    just::signals::die::_$u7b$$u7b$closure$u7d$$u7d$::h5c64d3748b64bdd1(&var_220, &var_238, 
        &data_46e198, 1);
    let mut rax: i64;
    let mut rdx_2: u64;
    rax = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h54b2b72c1febbc46(0, var_238, &var_220, 0x200);
    let mut var_230: ();
    nix::unistd::write::hf31749d4a38336d7(&var_230, 2, rax, rdx_2);
    std::process::abort::h1e17b3ed8336d17d();
    /* no return */
}
