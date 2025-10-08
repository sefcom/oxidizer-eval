
  fn alacritty::display::window_size::h994bca71328498f8(arg1: i16, arg2: i16, arg3: i64, arg4: i64, arg5: u128 @ zmm0, arg6: f32, arg7: i32 @ zmm2) -> i64

{
    let var_30: f32 = arg5;
    arg5 = arg1;
    arg5 = arg5 * arg7;
    let var_24: i32 = floorf(arg5);
    let mut zmm0: u128;
    zmm0 = arg2;
    zmm0 = zmm0 * arg7;
    let mut zmm0_1: i32;
    let mut zmm2: i512;
    zmm0_1 = floorf(zmm0);
    let var_2c_1: f32 = zmm0_1;
    let rax_2: i64 = core::cmp::Ord::max::h20b6d33cbe488162(arg3, 2);
    
    if rax_2 < 0
    {
        zmm0_1 = (rax_2 & 1) | rax_2 >> 1;
        zmm0_1 = zmm0_1 + zmm0_1;
    }
    else
    {
        zmm0_1 = rax_2;
    }
    
    let var_30_1: f32 = var_30 * zmm0_1;
    let rax_5: i64 = core::cmp::Ord::max::h20b6d33cbe488162(arg4, 1);
    
    if rax_5 < 0
    {
        zmm0_1 = (rax_5 & 1) | rax_5 >> 1;
        zmm0_1 = zmm0_1 + zmm0_1;
    }
    else
    {
        zmm0_1 = rax_5;
    }
    
    zmm2 = var_30_1;
    let mut zmm0_3: f32;
    let mut zmm2_1: i512;
    zmm0_3 = floorf(fmaf());
    zmm2_1 = arg6 * zmm0_1;
    floorf(fmaf());
    let mut result: i64 = zmm0_3;
    
    if zmm0_3 < 0f
    {
        result = 0;
    }
    
    if zmm0_3 > 4.29496704e+09f
    {
        result = 0xffffffff;
    }
    
    result
}
