
  int64_t alacritty::display::SizeInfo::new::hc493ea048056a091(int64_t* arg1, int32_t arg2, uint128_t arg3 @ zmm0, uint128_t arg4 @ zmm1, float arg5, float arg6, uint128_t arg7 @ zmm4, uint128_t arg8 @ zmm5)

{
    float var_28 = arg3;
    float var_2c = arg6;
    float var_30 = arg4;
    int32_t var_38_1;
    
    if (!arg2)
        var_38_1 = arg7;
    else
    {
        float zmm0 = floorf(arg7);
        uint128_t zmm0_1;
        zmm0_1 = fmodf(var_28 - (zmm0 + zmm0), arg5) * 0.5f;
        zmm0_1 = zmm0_1 + zmm0;
        var_38_1 = zmm0_1;
        float zmm0_2 = floorf(arg8);
        arg4 = var_30;
        arg6 = var_2c;
        arg8 = fmodf(var_30 - (zmm0_2 + zmm0_2), var_2c) * 0.5f;
        arg8 = arg8 + zmm0_2;
    }
    
    arg3 = arg8 + arg8;
    arg4 = arg4 - arg3;
    arg4 = arg4 / arg6;
    int64_t rax = arg4;
    arg3 = arg4 - 9.22337204e+18f;
    int64_t rdi_2 = (arg3 & rax >> 0x3f) | rax;
    
    if (arg4 < 0f)
        rdi_2 = 0;
    
    if (arg4 > 1.8446743e+19f)
        rdi_2 = -1;
    
    int64_t rax_1 = core::cmp::Ord::max::h20b6d33cbe488162(rdi_2, 1);
    arg3 = var_38_1;
    arg3 = arg3 + arg3;
    arg4 = var_28 - arg3;
    arg4 = arg4 / arg5;
    int64_t rcx_2 = arg4;
    arg3 = arg4 - 9.22337204e+18f;
    int64_t rdi_5 = (arg3 & rcx_2 >> 0x3f) | rcx_2;
    
    if (arg4 < 0f)
        rdi_5 = 0;
    
    if (arg4 > 1.8446743e+19f)
        rdi_5 = -1;
    
    int64_t rax_2 = core::cmp::Ord::max::h20b6d33cbe488162(rdi_5, 2);
    float var_38_2 = floorf(var_38_1);
    int64_t result;
    int32_t zmm0_4;
    result = floorf(arg8);
    arg1[2] = var_28;
    *(arg1 + 0x14) = var_30;
    arg1[3] = arg5;
    *(arg1 + 0x1c) = var_2c;
    arg1[4] = var_38_2;
    *(arg1 + 0x24) = zmm0_4;
    *arg1 = rax_1;
    arg1[1] = rax_2;
    return result;
}
