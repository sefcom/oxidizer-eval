
  int64_t uu_rmdir::remove_single::h47fda4712a97f9b5(int64_t* arg1, int64_t arg2, int64_t arg3, int32_t arg4)

{
    if (arg4 & 0x10000)
    {
        int64_t rax_1;
        int64_t rdx;
        rax_1 = uucore::util_name::h074417a1e6395129();
        int64_t var_98 = rax_1;
        int64_t var_90_1 = rdx;
        int64_t var_68 = 1;
        int64_t var_60_1 = arg2;
        int64_t var_58_1 = arg3;
        char var_50_1 = 1;
        int64_t* var_88 = &var_98;
        int64_t (* var_80_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9055eac9438a8266;
        int64_t* var_78_1 = &var_68;
        int64_t (* var_70_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        void* const var_48 = &data_4de728;
        int64_t var_40_1 = 3;
        int64_t var_28_1 = 0;
        int64_t** var_38_1 = &var_88;
        int64_t var_30_1 = 2;
        std::io::stdio::_print::h5e446ff973c02de6(&var_48);
    }
    
    int64_t result = std::fs::remove_dir::h98701be05dccb4b0(arg2);
    
    if (result)
    {
        arg1[1] = arg2;
        arg1[2] = arg3;
    }
    
    *arg1 = result;
    return result;
}
