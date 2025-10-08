
  fn ruff_python_formatter::comments::map::InOrderEntry::leading::hb1749f99636007f0(arg1: *mut i32, arg2: i64, arg3: i64) -> i64

{
    let rax: i32 =
        ruff_python_formatter::comments::map::PartIndex::from_len::h79d6158a70281f85(arg2);
    let result: i32 =
        ruff_python_formatter::comments::map::PartIndex::from_len::h79d6158a70281f85(arg3);
    *arg1 = rax;
    arg1[1] = result;
    *arg1.byte_offset(8) = 0;
    result
}
