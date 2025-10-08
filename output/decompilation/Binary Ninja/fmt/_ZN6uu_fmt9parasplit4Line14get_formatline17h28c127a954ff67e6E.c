
  int64_t uu_fmt::parasplit::Line::get_formatline::h28c127a954ff67e6(int128_t* arg1, int64_t* arg2)

{
    if (0 + -(*arg2))
    {
        void** const var_40 = &data_4f0458;
        int64_t var_38 = 1;
        int64_t var_30 = 8;
        int128_t var_28 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_40);
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
