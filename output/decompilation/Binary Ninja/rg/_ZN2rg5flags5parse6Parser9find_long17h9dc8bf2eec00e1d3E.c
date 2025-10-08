
  int64_t rg::flags::parse::Parser::find_long::h9dc8bf2eec00e1d3(int64_t* arg1, void* arg2, int64_t* arg3, uint64_t arg4)

{
    int64_t rax;
    int64_t var_28 = rax;
    char rax_1;
    int64_t rdx_1;
    rax_1 = rg::flags::parse::FlagMap::find::hdf23bd2dbf42aadc(arg2 + 0x18, arg3, arg4);
    
    if (!(rax_1 & 1))
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(arg1, arg3, arg4);
    
    int64_t rsi_1 = *(arg2 + 0x10);
    
    if (rdx_1 >= rsi_1)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(rdx_1, rsi_1);
        /* no return */
    }
    
    int64_t result = rdx_1 * 0x28 + *(arg2 + 8);
    arg1[1] = result;
    *arg1 = -0x8000000000000000;
    return result;
}
