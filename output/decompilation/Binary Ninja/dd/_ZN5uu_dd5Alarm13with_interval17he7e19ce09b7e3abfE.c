
  int128_t** uu_dd::Alarm::with_interval::he7e19ce09b7e3abf(int128_t** arg1)

{
    int64_t var_60 = 1;
    int64_t var_58 = 1;
    char var_50 = 0;
    int128_t* var_68 = alloc::boxed::Box$LT$T$GT$::new::hff327b290596ae78(&var_60);
    void* var_38 = alloc::sync::Arc$LT$T$C$A$GT$::downgrade::h3187bea099a37cc6(&var_68);
    int64_t var_30 = 1;
    int32_t var_28 = 0;
    var_50 = -0x8000000000000000;
    var_60 = 0;
    void var_20;
    std::thread::Builder::spawn_unchecked::h548e90d968e6b112(&var_20, &var_60);
    core::result::Result$LT$T$C$E$GT$::expect::hae1648ffdc1cd49b(&var_60, &var_20);
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h34f9f794f4847285(
        &var_60);
    int128_t* rax_2 = var_68;
    arg1[1] = 1;
    arg1[2] = 0;
    *arg1 = rax_2;
    return arg1;
}
