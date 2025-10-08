
  fn uu_od::multifilereader::MultifileReader::new::hfa7325e7ade9d572(arg1: *mut i128, arg2: *mut i128) -> i64

{
    let rax: i64 = arg2[1];
    let mut var_38: i128 = *arg2;
    let var_20: i64 = 0;
    let var_10: i8 = 0;
    let result: i64 =
        uu_od::multifilereader::MultifileReader::next_file::h88105f385025e3a3(&var_38);
    let zmm0_1: i128 = var_38;
    let var_18: i128;
    arg1[2] = var_18;
    arg1[1] = rax;
    *arg1 = zmm0_1;
    result
}
