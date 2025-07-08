
  fn uu_od::multifilereader::MultifileReader::new::h9647a60ecaa9b78d(arg1: *mut i128, arg2: *mut i128) -> *mut i128

{
    let rax: i64 = arg2[1];
    let mut var_38: i128 = *arg2;
    let var_20: i64 = 0;
    let var_10: i8 = 0;
    uu_od::multifilereader::MultifileReader::next_file::h7ce1d576af53818d(&var_38);
    let zmm0_1: i128 = var_38;
    let var_18: i128;
    arg1[2] = var_18;
    arg1[1] = rax;
    *arg1 = zmm0_1;
    arg1
}
