
  int64_t uu_ls::show_dir_name::h15f4c75d324b24c3(void* arg1, int64_t arg2, void* arg3)

{
    int128_t var_68;
    uucore::features::quoting_style::escape_dir_name::he3befbde869a184b(&var_68, *(arg1 + 0x20), 
        *(arg1 + 0x28), arg3 + 0xf5);
    int64_t rbp;
    rbp = !*(arg3 + 0xee);
    rbp &= *(arg3 + 0xef);
    int128_t* rdi_5;
    int128_t* var_98;
    int128_t var_88;
    int64_t var_58;
    void* const var_50;
    
    if (!rbp)
    {
        int64_t var_78_1 = var_58;
        var_88 = var_68;
        var_98 = &var_88;
        int64_t (* var_90_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_50 = &data_612550;
        int64_t var_48_1 = 2;
        int64_t var_30_1 = 0;
        int128_t** var_40_1 = &var_98;
        int64_t var_38_1 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h007ed8789c93c2ab(
            std::io::Write::write_fmt::h51abc44b465d2e67(arg2, &var_50));
        rdi_5 = &var_88;
    }
    else
    {
        uu_ls::create_hyperlink::h72b30fed8b305b42(&var_88, *var_68[8], var_58, arg1);
        var_98 = &var_88;
        int64_t (* var_90)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_50 = &data_612550;
        int64_t var_48 = 2;
        int64_t var_30 = 0;
        int128_t** var_40 = &var_98;
        int64_t var_38 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h007ed8789c93c2ab(
            std::io::Write::write_fmt::h51abc44b465d2e67(arg2, &var_50));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_88);
        rdi_5 = &var_68;
    }
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(rdi_5);
}
