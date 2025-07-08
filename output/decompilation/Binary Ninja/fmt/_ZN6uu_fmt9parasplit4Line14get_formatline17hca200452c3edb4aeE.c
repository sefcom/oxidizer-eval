
  int64_t uu_fmt::parasplit::Line::get_formatline::hca200452c3edb4ae(int128_t* arg1, int64_t* arg2)

{
    if (*arg2 == -0x8000000000000000)
    {
        char const (** const var_40)[0xb3] = &data_5265d0;
        int64_t var_38 = 1;
        int64_t var_30 = 8;
        int128_t var_28 = {0};
        core::panicking::panic_fmt::he12d0d7468628bb4(&var_40);
        /* no return */
    }
    
    int64_t result = arg2[6];
    arg1[3] = result;
    int128_t zmm0 = *arg2;
    int128_t zmm1 = *(arg2 + 0x10);
    arg1[2] = *(arg2 + 0x20);
    arg1[1] = zmm1;
    *arg1 = zmm0;
    return result;
}
