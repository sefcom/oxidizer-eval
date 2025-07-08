
  int64_t* uu_cp::localize_to_target::hdd63077be4e3b6f7(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, uint64_t arg7)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t rax_2;
    int64_t rdx_1;
    rax_2 = std::path::Path::strip_prefix::h5d7e53b0b6c79402(arg4, arg5, arg2);
    int64_t rax_3;
    
    if (!rax_2)
        rax_3 = 7;
    else
    {
        std::path::Path::join::hb28666e9f3e91503(&arg1[1], arg6, arg7, rax_2);
        rax_3 = 0xd;
    }
    
    *arg1 = rax_3;
    return arg1;
}
