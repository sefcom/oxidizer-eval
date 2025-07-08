
  int64_t* uu_sort::FieldSelector::parse_with_options::hf97b85c869b37397(int128_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int64_t r15 = *arg2;
    int64_t r12 = arg2[1];
    int64_t r13 = arg2[2];
    int64_t rbp = arg2[3];
    _$LT$uu_sort..KeySettings$u20$as$u20$core..default..Default$GT$::default::h939b9802cdaabb58();
    int16_t var_dc = 0x600;
    int32_t var_e0 = 0;
    int64_t var_d0;
    uu_sort::FieldSelector::parse_with_options::parse_key_settings::hbaa53af66f7d56a7(&var_d0, r13, 
        rbp, &var_e0);
    int64_t* result;
    int64_t* result_2;
    int128_t var_98;
    int64_t* result_1;
    
    if (var_d0 != -0x8000000000000000)
    {
        var_98 = var_d0;
        result_1 = result_2;
        label_521772:
        result = result_1;
        arg1[1] = result;
        *arg1 = var_98;
    }
    else
    {
        char var_c8;
        int64_t var_b8;
        uu_sort::KeyPosition::new::h2335ce3d5d49b62e(&var_b8, r15, r12, 1, var_c8);
        int64_t* result_3;
        int64_t* result_4 = result_3;
        bool cond:0_1 = var_b8;
        int128_t var_b0;
        var_98 = var_b0;
        result_1 = result_3;
        
        if (cond:0_1)
            goto label_521772;
        
        int64_t r15_1 = *arg3;
        int32_t var_d8;
        int128_t var_58;
        
        if (!r15_1)
        {
            result = 2;
            label_5217a3:
            var_b8 = var_58;
            *var_b0[8] = result;
            *var_b0[9] = var_d8;
            *var_b0[0xc] = var_d8;
            return uu_sort::FieldSelector::new::h76b0cdeb9dd3e1dd(arg1, &var_98, &var_b8, 
                var_dc << 0x20 | var_e0);
        }
        
        int64_t r12_1 = arg3[1];
        uu_sort::FieldSelector::parse_with_options::parse_key_settings::hbaa53af66f7d56a7(&var_d0, 
            arg3[2], arg3[3], &var_e0);
        int32_t var_f0_1;
        int128_t var_78_1;
        
        if (var_d0 != -0x8000000000000000)
        {
            result = result_2;
            int32_t var_e8_2 = *result_2[1];
            int32_t rcx_11 = *result_2[4];
            var_78_1 = var_d0;
            var_f0_1 = rcx_11;
            var_f0_1 = rcx_11;
        }
        else
        {
            uu_sort::KeyPosition::new::h2335ce3d5d49b62e(&var_b8, r15_1, r12_1, 0, var_c8);
            result = result_3;
            int32_t var_e8_1 = *result_3[1];
            int32_t rcx_3 = *result_3[4];
            var_78_1 = var_b0;
            var_f0_1 = rcx_3;
            var_f0_1 = rcx_3;
            
            if (!var_b8)
            {
                var_58 = var_78_1;
                var_d8 = var_f0_1;
                var_d8 = var_f0_1;
                goto label_5217a3;
            }
        }
        
        *arg1 = var_78_1;
        *(arg1 + 0x11) = var_f0_1;
        *(arg1 + 0x14) = var_f0_1;
        arg1[1] = result;
    }
    *(arg1 + 0x37) = 2;
    return result;
}
