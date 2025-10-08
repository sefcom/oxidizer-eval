
  int64_t uu_df::is_included::h2cb576fb785b9846(void* arg1, void* arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    
    if (*(arg1 + 0x90) && *(arg2 + 0x50))
        return 0;
    
    if (!*(arg1 + 0x91))
    {
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h6249ba97ac26ea5b(*(arg1 + 0x38), *(arg1 + 0x40), &data_419a18[0x24], 4) && *(arg2 + 0x51) != 1)
            return 0;
    }
    else if (*(arg2 + 0x51) != 1)
        return 0;
    
    if (!(0 + -(*(arg2 + 0x30))) && _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h51781a1e8c4dac70(arg1 + 0x30, *(arg2 + 0x38), *(arg2 + 0x40)))
        return 0;
    
    if (*(arg2 + 0x18) != -0x8000000000000000)
        /* tailcall */
        return _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h51781a1e8c4dac70(arg1 + 0x30, *(arg2 + 0x20), *(arg2 + 0x28));
    
    return 1;
}
