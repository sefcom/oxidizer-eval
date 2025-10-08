
  fn ruff_python_formatter::comments::map::InOrderEntry::dangling::he03c914fb1091a07(arg1: *mut i32, arg2: i64, arg3: i64) -> i64

{
    let rax: i32 =
        ruff_python_formatter::comments::map::PartIndex::from_len::h79d6158a70281f85(arg2);
    let result: i32 =
        ruff_python_formatter::comments::map::PartIndex::from_len::h79d6158a70281f85(arg3);
    *arg1 = rax;
    arg1[1] = rax;
    arg1[2] = result;
    arg1[3] = 0;
    result
}
