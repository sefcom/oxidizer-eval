
  uint64_t uu_sort::FieldSelector::parse_with_options::h698e7c19784cfaad(int128_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int64_t r15 = *arg2;
    int64_t r12 = arg2[1];
    int64_t r13 = arg2[2];
    int64_t rbp = arg2[3];
    _$LT$uu_sort..KeySettings$u20$as$u20$core..default..Default$GT$::default::h14a8cebf2953677d();
    int32_t var_d0 = 0;
    int16_t var_cc = 0x600;
    int64_t var_c0;
    uu_sort::FieldSelector::parse_with_options::parse_key_settings::h14361e95480b66df(&var_c0, r13, 
        rbp, &var_d0);
    uint64_t result;
    uint64_t result_2;
    int128_t var_88;
    uint64_t result_1;
    
    if (!(0 + -(var_c0)))
    {
        var_88 = var_c0;
        result_1 = result_2;
        label_4d3631:
        result = result_1;
        arg1[1] = result;
        *arg1 = var_88;
    }
    else
    {
        char var_b8;
        char var_a8;
        uu_sort::KeyPosition::new::ha77a31f4c9c6cdf9(&var_a8, r15, r12, 1, var_b8);
        uint64_t result_3;
        uint64_t result_4 = result_3;
        bool cond:0_1 = var_a8 & 1;
        int128_t var_a0;
        var_88 = var_a0;
        result_1 = result_3;
        
        if (cond:0_1)
            goto label_4d3631;
        
        int64_t r15_1 = *arg3;
        int32_t var_c8;
        int128_t var_58;
        
        if (!r15_1)
        {
            result = 2;
            label_4d3662:
            var_a8 = var_58;
            *var_a0[8] = result;
            *var_a0[9] = var_c8;
            *var_a0[0xc] = var_c8;
            return uu_sort::FieldSelector::new::h5b970f0569e874f9(arg1, &var_88, &var_a8, 
                var_cc << 0x20 | var_d0);
        }
        
        int64_t r12_1 = arg3[1];
        uu_sort::FieldSelector::parse_with_options::parse_key_settings::h14361e95480b66df(&var_c0, 
            arg3[2], arg3[3], &var_d0);
        int32_t var_e0_1;
        int128_t var_68_1;
        
        if (var_c0 != -0x8000000000000000)
        {
            result = result_2;
            int32_t var_d8_2 = *result_2[1];
            int32_t rcx_11 = *result_2[4];
            var_68_1 = var_c0;
            var_e0_1 = rcx_11;
            var_e0_1 = rcx_11;
        }
        else
        {
            uu_sort::KeyPosition::new::ha77a31f4c9c6cdf9(&var_a8, r15_1, r12_1, 0, var_b8);
            result = result_3;
            int32_t var_d8_1 = *result_3[1];
            int32_t rcx_3 = *result_3[4];
            var_68_1 = var_a0;
            var_e0_1 = rcx_3;
            var_e0_1 = rcx_3;
            
            if (!(var_a8 & 1))
            {
                var_58 = var_68_1;
                var_c8 = var_e0_1;
                var_c8 = var_e0_1;
                goto label_4d3662;
            }
        }
        
        *arg1 = var_68_1;
        *(arg1 + 0x11) = var_e0_1;
        *(arg1 + 0x14) = var_e0_1;
        arg1[1] = result;
    }
    *(arg1 + 0x37) = 2;
    return result;
}
