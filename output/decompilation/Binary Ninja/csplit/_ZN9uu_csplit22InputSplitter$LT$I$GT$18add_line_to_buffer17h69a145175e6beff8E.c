
  int128_t* uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h69a145175e6beff8(int64_t* arg1, int64_t* arg2, int64_t arg3, int128_t* arg4)

{
    int128_t* result;
    int64_t var_58;
    
    if (!arg2[0xb])
    {
        if (arg2[2] >= arg2[0xa])
        {
            alloc::vec::Vec$LT$T$C$A$GT$::remove::ha187cc186cdc8061(&var_58, arg2, 0);
            int64_t var_40_3 = arg4[1];
            int128_t var_50_3 = *arg4;
            var_58 = arg3;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h59c271c22061c5db(arg2, &var_58);
            int64_t var_40;
            *var_50_3[8] = var_40;
            int128_t var_50;
            var_58 = var_50;
            return core::result::Result$LT$T$C$E$GT$::unwrap::hc4cee2f6f31529f0(arg1, &var_58);
        }
        
        int64_t var_40_2 = arg4[1];
        int128_t var_50_2 = *arg4;
        var_58 = arg3;
        result = alloc::vec::Vec$LT$T$C$A$GT$::push::h59c271c22061c5db(arg2, &var_58);
    }
    else
    {
        int64_t var_40_1 = arg4[1];
        int128_t var_50_1 = *arg4;
        var_58 = arg3;
        result = alloc::vec::Vec$LT$T$C$A$GT$::insert::hfd2eab809c60b3f4(arg2, 0, &var_58);
    }
    *arg1 = -0x8000000000000000;
    return result;
}
