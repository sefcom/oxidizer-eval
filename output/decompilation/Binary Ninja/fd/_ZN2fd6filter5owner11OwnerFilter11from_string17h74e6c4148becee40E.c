
  uint64_t fd::filter::owner::OwnerFilter::from_string::h74e6c4148becee40(uint128_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_c8 = arg2;
    int64_t var_c0 = arg3;
    void var_80;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_80, 
        0x3a, arg2, arg3);
    int64_t var_90 = 0;
    int64_t var_88 = arg3;
    int16_t var_50 = 1;
    char* rax;
    uint64_t rdx_1;
    rax = core::str::iter::SplitInternal$LT$P$GT$::next::h307f8fd0ed8413be(&var_90);
    char* rax_1;
    uint64_t rdx_2;
    rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::h307f8fd0ed8413be(&var_90);
    int64_t rax_2;
    uint64_t rdx_3;
    rax_2 = core::str::iter::SplitInternal$LT$P$GT$::next::h307f8fd0ed8413be(&var_90);
    uint64_t result;
    void** const var_f8;
    
    if (rax_2)
    {
        int64_t* var_b8 = &var_c8;
        int64_t (* var_b0_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8a73a34aafb6f20d;
        var_f8 = &data_802308;
        int64_t var_f0 = 2;
        int64_t var_d8_1 = 0;
        int64_t** var_e8_1 = &var_b8;
        int64_t var_e0_1 = 1;
        void var_48;
        core::option::Option$LT$T$GT$::map_or_else::h1f7ab50fdd345844(&var_48, 0, rdx_3, &var_f8);
        result = anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::h06348eb8850c741d(&var_48);
        *(arg1 + 8) = result;
        *arg1 = 3;
    }
    else
    {
        fd::filter::owner::Check$LT$T$GT$::parse::h6fb56b91fc350486(&var_f8, rax, rdx_1);
        
        if (var_f8 & 1)
        {
            label_5f4f8f:
            uint64_t result_1;
            result = result_1;
            *(arg1 + 8) = result;
            *arg1 = 3;
        }
        else
        {
            uint128_t zmm0_1 = var_f8;
            result =
                fd::filter::owner::Check$LT$T$GT$::parse::hcc7d42e9676f47f4(&var_f8, rax_1, rdx_2);
            
            if (var_f8 == 1)
                goto label_5f4f8f;
            
            *arg1 = zmm0_1 | var_f8 << 0x40;
        }
    }
    return result;
}
