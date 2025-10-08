
  int64_t uu_od::multifilereader::MultifileReader::new::hfa7325e7ade9d572(int128_t* arg1, int128_t* arg2)

{
    int64_t rax = arg2[1];
    int128_t var_38 = *arg2;
    int64_t var_20 = 0;
    char var_10 = 0;
    int64_t result = uu_od::multifilereader::MultifileReader::next_file::h88105f385025e3a3(&var_38);
    int128_t zmm0_1 = var_38;
    int128_t var_18;
    arg1[2] = var_18;
    arg1[1] = rax;
    *arg1 = zmm0_1;
    return result;
}
