
  int64_t firecracker::_::_$LT$impl$u20$core..fmt..Display$u20$for$u20$firecracker..ResizeFdTableError$GT$::fmt::h9119a7abbd9ad688(int64_t* arg1, int64_t* arg2)

{
    int64_t rax = *arg1;
    void** const rax_1;
    
    if (!rax)
        rax_1 = &data_7a45d8;
    else if (rax != 1)
        rax_1 = &data_7a45b8;
    else
        rax_1 = &data_7a45c8;
    
    void** const var_30 = rax_1;
    int64_t var_28 = 1;
    int64_t var_20 = 8;
    int128_t var_18 = {0};
    return core::fmt::Formatter::write_fmt::h80c932efe9b76eb7(*arg2, arg2[1], &var_30);
}
