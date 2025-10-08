
  uint64_t uu_sleep::sleep::hed540e60219cbc17(void* arg1, int64_t arg2)

{
    char var_29 = 0;
    int64_t rax;
    int32_t rdx_1;
    rax = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h9e9a00eeb2bdba92(arg1, (arg2 << 4) + arg1, &var_29);
    
    if (!var_29)
    {
        std::thread::sleep::h12eb239213be7934(rax, rdx_1);
        return 0;
    }
    
    void var_28;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h70efb2df60242032(&var_28);
    int32_t var_10 = 1;
    return alloc::boxed::Box$LT$T$GT$::new::h1df68ea8a89b5010(&var_28);
}
