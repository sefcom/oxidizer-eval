
  int64_t* uu_cp::localize_to_target::hb1878d723015ce03(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, uint64_t arg7)

{
    int64_t r15 = -0x7ffffffffffffffa;
    int64_t rax_1;
    int64_t rdx_1;
    rax_1 = std::path::Path::strip_prefix::hf232be0ca9110327(arg4, arg5, arg2);
    
    if (rax_1)
    {
        std::path::Path::join::h10fbe6df042abede(&arg1[1], arg6, arg7, rax_1);
        r15 = -0x7ffffffffffffff4;
    }
    
    *arg1 = r15;
    return arg1;
}
