
  int64_t uu_join::Line::get_field::h7dd14bed39768627(void* arg1, int64_t arg2)

{
    if (*(arg1 + 0x10) <= arg2)
        return 0;
    
    int64_t rax;
    int64_t var_8 = rax;
    int64_t* rcx = *(arg1 + 8);
    return _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h5826f653046d1325(rcx[arg2 * 2], rcx[arg2 * 2 + 1], *(arg1 + 0x20), *(arg1 + 0x28));
}
