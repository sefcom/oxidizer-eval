
  fn ruff_python_formatter::string::normalize::QuoteMetadata::from_str::h18c8ad1316633cd8(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i8, arg5: i8) -> i64

{
    let mut result_1: i64;
    
    if arg4 > 0x3f
    {
        let mut rax_1: i32;
        rax_1 = (arg4 & 2) == 0;
        ruff_python_formatter::string::normalize::QuoteMetadataKind::raw::hb0a4e8c14ab76ee2(
            &result_1, arg2, arg3, arg5, rax_1);
    }
    else if (arg4 & 2) != 0
    {
        ruff_python_formatter::string::normalize::QuoteMetadataKind::triple_quoted::h5840b0a68ba9b6ca(&result_1, arg2, arg3, arg5);
    }
    else
    {
        ruff_python_formatter::string::normalize::QuoteMetadataKind::regular::hd93f71086a77b31b(
            &result_1, arg2, arg3);
    }
    
    let var_14: i32;
    arg1[1] = var_14;
    let result: i64 = result_1;
    *arg1 = result;
    *arg1.byte_offset(0xc) = arg4 & 1;
    result
}
