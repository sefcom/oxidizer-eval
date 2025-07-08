
  int64_t* uu_od::open_input_peek_reader::h114ec616b3c82f88(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6)

{
    void var_40;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h6da545f9e2e553ec(&var_40, arg2, arg2 + arg3 * 0x18);
    uu_od::multifilereader::MultifileReader::new::h9647a60ecaa9b78d(&arg1[2], &var_40);
    *arg1 = arg5;
    arg1[1] = arg6;
    arg1[8] = arg4;
    arg1[9] = 0;
    arg1[0xa] = 1;
    arg1[0xb] = 0;
    return arg1;
}
