
  int128_t* uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h0772b428f360f01c(int64_t* arg1, int64_t* arg2, int64_t arg3, int128_t* arg4)

{
    int128_t* result;
    int64_t var_58;
    
    if (!arg2[0xb])
    {
        if (arg2[2] >= arg2[0xa])
        {
            alloc::vec::Vec$LT$T$C$A$GT$::remove::h1fd652b2cb545617(&var_58, arg2);
            int64_t var_40;
            int64_t var_28_1 = var_40;
            int128_t var_50;
            int128_t var_38 = var_50;
            var_58 = arg3;
            int128_t var_50_3 = *arg4;
            int64_t var_40_3 = arg4[1];
            alloc::vec::Vec$LT$T$C$A$GT$::push::hcf44091d9b41540a(arg2, &var_58);
            return core::result::Result$LT$T$C$E$GT$::unwrap::h93be4edd8ab7bad5(arg1, &var_38);
        }
        
        var_58 = arg3;
        int128_t var_50_2 = *arg4;
        int64_t var_40_2 = arg4[1];
        result = alloc::vec::Vec$LT$T$C$A$GT$::push::hcf44091d9b41540a(arg2, &var_58);
    }
    else
    {
        var_58 = arg3;
        int128_t var_50_1 = *arg4;
        int64_t var_40_1 = arg4[1];
        result = alloc::vec::Vec$LT$T$C$A$GT$::insert::he51302ddad578716(arg2, &var_58);
    }
    *arg1 = -0x8000000000000000;
    return result;
}
