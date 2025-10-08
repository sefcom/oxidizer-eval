
  int64_t* uu_sort::FieldSelector::parse_with_options::parse_key_settings::h14361e95480b66df(int128_t* arg1, int64_t arg2, int64_t arg3, void* arg4)

{
    uint64_t rbx;
    uint64_t var_30 = rbx;
    int64_t var_50 = arg2;
    int64_t var_48 = arg3 + arg2;
    char rax;
    int32_t rdx_1;
    rax = core::str::validations::next_code_point::h9988461282470584(&var_50, rbx);
    char rbp = 0;
    int64_t* rax_5;
    
    if (rax & 1)
    {
        while (true)
        {
            uint64_t rax_2 = rdx_1 - 0x4d;
            int64_t* var_88;
            bool rdx_2;
            void* rsi_1;
            int64_t* rdi_3;
            
            if (rax_2 <= 0x25)
                switch (rax_2)
                {
                    case 0:
                    {
                        uu_sort::KeySettings::set_sort_mode::h0494465a2c1513d1(&var_88, arg4, true);
                        
                        if (var_88 == -0x8000000000000000)
                            goto label_4d3763;
                        
                        label_4d3889:
                        int64_t* var_78;
                        arg1[1] = var_78;
                        *arg1 = var_88;
                        return var_78;
                        break;
                    }
                    case 5:
                    {
                        rdi_3 = &var_88;
                        rsi_1 = arg4;
                        rdx_2 = true;
                        goto label_4d3815;
                    }
                    case 9:
                    {
                        rdi_3 = &var_88;
                        rsi_1 = arg4;
                        rdx_2 = true;
                        label_4d3815:
                        uu_sort::KeySettings::set_sort_mode::h0494465a2c1513d1(rdi_3, rsi_1, rdx_2);
                        rax_5 = var_88;
                        
                        if (rax_5 == -0x8000000000000000)
                            goto label_4d3763;
                        
                        goto label_4d387b;
                    }
                    case 0x15:
                    {
                        rbp = 1;
                        label_4d3763:
                        char rax_1;
                        rax_1 = core::str::validations::next_code_point::h9988461282470584(&var_50, 
                            &jump_table_428a88);
                        
                        if (!(rax_1 & 1))
                            break;
                        
                        continue;
                    }
                    case 0x17:
                    {
                        uu_sort::KeySettings::set_dictionary_order::h7dadc9f8379aee5d(&var_88, 
                            arg4);
                        
                        if (var_88 == -0x8000000000000000)
                            goto label_4d3763;
                        
                        goto label_4d3889;
                    }
                    case 0x19:
                    {
                        *(arg4 + 1) = 1;
                        goto label_4d3763;
                    }
                    case 0x1a:
                    {
                        uu_sort::KeySettings::set_sort_mode::h0494465a2c1513d1(&var_88, arg4, true);
                        
                        if (var_88 == -0x8000000000000000)
                            goto label_4d3763;
                        
                        goto label_4d3889;
                    }
                    case 0x1b:
                    {
                        uu_sort::KeySettings::set_sort_mode::h0494465a2c1513d1(&var_88, arg4, true);
                        
                        if (var_88 == -0x8000000000000000)
                            goto label_4d3763;
                        
                        goto label_4d3889;
                    }
                    case 0x1c:
                    {
                        uu_sort::KeySettings::set_ignore_non_printing::hb18c264c9cade1ef(&var_88, 
                            arg4);
                        rax_5 = var_88;
                        
                        if (rax_5 == -0x8000000000000000)
                            goto label_4d3763;
                        
                        label_4d387b:
                        void** rcx = arg1;
                        int64_t var_80;
                        *(rcx + 8) = var_80;
                        *rcx = rax_5;
                        return rax_5;
                        break;
                    }
                    case 0x21:
                    {
                        rdi_3 = &var_88;
                        rsi_1 = arg4;
                        rdx_2 = false;
                        goto label_4d3815;
                    }
                    case 0x25:
                    {
                        *(arg4 + 4) = 1;
                        goto label_4d3763;
                    }
                }
            int32_t var_54 = rdx_1;
            int32_t* var_40 = &var_54;
            int64_t (* var_38_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
            var_88 = &data_58d098;
            int64_t var_80_1 = 2;
            int64_t var_68_1 = 0;
            int32_t** var_78_1 = &var_40;
            int64_t var_70_1 = 1;
            return core::option::Option$LT$T$GT$::map_or_else::h9f6bdb3fe8306f69(arg1, &var_88);
        }
    }
    
    rax_5 = arg1;
    rax_5[1] = rbp;
    *rax_5 = -0x8000000000000000;
    return rax_5;
}
