
  int64_t* bat::input::Input::from_reader::h5c93c8a2e0344023(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_80 = arg2;
    int64_t var_88 = -0x7fffffffffffffff;
    int128_t var_70;
    bat::input::InputKind::description::hc1a183838fcaf6dc(&var_70, &var_88);
    arg1[0x13] = arg3;
    *(arg1 + 0x88) = var_88;
    *arg1 = 0;
    arg1[2] = -0x8000000000000000;
    *(arg1 + 0x28) = var_70;
    int128_t var_60;
    *(arg1 + 0x38) = var_60;
    int128_t var_50;
    *(arg1 + 0x48) = var_50;
    int128_t var_40;
    *(arg1 + 0x58) = var_40;
    int128_t var_30;
    *(arg1 + 0x68) = var_30;
    int128_t var_20;
    *(arg1 + 0x78) = var_20;
    return arg1;
}
