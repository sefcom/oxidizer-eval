
  fn uu_od::open_input_peek_reader::h114ec616b3c82f88(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i64, arg6: i64) -> *mut i64

{
    let mut var_40: ();
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h6da545f9e2e553ec(&var_40, arg2, arg2.byte_offset(arg3 * 0x18));
    uu_od::multifilereader::MultifileReader::new::h9647a60ecaa9b78d(&arg1[2], &var_40);
    *arg1 = arg5;
    arg1[1] = arg6;
    arg1[8] = arg4;
    arg1[9] = 0;
    arg1[0xa] = 1;
    arg1[0xb] = 0;
    arg1
}
