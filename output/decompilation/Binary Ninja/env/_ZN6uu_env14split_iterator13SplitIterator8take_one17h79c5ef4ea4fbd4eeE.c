
  int64_t uu_env::split_iterator::SplitIterator::take_one::h79c5ef4ea4fbd4ee(int32_t* arg1, int64_t* arg2)

{
    int64_t result;
    char rdx;
    result = uu_env::string_expander::StringExpander::take_one::haa545a6e4e1a581c(arg2);
    int32_t rcx = 8;
    
    if (rdx != 2)
    {
        *(arg1 + 8) = result;
        *(arg1 + 0x10) = result;
        arg1[6] = rdx & 1;
        rcx = 5;
    }
    
    *arg1 = rcx;
    return result;
}
