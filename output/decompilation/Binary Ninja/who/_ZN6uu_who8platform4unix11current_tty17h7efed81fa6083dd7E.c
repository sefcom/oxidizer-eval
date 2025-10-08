
  char* uu_who::platform::unix::current_tty::h7efed81fa6083dd7(int128_t* arg1)

{
    char* result = ttyname(0);
    
    if (!result)
    {
        *arg1 = 0;
        *(arg1 + 8) = 1;
        arg1[1] = 0;
        return result;
    }
    
    void var_40;
    alloc::ffi::c_str::_$LT$impl$u20$core..ffi..c_str..CStr$GT$::to_string_lossy::h9afbfb8b28205f24(
        &var_40, result, strlen(result) + 1);
    int64_t var_38;
    int64_t var_30;
    int64_t rax_1;
    uint64_t rdx_1;
    rax_1 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::he54d301b69f9c6a0(var_38, var_30);
    int128_t var_28;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hdbc64a9c3b715b62(&var_28, rax_1, rdx_1);
    int64_t var_18;
    arg1[1] = var_18;
    *arg1 = var_28;
    return core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h23cc7d1edb76b1fb(
        &var_40);
}
