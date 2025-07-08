
  fn uu_wc::files0_iter::hd579310a299db12a(arg1: *mut i128, arg2: i64, arg3: i8, arg4: *mut i128) -> i64

{
    let mut var_48: i128;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h073544539c35aaaa(&var_48, 
        0x2000, arg2, arg3);
    let var_80: i128 = var_48;
    let rax_1: i64 = arg4[1];
    let zmm0: i128 = *arg4;
    let var_98: i128 = zmm0;
    let var_28: i128;
    arg1[4] = *var_28[8];
    let var_18: i64;
    *arg1.byte_offset(0x48) = var_18;
    let var_38: i128;
    arg1[3] = var_38;
    arg1[2] = var_80;
    *arg1 = zmm0;
    arg1[1] = rax_1;
    let result: i64 = var_80;
    *arg1.byte_offset(0x18) = result;
    arg1[5] = 0;
    result
}
