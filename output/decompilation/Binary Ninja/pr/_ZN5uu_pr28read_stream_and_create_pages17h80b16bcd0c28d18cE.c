
  int64_t uu_pr::read_stream_and_create_pages::h80b16bcd0c28d18c(int128_t* arg1, int128_t* arg2)

{
    int64_t r12 = arg1[0x13];
    int64_t r13 = 1;
    
    if (*(arg1 + 0xd8) != -0x8000000000000000)
        r13 = *(arg1 + 0xf8);
    
    int64_t rax = uu_pr::lines_to_read_for_page::hb2ad53ca8343fd2c(arg1);
    int64_t var_c8 = arg2[3];
    int128_t var_d8 = arg2[2];
    int128_t var_e8 = arg2[1];
    int128_t var_f8 = *arg2;
    int64_t var_140 = 1;
    int64_t var_138 = 0;
    int64_t var_118 = 0;
    int64_t var_c0 = 0;
    int64_t var_b8 = r13;
    int64_t rdx;
    int64_t var_b0 = rdx;
    int64_t var_a8 = rax;
    int64_t var_a0 = 0;
    int64_t var_80 = 0;
    int64_t var_60 = 0;
    int64_t var_58 = r12;
    char var_50 = 0;
    char var_30 = 0;
    int128_t var_48 = *arg1;
    int64_t var_38 = r12;
    return alloc::boxed::Box$LT$T$GT$::new::hf465b4a863622154(&var_140);
}
