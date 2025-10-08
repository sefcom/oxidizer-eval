
  int64_t* uu_csplit::patterns::get_patterns::hcf6c39a45494ab6b(int64_t* arg1, void* arg2, int64_t arg3)

{
    int64_t var_30;
    uu_csplit::patterns::extract_patterns::h928579bbd5018ce5(&var_30, arg2, arg3);
    int64_t rax = var_30;
    int128_t var_28;
    int64_t var_18;
    int64_t var_10;
    
    if (rax != 0xd)
    {
        arg1[3] = var_18;
        *(arg1 + 8) = var_28;
        *arg1 = rax;
        arg1[4] = var_10;
        return arg1;
    }
    
    int128_t var_68 = var_28;
    uu_csplit::patterns::validate_line_numbers::h4ff567dae8ebad70(&var_30, *var_68[8], var_18);
    
    if (var_30 == 0xd)
    {
        arg1[3] = var_18;
        *(arg1 + 8) = var_68;
        *arg1 = 0xd;
        return arg1;
    }
    
    arg1[4] = var_10;
    int128_t zmm0_1 = var_30;
    *(arg1 + 0x10) = var_28;
    *arg1 = zmm0_1;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_csplit..patterns..Pattern$GT$$GT$::hb8a5ba762c76bd0b(&var_68);
    return arg1;
}
