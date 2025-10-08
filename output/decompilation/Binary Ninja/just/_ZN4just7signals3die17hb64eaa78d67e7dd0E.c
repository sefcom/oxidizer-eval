
  void just::signals::die::hb64eaa78d67e7dd0(int64_t arg1, int64_t arg2) __noreturn

{
    int64_t var_238 = 0;
    void var_220;
    memset(&var_220, 0, 0x200);
    just::signals::die::_$u7b$$u7b$closure$u7d$$u7d$::h5c64d3748b64bdd1(&var_220, &var_238, 
        "error: src/signals.rsunexpected …", 7);
    just::signals::die::_$u7b$$u7b$closure$u7d$$u7d$::h5c64d3748b64bdd1(&var_220, &var_238, arg1, 
        arg2);
    just::signals::die::_$u7b$$u7b$closure$u7d$$u7d$::h5c64d3748b64bdd1(&var_220, &var_238, 
        &data_46e198, 1);
    int64_t rax;
    uint64_t rdx_2;
    rax = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h54b2b72c1febbc46(0, var_238, &var_220, 0x200);
    void var_230;
    nix::unistd::write::hf31749d4a38336d7(&var_230, 2, rax, rdx_2);
    std::process::abort::h1e17b3ed8336d17d();
    /* no return */
}
