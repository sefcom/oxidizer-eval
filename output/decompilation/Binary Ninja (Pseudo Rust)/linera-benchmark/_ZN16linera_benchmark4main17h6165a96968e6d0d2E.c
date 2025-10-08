
  fn linera_benchmark::main::h6165a96968e6d0d2() -> i64

{
    let var_1010: i64 = 0;
    let var_18: i8 = 0;
    let mut var_fa8: ();
    tokio::runtime::builder::Builder::new_multi_thread::h05e5bcdd261c2fea(&var_fa8);
    let var_edb: i16 = 0x101;
    let mut rbp: i64;
    rbp = 1;
    let mut var_ff8: ();
    tokio::runtime::builder::Builder::build::h9da2fc630f00e176(&var_ff8, &var_fa8);
    let mut var_1048: ();
    core::result::Result$LT$T$C$E$GT$::expect::ha0654862015e4090(&var_1048, &var_ff8);
    let mut var_ed0: ();
    let result: i64 =
        tokio::runtime::runtime::Runtime::block_on::h1314c56ba4ee3a88(&var_1048, &var_ed0);
    core::ptr::drop_in_place$LT$tokio..runtime..runtime..Runtime$GT$::h6f8e4e55d6977168(&var_1048);
    core::ptr::drop_in_place$LT$tokio..runtime..builder..Builder$GT$::h99070c07bd1d22e3(&var_fa8);
    result
}
