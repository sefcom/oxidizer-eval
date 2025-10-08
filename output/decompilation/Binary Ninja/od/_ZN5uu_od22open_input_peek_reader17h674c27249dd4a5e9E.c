
  int64_t* uu_od::open_input_peek_reader::h674c27249dd4a5e9(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    void var_40;
    core::iter::traits::iterator::Iterator::collect::h9645941bc1bc249f(&var_40, arg2);
    void var_78;
    uu_od::multifilereader::MultifileReader::new::hfa7325e7ade9d572(&var_78, &var_40);
    int64_t var_48 = arg4;
    int64_t var_88 = arg5;
    int64_t r9;
    int64_t var_80 = r9;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h6751655b61e5daa8(arg1, 
        &var_88);
    arg1[0xe] = 0;
    arg1[0xf] = 1;
    arg1[0x10] = 0;
    return arg1;
}
