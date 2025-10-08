
  int64_t uu_cp::platform::linux::check_sparse_detection::hf45a87016948019f(char* arg1, int64_t arg2)

{
    int32_t var_c0;
    std::fs::File::open::h87ebb42518eeb9ff(&var_c0, arg2);
    int64_t result;
    
    if (var_c0 == 1)
    {
        *(arg1 + 8) = result;
        *arg1 = 1;
        return result;
    }
    
    int32_t fd;
    int32_t fd_1 = fd;
    std::fs::File::metadata::h5e84e533705f8c98(&var_c0, &fd_1);
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
    return core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd);
}
