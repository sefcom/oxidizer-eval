
  fn ruff_python_formatter::comments::map::InOrderEntry::increment_dangling_range::h52bd3f95b5426e67(arg1: *mut c_void) -> i64

{
    if *arg1.byte_offset(0xc) != 0
    {
        let mut var_38: *mut *mut c_void = &data_97d028;
        let var_30: i64 = 1;
        let var_28: i64 = 8;
        let var_20: i128 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_38);
        /* no return */
    }
    
    if *arg1.byte_offset(8) != 0
    {
        /* tailcall */
        return ruff_python_formatter::comments::map::PartIndex::increment::h40e90174e8270a0a(arg1.
            byte_offset(8));
    }
    
    let result: i32 =
        ruff_python_formatter::comments::map::PartIndex::incremented::h562ab003bd12ba22(
        *arg1.byte_offset(4));
    *arg1.byte_offset(8) = result;
    result
}
