
  int64_t uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(int32_t* arg1, void* arg2)

{
    int64_t var_20;
    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::hba4a109ff858d0ec(
        &var_20, arg2 + 0x18);
    int64_t rdi_1 = var_20;
    int64_t var_18;
    
    if (-(rdi_1) != -0x8000000000000000)
    {
        int64_t rax_3 =
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hcb8c0c6e863a6af8(
            rdi_1, var_18);
        *arg1 = 0xc;
        return rax_3;
    }
    
    *(arg1 + 8) = var_18;
    *(arg1 + 0x10) = var_18;
    char var_10;
    arg1[6] = var_10;
    *arg1 = 0xb;
    return var_10;
}
