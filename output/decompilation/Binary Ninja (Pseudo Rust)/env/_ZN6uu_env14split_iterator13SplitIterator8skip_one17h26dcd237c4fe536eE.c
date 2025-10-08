
  fn uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(arg1: *mut i32, arg2: *mut c_void) -> i64

{
    let mut var_20: i64;
    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::hba4a109ff858d0ec(
        &var_20, arg2.byte_offset(0x18));
    let rdi_1: i64 = var_20;
    let var_18: i64;
    
    if -(rdi_1) != -0x8000000000000000
    {
        let rax_3: i64 =
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hcb8c0c6e863a6af8(
            rdi_1, var_18);
        *arg1 = 0xc;
        return rax_3;
    }
    
    *arg1.byte_offset(8) = var_18;
    *arg1.byte_offset(0x10) = var_18;
    let var_10: i8;
    arg1[6] = var_10;
    *arg1 = 0xb;
    var_10
}
