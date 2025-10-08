
  int64_t change_log::main::hc72d7e90c4cd200e()

{
    int64_t var_1018 = 0;
    int64_t var_2018 = 0;
    int64_t var_3018 = 0;
    char var_39c8 = 0;
    void var_3ba8;
    tokio::runtime::builder::Builder::new_multi_thread::h235da01dc16fbfa2(&var_3ba8);
    int16_t var_3adb = 0x101;
    int64_t rbp;
    rbp = 1;
    void var_3bf8;
    tokio::runtime::builder::Builder::build::hb2dd4ab9909fd7b2(&var_3bf8, &var_3ba8);
    void var_3c48;
    core::result::Result$LT$T$C$E$GT$::expect::h90fb55d45514815a(&var_3c48, &var_3bf8);
    void var_3ad0;
    int64_t result;
    int64_t rdx;
    result = tokio::runtime::runtime::Runtime::block_on::ha90c3be4c448e423(&var_3c48, &var_3ad0);
    core::ptr::drop_in_place$LT$tokio..runtime..runtime..Runtime$GT$::h28f1aab92bd65b74(&var_3c48);
    core::ptr::drop_in_place$LT$tokio..runtime..builder..Builder$GT$::h05ec4047a7db46ff(&var_3ba8);
    return result;
}
