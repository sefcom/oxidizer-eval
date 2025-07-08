
  int64_t uu_df::is_included::h21d348ae8506351c(void* arg1, void* arg2)

{
    if ((*(arg1 + 0x90) && *(arg2 + 0x50)) || (*(arg1 + 0x91) && !*(arg2 + 0x51)))
        return 0;
    
    if (*(arg2 + 0x30) != -0x8000000000000000 && _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h5ec19a7369aaf82d(arg1 + 0x30, *(arg2 + 0x38), *(arg2 + 0x40)))
        return 0;
    
    if (*(arg2 + 0x18) == -0x8000000000000000)
        return 1;
    
    /* tailcall */
    return _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h5ec19a7369aaf82d(
        arg1 + 0x30, *(arg2 + 0x20), *(arg2 + 0x28));
}
