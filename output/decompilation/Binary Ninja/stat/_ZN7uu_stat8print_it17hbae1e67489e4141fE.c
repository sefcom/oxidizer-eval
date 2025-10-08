
  void* uu_stat::print_it::hbae1e67489e4141f(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, uint64_t arg5)

{
    uint8_t r8_1 = arg2 >> 0x10;
    bool rax = !(arg2 & 0x100) | r8_1;
    int64_t r9 = *arg1;
    int64_t r15 = 0;
    int32_t var_50 = arg2;
    
    if (r9 < -0x7ffffffffffffffa)
        r15 = r9 - 0x7fffffffffffffff;
    
    uint16_t var_4c = arg2 >> 0x20;
    
    switch (r15)
    {
        case 0:
        {
            /* tailcall */
            return uu_stat::print_str::h6ec1c07eb7d5dc3a(arg1[1], arg1[2], r8_1, arg3, arg4, arg5);
        }
        case 1:
        {
            return uu_stat::print_integer::h03aa5a8d7234e609(arg1[1], &var_50, arg3, arg4, arg5, 
                rax & 1);
            break;
        }
        case 2:
        {
            return uu_stat::print_unsigned::h6ebed2a96194f8e4(arg1[1], r8_1, arg2 >> 0x28, arg3, 
                arg4, arg5, rax & 1);
            break;
        }
        case 3:
        {
            return uu_stat::print_unsigned_hex::h3195c7c2eb8d9057(arg1[1], arg2, r8_1, arg3, arg4, 
                arg5, rax & 1);
            break;
        }
        case 4:
        {
            return uu_stat::print_unsigned_oct::h89c345206a3f2ecd(arg1[1], arg2, r8_1, arg3, arg4, 
                arg5, rax & 1);
            break;
        }
        case 5:
        {
            return uu_stat::print_float::h1938f14c785bf2a3(&var_50, arg3, arg4, arg5, rax & 1, 
                arg1[1]);
            break;
        }
        case 6:
        {
            void** const var_48 = &data_519ba0;
            int64_t var_40_1 = 1;
            int64_t var_38_1 = 8;
            int128_t var_30_1 = {0};
            return std::io::stdio::_print::h5e446ff973c02de6(&var_48);
            break;
        }
    }
}
