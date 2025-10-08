
  int64_t linera_schema_export::main::h833b543dc519459f()

{
    void var_e0;
    tokio::runtime::builder::Builder::new_multi_thread::h05e5bcdd261c2fea(&var_e0);
    int16_t var_13 = 0x101;
    void var_130;
    tokio::runtime::builder::Builder::build::h9da2fc630f00e176(&var_130, &var_e0);
    void var_180;
    core::result::Result$LT$T$C$E$GT$::expect::h44ad070c8b78a13f(&var_180, &var_130);
    int64_t result = tokio::runtime::runtime::Runtime::block_on::hfcbf2a4ee6e413b4(&var_180, 0);
    core::ptr::drop_in_place$LT$tokio..runtime..runtime..Runtime$GT$::ha458387a869cf3c2(&var_180);
    core::ptr::drop_in_place$LT$tokio..runtime..builder..Builder$GT$::h8895b506b55d7767(&var_e0);
    return result;
}
