
  void uu_pr::header_content::h1c434cc3245eafa3(int64_t* arg1, void* arg2, int64_t arg3)

{
    int64_t var_90 = arg3;
    
    if (!*(arg2 + 0x141))
    {
        *arg1 = 0;
        arg1[1] = 8;
        arg1[2] = 0;
        return;
    }
    
    void* var_88 = arg2 + 0x78;
    int64_t (* var_80)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    void* var_78 = arg2 + 0x30;
    int64_t (* var_70)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    int64_t* var_68 = &var_90;
    uint64_t (* var_60)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    void* const var_38 = &data_669650;
    int64_t var_30 = 3;
    int64_t var_18 = 0;
    void** var_28 = &var_88;
    int64_t var_20 = 3;
    int128_t var_50;
    core::option::Option$LT$T$GT$::map_or_else::ha768742fd52e18ba(&var_50, &var_38);
    uint64_t rax_1 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x78);
    
    if (!rax_1)
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    var_88 = var_50;
    *rax_1 = 0;
    *(rax_1 + 8) = 1;
    *(rax_1 + 0x10) = {0};
    *(rax_1 + 0x20) = 1;
    *(rax_1 + 0x28) = 0;
    *(rax_1 + 0x30) = var_88;
    int64_t var_40;
    *(rax_1 + 0x40) = var_40;
    *(rax_1 + 0x48) = 0;
    *(rax_1 + 0x50) = 1;
    *(rax_1 + 0x58) = {0};
    *(rax_1 + 0x68) = 1;
    *(rax_1 + 0x70) = 0;
    *arg1 = 5;
    arg1[1] = rax_1;
    arg1[2] = 5;
}
