
  int64_t uu_env::split_iterator::SplitIterator::take_one::h1e0059af94c5f623(int32_t* arg1, int64_t* arg2)

{
    int64_t result;
    char rdx;
    result = uu_env::string_expander::StringExpander::take_one::hd9c3a6abe6131b4d(arg2);
    int32_t rcx = 0xc;
    
    if (rdx != 2)
    {
        *(arg1 + 8) = result;
        *(arg1 + 0x10) = result;
        arg1[6] = rdx & 1;
        rcx = 0xb;
    }
    
    *arg1 = rcx;
    return result;
}
