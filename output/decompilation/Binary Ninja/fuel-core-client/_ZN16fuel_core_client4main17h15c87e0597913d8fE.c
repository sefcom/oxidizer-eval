
  int64_t fuel_core_client::main::h15c87e0597913d8f()

{
    char var_18 = 0;
    void var_418;
    tokio::runtime::builder::Builder::new_current_thread::h391fb842a92b00ec(&var_418);
    int16_t var_34b = 0x101;
    int64_t rbp;
    rbp = 1;
    void var_468;
    tokio::runtime::builder::Builder::build::hf094867463d9a51f(&var_468, &var_418);
    void var_4b8;
    core::result::Result$LT$T$C$E$GT$::expect::hbaf122cf264c35d8(&var_4b8, &var_468);
    void var_340;
    tokio::runtime::runtime::Runtime::block_on::hbb611f225d4a657a(&var_4b8, &var_340);
    core::ptr::drop_in_place$LT$tokio..runtime..runtime..Runtime$GT$::h8c13f257b322a1a7(&var_4b8);
    return core::ptr::drop_in_place$LT$tokio..runtime..builder..Builder$GT$::h8713507afeff55b1(
        &var_418);
}
