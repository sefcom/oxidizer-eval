
  int64_t uu_touch::error::to_uioerror::had05960f9149df06(int64_t* arg1, int64_t arg2)

{
    char var_20;
    std::io::error::repr_bitpacked::decode_repr::h64152757b01d7bff(&var_20, arg2);
    int64_t rax_4;
    int64_t rcx;
    
    switch (var_20)
    {
        case 0:
        {
            int32_t var_1c;
            rax_4 = var_1c;
            rcx = 2;
            break;
        }
        case 1:
        case 2:
        case 3:
        {
            rax_4 = std::io::error::Error::kind::hb2ff5fa058639b3d(arg2);
            rcx = 3;
            break;
        }
    }
    
    int64_t result = rax_4 << 0x20 | rcx;
    *arg1 = -0x8000000000000000;
    arg1[3] = result;
    return result;
}
