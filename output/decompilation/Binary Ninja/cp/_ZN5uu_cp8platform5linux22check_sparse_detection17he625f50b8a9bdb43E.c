
  int64_t uu_cp::platform::linux::check_sparse_detection::he625f50b8a9bdb43(char* arg1)

{
    int32_t var_c0;
    int64_t rsi;
    std::fs::File::open::h2ade805364297b3f(&var_c0, rsi);
    int64_t result;
    
    if (var_c0)
    {
        *(arg1 + 8) = result;
        *arg1 = 1;
        return result;
    }
    
    int32_t fd;
    int32_t fd_1 = fd;
    std::fs::File::metadata::he899a18112e6f19e(&var_c0, &fd_1);
    int64_t var_70;
    int64_t var_60;
    
    if (var_c0 == 2)
    {
        *(arg1 + 8) = result;
        *arg1 = 1;
    }
    else if (var_60 >= var_70 >> 9)
        *arg1 = 0;
    else
    {
        arg1[1] = 1;
        *arg1 = 0;
    }
    return core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd);
}
