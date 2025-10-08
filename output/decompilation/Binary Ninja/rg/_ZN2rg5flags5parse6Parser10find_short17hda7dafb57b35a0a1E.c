
  int64_t rg::flags::parse::Parser::find_short::hda7dafb57b35a0a1(int64_t* arg1, void* arg2, int32_t arg3)

{
    char rax_1;
    int64_t rdx;
    
    if (arg3 < 0x80)
    {
        char var_19 = arg3;
        rax_1 = rg::flags::parse::FlagMap::find::hdf23bd2dbf42aadc(arg2 + 0x18, &var_19, 1);
    }
    
    int64_t result;
    
    if (arg3 >= 0x80 || !(rax_1 & 1))
    {
        result = -0x7fffffffffffffff;
        arg1[1] = arg3;
    }
    else
    {
        int64_t rsi_1 = *(arg2 + 0x10);
        
        if (rdx >= rsi_1)
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(rdx, rsi_1);
            /* no return */
        }
        
        arg1[1] = rdx * 0x28 + *(arg2 + 8);
        result = -0x8000000000000000;
    }
    
    *arg1 = result;
    return result;
}
