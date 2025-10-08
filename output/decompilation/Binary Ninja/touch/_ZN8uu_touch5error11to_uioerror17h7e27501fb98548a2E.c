
  int64_t uu_touch::error::to_uioerror::h7e27501fb98548a2(int64_t* arg1, int64_t arg2)

{
    char var_20;
    std::io::error::repr_bitpacked::decode_repr::h60fa891ec952a586(&var_20, arg2);
    uint64_t rax_1;
    int64_t rcx;
    
    if (!var_20)
    {
        int32_t var_1c;
        rax_1 = var_1c;
        rcx = 2;
    }
    else
    {
        rax_1 = std::io::error::Error::kind::h135fe00c4e7365f3(arg2);
        rcx = 3;
    }
    
    int64_t result = rax_1 << 0x20 | rcx;
    *arg1 = -0x8000000000000000;
    arg1[3] = result;
    return result;
}
