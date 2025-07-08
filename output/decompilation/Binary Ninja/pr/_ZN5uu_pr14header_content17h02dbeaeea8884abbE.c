
  void uu_pr::header_content::h02dbeaeea8884abb(int64_t* arg1, void* arg2, int64_t arg3)

{
    int64_t var_88 = arg3;
    
    if (!*(arg2 + 0x141))
    {
        *arg1 = 0;
        arg1[1] = 8;
        arg1[2] = 0;
        return;
    }
    
    void* var_68 = arg2 + 0x78;
    int64_t (* var_60_1)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    void* var_58_1 = arg2 + 0x30;
    int64_t (* var_50_1)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    int64_t* var_48_1 = &var_88;
    uint64_t (* var_40_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    void* const var_38 = &data_709590;
    int64_t var_30_1 = 3;
    int64_t var_18_1 = 0;
    void** var_28_1 = &var_68;
    int64_t var_20_1 = 3;
    int128_t var_80;
    core::option::Option$LT$T$GT$::map_or_else::h4ea8d69383c77fdd(&var_80, &var_38);
    int64_t* rax_2 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 0x78);
    
    if (!rax_2)
    {
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
        /* no return */
    }
    
    *rax_2 = 0;
    rax_2[1] = 1;
    *(rax_2 + 0x10) = {0};
    rax_2[4] = 1;
    rax_2[5] = 0;
    *(rax_2 + 0x30) = var_80;
    int64_t var_70;
    rax_2[8] = var_70;
    rax_2[9] = 0;
    rax_2[0xa] = 1;
    *(rax_2 + 0x58) = {0};
    rax_2[0xd] = 1;
    rax_2[0xe] = 0;
    alloc::slice::hack::into_vec::h00e2e55fcd83f713(arg1, rax_2, 5);
}
