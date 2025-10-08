
  int64_t ruff_python_formatter::string::normalize::QuoteMetadata::from_str::h18c8ad1316633cd8(int64_t* arg1, int64_t arg2, int64_t arg3, char arg4, char arg5)

{
    int64_t result_1;
    
    if (arg4 > 0x3f)
    {
        int32_t rax_1;
        rax_1 = !(arg4 & 2);
        ruff_python_formatter::string::normalize::QuoteMetadataKind::raw::hb0a4e8c14ab76ee2(
            &result_1, arg2, arg3, arg5, rax_1);
    }
    else if (arg4 & 2)
        ruff_python_formatter::string::normalize::QuoteMetadataKind::triple_quoted::h5840b0a68ba9b6ca(&result_1, arg2, arg3, arg5);
    else
        ruff_python_formatter::string::normalize::QuoteMetadataKind::regular::hd93f71086a77b31b(
            &result_1, arg2, arg3);
    
    int32_t var_14;
    arg1[1] = var_14;
    int64_t result = result_1;
    *arg1 = result;
    *(arg1 + 0xc) = arg4 & 1;
    return result;
}
