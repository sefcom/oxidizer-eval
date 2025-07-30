
  int64_t flealib::browserhistory::get_history::h3123b478e6fedbbe(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, uint64_t arg5)

{
    char var_190;
    int64_t result = rusqlite::Connection::open_with_flags::hb7f432c017781faa(&var_190, arg2);
    int128_t var_188;
    int128_t var_178;
    int128_t var_168;
    int128_t var_158;
    int128_t var_e8;
    
    if (var_190 & 1)
    {
        int128_t var_b8 = var_158;
        int128_t var_c8_1 = var_168;
        int128_t var_d8_1 = var_178;
        var_e8 = var_188;
        *(arg1 + 0x30) = var_158;
        *(arg1 + 0x20) = var_168;
        *(arg1 + 0x10) = var_178;
        *arg1 = var_188;
        return result;
    }
    
    int128_t var_138;
    int128_t var_98_1 = var_138;
    int128_t var_148;
    int128_t var_a8_1 = var_148;
    int128_t var_b8_1 = var_158;
    int128_t var_88 = var_188;
    int128_t var_78_1 = var_178;
    int128_t var_68_1 = var_168;
    int128_t var_58_1 = var_158;
    int128_t var_48_1 = var_148;
    int128_t var_38_1 = var_138;
    rusqlite::Connection::prepare_with_flags::h3f9d83aa8886ee5f(&var_190, &var_88, arg4, arg5);
    int64_t rax = var_190;
    
    if (!rax)
    {
        *(arg1 + 0x30) = var_158;
        *(arg1 + 0x20) = var_168;
        *(arg1 + 0x10) = var_178;
        *arg1 = var_188;
    }
    else
    {
        var_b8_1 = var_158;
        int128_t var_c8 = var_168;
        int128_t var_d8 = var_178;
        var_e8 = var_188;
        var_e8 = rax;
        rusqlite::statement::Statement::query_map::hc9c4ed965d83b976(&var_190, &var_e8);
        int64_t rax_1 = var_190;
        int64_t rdi_3 = var_188;
        int64_t rsi_2 = *var_188[8];
        
        if (rax_1 != -0x7fffffffffffffee)
        {
            arg1[7] = var_158;
            *(arg1 + 0x28) = var_168;
            *(arg1 + 0x18) = var_178;
            *arg1 = rax_1;
            arg1[1] = rdi_3;
            arg1[2] = rsi_2;
            core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::hb6df3ca1791e0b00(
                &var_e8);
        }
        else
        {
            var_190 = 0;
            var_188 = 8;
            *var_188[8] = 0;
            core::iter::traits::iterator::Iterator::fold::hcd588a60c15920c0(rdi_3, rsi_2, &var_190);
            arg1[3] = *var_188[8];
            *(arg1 + 8) = var_190;
            *arg1 = -0x7fffffffffffffee;
            core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::hb6df3ca1791e0b00(
                &var_e8);
        }
    }
    
    return core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h10f01d85e30e267c(&var_88);
}
