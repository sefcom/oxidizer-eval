
  int128_t* uu_join::State::reset::h80c820df90bbe344(int64_t* arg1, int64_t* arg2)

{
    int64_t* rdi = arg1[1];
    int64_t rsi = arg1[2];
    arg1[2] = 0;
    int128_t* result =
        core::ptr::drop_in_place$LT$$u5b$uu_join..Line$u5d$$GT$::h7063c6a704fef728(rdi, rsi);
    
    if (*arg2 == -0x8000000000000000)
        return result;
    
    int128_t var_28_1 = *(arg2 + 0x20);
    int128_t var_38_1 = *(arg2 + 0x10);
    int128_t var_48 = *arg2;
    return alloc::vec::Vec$LT$T$C$A$GT$::push::h8d118758e449cd1f(arg1, &var_48);
}
