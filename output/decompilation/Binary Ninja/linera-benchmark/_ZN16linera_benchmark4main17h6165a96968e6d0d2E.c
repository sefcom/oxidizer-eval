
  int64_t linera_benchmark::main::h6165a96968e6d0d2()

{
    int64_t var_1010 = 0;
    char var_18 = 0;
    void var_fa8;
    tokio::runtime::builder::Builder::new_multi_thread::h05e5bcdd261c2fea(&var_fa8);
    int16_t var_edb = 0x101;
    int64_t rbp;
    rbp = 1;
    void var_ff8;
    tokio::runtime::builder::Builder::build::h9da2fc630f00e176(&var_ff8, &var_fa8);
    void var_1048;
    core::result::Result$LT$T$C$E$GT$::expect::ha0654862015e4090(&var_1048, &var_ff8);
    void var_ed0;
    int64_t result =
        tokio::runtime::runtime::Runtime::block_on::h1314c56ba4ee3a88(&var_1048, &var_ed0);
    core::ptr::drop_in_place$LT$tokio..runtime..runtime..Runtime$GT$::h6f8e4e55d6977168(&var_1048);
    core::ptr::drop_in_place$LT$tokio..runtime..builder..Builder$GT$::h99070c07bd1d22e3(&var_fa8);
    return result;
}
