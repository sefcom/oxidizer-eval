
  int64_t* uu_csplit::patterns::get_patterns::h1caf3c5952747e62(int64_t* arg1)

{
    int64_t var_30;
    int64_t rdx;
    int64_t rsi;
    uu_csplit::patterns::extract_patterns::h32f79fa60a6aa1ab(&var_30, rsi, rdx);
    int64_t rax = var_30;
    int128_t var_28;
    int64_t var_18;
    int64_t var_10;
    
    if (rax != 0xc)
    {
        arg1[3] = var_18;
        *(arg1 + 8) = var_28;
        *arg1 = rax;
        arg1[4] = var_10;
    }
    else
    {
        int128_t var_68 = var_28;
        uu_csplit::patterns::validate_line_numbers::hf11a42b855ce2ce0(&var_30, *var_68[8], var_18);
        
        if (var_30 != 0xc)
        {
            arg1[4] = var_10;
            int128_t zmm0_1 = var_30;
            *(arg1 + 0x10) = var_28;
            *arg1 = zmm0_1;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_csplit..patterns..Pattern$GT$$GT$::h3e87e3943a9612d3(&var_68);
        }
        else
        {
            arg1[3] = var_18;
            *(arg1 + 8) = var_68;
            *arg1 = 0xc;
        }
    }
    return arg1;
}
