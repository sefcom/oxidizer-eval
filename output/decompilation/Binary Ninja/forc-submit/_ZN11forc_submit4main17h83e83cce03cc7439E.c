
  int64_t forc_submit::main::h83e83cce03cc7439()

{
    char var_18 = 0;
    void var_548;
    tokio::runtime::builder::Builder::new_multi_thread::hfe1c7b1c7b65fbbe(&var_548);
    int16_t var_47b = 0x101;
    int64_t rbp;
    rbp = 1;
    void var_598;
    tokio::runtime::builder::Builder::build::hf3f5e94927d368c0(&var_598, &var_548);
    void var_5e8;
    core::result::Result$LT$T$C$E$GT$::expect::hf43ed9f9b64b4573(&var_5e8, &var_598);
    void var_470;
    tokio::runtime::runtime::Runtime::block_on::haa96747ed0a34a8e(&var_5e8, &var_470);
    core::ptr::drop_in_place$LT$tokio..runtime..runtime..Runtime$GT$::h137b51d965966beb(&var_5e8);
    return core::ptr::drop_in_place$LT$tokio..runtime..builder..Builder$GT$::h603fc1478d16ed2f(
        &var_548);
}
