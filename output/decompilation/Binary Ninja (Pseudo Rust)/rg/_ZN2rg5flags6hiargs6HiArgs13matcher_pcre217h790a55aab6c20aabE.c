
  fn rg::flags::hiargs::HiArgs::matcher_pcre2::h790a55aab6c20aab(arg1: *mut u64) -> u64

{
    let mut var_38: *mut *mut [i8; 0xa8] = &data_7eaea8;
    let var_30: i64 = 1;
    let var_28: i64 = 8;
    let var_20: i128 = {0};
    let result: u64 = anyhow::__private::format_err::hd87f3faee3401bd9(&var_38);
    *arg1 = result;
    *arg1.byte_offset(0x63) = 2;
    result
}
