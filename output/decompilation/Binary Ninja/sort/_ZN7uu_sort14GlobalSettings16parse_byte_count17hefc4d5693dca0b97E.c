
  int64_t** uu_sort::GlobalSettings::parse_byte_count::hefc4d5693dca0b97(int64_t** arg1, int64_t arg2, int64_t arg3)

{
    int16_t var_58 = 0;
    char const (** const var_78)[0x43] = &data_58ccc0;
    int64_t var_70 = 0x10;
    char const* const var_68 = "KBuffer size  does not fit in ad…";
    int64_t var_60 = 1;
    char var_56 = 1;
    void* rax;
    uint64_t rdx;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_matches::ha7c02580526c77a6(arg2, arg3);
    int64_t* var_48;
    uucore::features::parser::parse_size::Parser::parse::h125c9f8b8f190c20(&var_48, &var_78, rax, 
        rdx);
    int64_t* rax_1 = var_48;
    int128_t var_40;
    int64_t var_30;
    
    if (rax_1 != 4)
    {
        *arg1 = rax_1;
        *(arg1 + 8) = var_40;
        arg1[3] = var_30;
    }
    else
    {
        int64_t rax_2 = *var_40[8];
        int64_t var_20_1 = var_30;
        int64_t var_28 = rax_2;
        int64_t* rax_3;
        
        if (!var_30)
        {
            arg1[1] = rax_2;
            rax_3 = 4;
        }
        else
        {
            var_48 = &var_28;
            var_40 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::hf75db8903b60bf5d;
            var_78 = &data_58cca0;
            int64_t var_70_1 = 2;
            var_58 = 0;
            int64_t** var_68_1 = &var_48;
            int64_t var_60_1 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h9f6bdb3fe8306f69(&arg1[1], &var_78);
            rax_3 = 2;
        }
        
        *arg1 = rax_3;
    }
    return arg1;
}
