
  int64_t uu_join::Line::get_field::h5172ba7928bd7492(void* arg1, int64_t arg2)

{
    if (arg2 >= *(arg1 + 0x10))
        return 0;
    
    int64_t rax;
    int64_t var_8 = rax;
    int64_t* rcx = *(arg1 + 8);
    return _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h5fa46ece5d44be38(rcx[arg2 * 2], rcx[arg2 * 2 + 1], *(arg1 + 0x20), *(arg1 + 0x28));
}
