
  int64_t uu_fmt::parasplit::Line::get_noformatline::h86ff5ba6ba43aa31(int128_t* arg1, int64_t* arg2)

{
    if (*arg2 == -0x8000000000000000)
    {
        arg1[1] = arg2[3];
        *arg1 = *(arg2 + 8);
        char result = arg2[4];
        *(arg1 + 0x18) = result;
        return result;
    }
    
    void** const var_40 = &data_5265f8;
    int64_t var_38 = 1;
    int64_t var_30 = 8;
    int128_t var_28 = {0};
    core::panicking::panic_fmt::he12d0d7468628bb4(&var_40);
    /* no return */
}
