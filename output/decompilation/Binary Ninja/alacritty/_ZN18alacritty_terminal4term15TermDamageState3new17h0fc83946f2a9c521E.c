
  int128_t* alacritty_terminal::term::TermDamageState::new::h0fc83946f2a9c521(int128_t* arg1, int64_t arg2)

{
    int64_t var_40 = arg2;
    int64_t var_30 = 0;
    int64_t rdx;
    int64_t var_28 = rdx;
    int64_t* var_38 = &var_40;
    int128_t var_20;
    core::iter::traits::iterator::Iterator::collect::h28cc7b857207be39(&var_20, &var_38);
    int128_t zmm0 = var_20;
    *(arg1 + 0x28) = 1;
    *arg1 = zmm0;
    int64_t var_10;
    arg1[1] = var_10;
    *(arg1 + 0x18) = 0;
    arg1[2] = 0;
    return arg1;
}
