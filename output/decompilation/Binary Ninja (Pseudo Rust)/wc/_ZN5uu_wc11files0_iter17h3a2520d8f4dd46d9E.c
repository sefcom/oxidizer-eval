
  fn uu_wc::files0_iter::h3a2520d8f4dd46d9(arg1: *mut i128, arg2: i32, arg3: *mut i128) -> i64

{
    let mut var_40: i128;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h378cf4981ccfb3db(&var_40, 
        arg2);
    let var_70: i128 = var_40;
    let rax: i64 = arg3[1];
    let zmm0: i128 = *arg3;
    let var_88: i128 = zmm0;
    let var_20: i128;
    arg1[4] = *var_20[8];
    let var_30: i128;
    arg1[3] = var_30;
    arg1[2] = var_70;
    *arg1 = zmm0;
    arg1[1] = rax;
    let result: i64 = var_70;
    *arg1.byte_offset(0x18) = result;
    *arg1.byte_offset(0x48) = 0;
    result
}
