
  int128_t* uu_sort::FieldSelector::parse_with_options::parse_key_settings::hbaa53af66f7d56a7(uint64_t arg1, int64_t arg2, int64_t arg3, void* arg4)

{
    int64_t var_50 = arg2;
    int64_t var_48 = arg3 + arg2;
    int128_t* rax;
    int32_t rdx_1;
    rax = core::str::validations::next_code_point::h7a92bc82d8dec435(&var_50, arg1);
    char rbp;
    
    if (!rax)
        rbp = 0;
    else
    {
        rbp = 0;
        
        while (true)
        {
            uint64_t rax_1 = rdx_1 - 0x4d;
            int128_t* var_88;
            char rdx_2;
            char rdx_3;
            void* rsi;
            void* rsi_1;
            int128_t* rdi_1;
            int128_t* rdi_3;
            
            if (rax_1 <= 0x25)
                switch (rax_1)
                {
                    case 0:
                    {
                        rdi_3 = &var_88;
                        rsi_1 = arg4;
                        rdx_3 = 3;
                        label_521953:
                        uu_sort::KeySettings::set_sort_mode::h47a8d4b518e5b435(rdi_3, rsi_1, rdx_3);
                        
                        if (var_88 == -0x8000000000000000)
                            goto label_5218b8;
                        
                        goto label_521992;
                    }
                    case 5:
                    {
                        rdi_1 = &var_88;
                        rsi = arg4;
                        rdx_2 = 5;
                        goto label_5218a2;
                    }
                    case 9:
                    {
                        rdi_1 = &var_88;
                        rsi = arg4;
                        rdx_2 = 4;
                        label_5218a2:
                        uu_sort::KeySettings::set_sort_mode::h47a8d4b518e5b435(rdi_1, rsi, rdx_2);
                        rax = var_88;
                        
                        if (rax == -0x8000000000000000)
                            goto label_5218b8;
                        
                        int64_t var_80;
                        *(arg1 + 8) = var_80;
                        *arg1 = rax;
                        return rax;
                        break;
                    }
                    case 0x15:
                    {
                        rbp = 1;
                        label_5218b8:
                        rax = core::str::validations::next_code_point::h7a92bc82d8dec435(&var_50, 
                            &jump_table_42ea98);
                        
                        if (rax)
                            continue;
                        
                        rbp &= 1;
                        break;
                        break;
                    }
                    case 0x17:
                    {
                        uu_sort::KeySettings::set_dictionary_order::h4d79f3dcf023ab93(&var_88, 
                            arg4);
                        
                        if (var_88 == -0x8000000000000000)
                            goto label_5218b8;
                        
                        label_521992:
                        int128_t* var_78;
                        *(arg1 + 0x10) = var_78;
                        *arg1 = var_88;
                        return var_78;
                        break;
                    }
                    case 0x19:
                    {
                        *(arg4 + 1) = 1;
                        goto label_5218b8;
                    }
                    case 0x1a:
                    {
                        rdi_3 = &var_88;
                        rsi_1 = arg4;
                        rdx_3 = 2;
                        goto label_521953;
                    }
                    case 0x1b:
                    {
                        rdi_3 = &var_88;
                        rsi_1 = arg4;
                        rdx_3 = 1;
                        goto label_521953;
                    }
                    case 0x1c:
                    {
                        uu_sort::KeySettings::set_ignore_non_printing::h0e99c66f0992ecc6(&var_88, 
                            arg4);
                        
                        if (var_88 == -0x8000000000000000)
                            goto label_5218b8;
                        
                        goto label_521992;
                    }
                    case 0x21:
                    {
                        rdi_1 = &var_88;
                        rsi = arg4;
                        rdx_2 = 0;
                        goto label_5218a2;
                    }
                    case 0x25:
                    {
                        *(arg4 + 4) = 1;
                        goto label_5218b8;
                    }
                }
            int32_t var_54 = rdx_1;
            int32_t* var_40 = &var_54;
            int64_t (* var_38_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
            var_88 = &data_5ffac0;
            int64_t var_80_1 = 2;
            int64_t var_68_1 = 0;
            int32_t** var_78_1 = &var_40;
            int64_t var_70_1 = 1;
            return core::option::Option$LT$T$GT$::map_or_else::h391d7c162d69f44b(arg1, &var_88);
        }
    }
    
    *(arg1 + 8) = rbp;
    *arg1 = -0x8000000000000000;
    return rax;
}
