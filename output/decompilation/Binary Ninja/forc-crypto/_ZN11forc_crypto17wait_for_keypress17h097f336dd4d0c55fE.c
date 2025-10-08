
  char const (**)[0xaa] forc_crypto::wait_for_keypress::h097f336dd4d0c55f()

{
    char var_9 = 0;
    std::io::stdio::stdin::h9a05a2c3e7544b2a();
    void* var_8 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
    char const (** result)[0xaa] =
        _$LT$std..io..stdio..Stdin$u20$as$u20$std..io..Read$GT$::read_exact::h74d935bcef497a0b(
        &var_8, &var_9, 1);
    core::result::Result$LT$T$C$E$GT$::unwrap::h87d210cf8ae32c35(result);
    return result;
}
