
  fn alacritty::display::SizeInfo::new::hc493ea048056a091(arg1: *mut i64, arg2: i32, arg3: u128 @ zmm0, arg4: u128 @ zmm1, arg5: f32, arg6: f32, arg7: u128 @ zmm4, arg8: u128 @ zmm5) -> i64

{
    let var_28: f32 = arg3;
    let var_2c: f32 = arg6;
    let var_30: f32 = arg4;
    let mut var_38_1: i32;
    
    if arg2 == 0
    {
        var_38_1 = arg7;
    }
    else
    {
        let zmm0: f32 = floorf(arg7);
        let mut zmm0_1: u128;
        zmm0_1 = fmodf(var_28 - (zmm0 + zmm0), arg5) * 0.5f;
        zmm0_1 = zmm0_1 + zmm0;
        var_38_1 = zmm0_1;
        let zmm0_2: f32 = floorf(arg8);
        arg4 = var_30;
        arg6 = var_2c;
        arg8 = fmodf(var_30 - (zmm0_2 + zmm0_2), var_2c) * 0.5f;
        arg8 = arg8 + zmm0_2;
    }
    
    arg3 = arg8 + arg8;
    arg4 = arg4 - arg3;
    arg4 = arg4 / arg6;
    let rax: i64 = arg4;
    arg3 = arg4 - 9.22337204e+18f;
    let mut rdi_2: i64 = (arg3 & rax >> 0x3f) | rax;
    
    if arg4 < 0f
    {
        rdi_2 = 0;
    }
    
    if arg4 > 1.8446743e+19f
    {
        rdi_2 = -1;
    }
    
    let rax_1: i64 = core::cmp::Ord::max::h20b6d33cbe488162(rdi_2, 1);
    arg3 = var_38_1;
    arg3 = arg3 + arg3;
    arg4 = var_28 - arg3;
    arg4 = arg4 / arg5;
    let rcx_2: i64 = arg4;
    arg3 = arg4 - 9.22337204e+18f;
    let mut rdi_5: i64 = (arg3 & rcx_2 >> 0x3f) | rcx_2;
    
    if arg4 < 0f
    {
        rdi_5 = 0;
    }
    
    if arg4 > 1.8446743e+19f
    {
        rdi_5 = -1;
    }
    
    let rax_2: i64 = core::cmp::Ord::max::h20b6d33cbe488162(rdi_5, 2);
    let var_38_2: f32 = floorf(var_38_1);
    let mut result: i64;
    let mut zmm0_4: i32;
    result = floorf(arg8);
    arg1[2] = var_28;
    *arg1.byte_offset(0x14) = var_30;
    arg1[3] = arg5;
    *arg1.byte_offset(0x1c) = var_2c;
    arg1[4] = var_38_2;
    *arg1.byte_offset(0x24) = zmm0_4;
    *arg1 = rax_1;
    arg1[1] = rax_2;
    result
}
