
  int64_t uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(int32_t* arg1, void* arg2)

{
    int64_t var_20;
    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::h67e0541a63634aad(
        &var_20, arg2 + 0x18);
    int64_t rdx = var_20;
    int32_t result;
    int64_t var_18;
    char var_10;
    
    if (rdx != -0x8000000000000000)
    {
        int32_t var_f;
        int32_t var_24_1 = var_f;
        int32_t var_27_1 = var_f;
        int64_t var_38 = rdx;
        int64_t var_30_1 = var_18;
        char var_28_1 = var_10;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_env..string_parser..Chunk$GT$$GT$::hf332c5c32dd375fc(&var_38);
        result = 8;
    }
    else
    {
        *(arg1 + 8) = var_18;
        *(arg1 + 0x10) = var_18;
        arg1[6] = var_10;
        result = 5;
    }
    *arg1 = result;
    return result;
}
