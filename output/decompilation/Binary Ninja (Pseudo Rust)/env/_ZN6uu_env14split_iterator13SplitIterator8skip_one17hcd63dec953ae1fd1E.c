
  fn uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(arg1: *mut i32, arg2: *mut c_void) -> i64

{
    let mut var_20: i64;
    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::h67e0541a63634aad(
        &var_20, arg2.byte_offset(0x18));
    let rdx: i64 = var_20;
    let mut result: i32;
    let var_18: i64;
    let var_10: i8;
    
    if rdx != -0x8000000000000000
    {
        let var_f: i32;
        let var_24_1: i32 = var_f;
        let var_27_1: i32 = var_f;
        let mut var_38: i64 = rdx;
        let var_30_1: i64 = var_18;
        let var_28_1: i8 = var_10;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_env..string_parser..Chunk$GT$$GT$::hf332c5c32dd375fc(&var_38);
        result = 8;
    }
    else
    {
        *arg1.byte_offset(8) = var_18;
        *arg1.byte_offset(0x10) = var_18;
        arg1[6] = var_10;
        result = 5;
    }
    *arg1 = result;
    result
}
