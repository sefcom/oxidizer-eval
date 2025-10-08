
  void* ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::entry_to_out_of_order::h99c7313a90e9d36b(int32_t* arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    int32_t rdi = *arg1;
    
    if (!rdi)
        return &arg1[2];
    
    int64_t rcx = arg4[2];
    int64_t rax;
    int64_t rdx_1;
    rax = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2681de418ccc56ae(rdi - 1, arg1[1] - 1, arg2, arg3);
    void var_48;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd104e18b08a90af8(&var_48, rax, rdx_1);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h212ac18df04ae491(arg4, &var_48);
    int32_t rsi_4 = arg1[2];
    uint64_t rdi_5 = arg1[1] - 1;
    uint64_t rsi_5 = rsi_4 - 1;
    
    if (rsi_4 < 1)
        rsi_5 = rdi_5;
    
    int64_t rax_1;
    int64_t rdx_4;
    rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2681de418ccc56ae(rdi_5, rsi_5, arg2, arg3);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd104e18b08a90af8(&var_48, rax_1, rdx_4);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h212ac18df04ae491(arg4, &var_48);
    uint64_t rax_2;
    int64_t rdx_6;
    rax_2 =
        ruff_python_formatter::comments::map::InOrderEntry::trailing_range::h32d34cc5d8d5c983(arg1);
    int64_t rax_3;
    int64_t rdx_8;
    rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2681de418ccc56ae(rax_2, rdx_6, arg2, arg3);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd104e18b08a90af8(&var_48, rax_3, rdx_8);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h212ac18df04ae491(arg4, &var_48);
    *arg1 = 0;
    *(arg1 + 8) = rcx;
    return &arg1[2];
}
