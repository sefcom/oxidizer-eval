
  fn uu_od::open_input_peek_reader::h674c27249dd4a5e9(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> *mut i64

{
    let mut var_40: ();
    core::iter::traits::iterator::Iterator::collect::h9645941bc1bc249f(&var_40, arg2);
    let mut var_78: ();
    uu_od::multifilereader::MultifileReader::new::hfa7325e7ade9d572(&var_78, &var_40);
    let var_48: i64 = arg4;
    let mut var_88: i64 = arg5;
    let r9: i64;
    let var_80: i64 = r9;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h6751655b61e5daa8(arg1, 
        &var_88);
    arg1[0xe] = 0;
    arg1[0xf] = 1;
    arg1[0x10] = 0;
    arg1
}
