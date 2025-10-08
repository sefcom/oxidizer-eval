
  int64_t bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::strip_suffix::h54db9f7a9094d832(void* arg1, int64_t arg2, int64_t arg3)

{
    int64_t r12 = *(arg1 + 0x10);
    
    if (!r12)
        return 0;
    
    int64_t* r13_1 = *(arg1 + 8);
    int64_t result;
    
    while (true)
    {
        result = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::ha48df28aef4c1d38(*r13_1, r13_1[1], arg2, arg3);
        
        if (result)
            break;
        
        r13_1 = &r13_1[2];
        
        if (r13_1 == &r13_1[r12 * 2])
            return 0;
    }
    
    return result;
}
