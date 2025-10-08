
  void uu_numfmt::format::remove_suffix::h7f875f2aa3a3c8ad(int128_t* arg1, char arg2, char arg3, char arg4, void* arg5 @ zmm0)

{
    void* var_78 = arg5;
    
    if (arg3 != 2)
    {
        char r8_1 = 2;
        
        if (arg4 - 2 < 4)
            r8_1 = arg4 - 2;
        
        int64_t rax_2;
        char const* const rcx;
        
        if (!(arg3 & 1))
        {
            if (r8_1 >= 2)
            {
                char var_70;
                int64_t* var_60;
                void** const var_30;
                
                if (r8_1 == 2)
                {
                    if (arg4 & 1)
                    {
                        var_70 = arg2;
                        var_30 = &var_78;
                        int64_t (* var_28)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
                        char* var_20 = &var_70;
                        int64_t (* var_18)(char* arg1, int64_t* arg2) = _$LT$uu_numfmt..units..RawSuffix$u20$as$u20$core..fmt..Debug$GT$::fmt::h24671838996c3b7b;
                        var_60 = &data_5023d8;
                        int64_t var_58 = 3;
                        int64_t var_40 = 0;
                        void** const* var_50 = &var_30;
                        int64_t var_48 = 2;
                        core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(arg1, 
                            &var_60);
                        return;
                    }
                    
                    goto label_469c45;
                }
                
                if (arg4 != 5)
                    /* tailcall */
                    return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4c3223c430555e40(arg1, "This suffix is unsupported for s…", 0x2d);
                
                rcx = 1;
                rax_2 = 0;
                label_469c75:
                char var_79 = arg2;
                var_70 = rcx;
                int64_t var_68 = rax_2;
                var_60 = &var_78;
                int64_t (* var_58_1)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
                char* var_50_1 = &var_79;
                int64_t (* var_48_1)(char* arg1, int64_t* arg2) = _$LT$uu_numfmt..units..RawSuffix$u20$as$u20$core..fmt..Debug$GT$::fmt::h24671838996c3b7b;
                char* var_40_1 = &var_70;
                int64_t (* var_38)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::heebe613453956698;
                var_30 = &data_502408;
                int64_t var_28_1 = 4;
                int64_t var_10 = 0;
                int64_t** var_20_1 = &var_60;
                int64_t var_18_1 = 3;
                core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(arg1, &var_30);
                return;
            }
            
            switch (arg2)
            {
                case 0:
                {
                    arg5 = arg5 * 1000.0;
                    break;
                }
                case 1:
                {
                    arg5 = arg5 * 1000000.0;
                    break;
                }
                case 2:
                {
                    arg5 = arg5 * 1000000000.0;
                    break;
                }
                case 3:
                {
                    arg5 = arg5 * 1000000000000.0;
                    break;
                }
                case 4:
                {
                    arg5 = arg5 * 1000000000000000.0;
                    break;
                }
                case 5:
                {
                    arg5 = arg5 * 1e+18;
                    break;
                }
                case 6:
                {
                    arg5 = arg5 * 1e+21;
                    break;
                }
                case 7:
                {
                    arg5 = arg5 * 9.9999999999999998e+23;
                    break;
                }
            }
        }
        else
        {
            if (r8_1 && (r8_1 != 2 || !(arg4 & 1)))
            {
                if (arg4 != 5)
                    /* tailcall */
                    return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4c3223c430555e40(arg1, "This suffix is unsupported for s…", 0x2d);
                
                rax_2 = 1;
                rcx = "iUnit 'auto' isn't supported wit…";
                goto label_469c75;
            }
            
            label_469c45:
            
            switch (arg2)
            {
                case 0:
                {
                    arg5 = arg5 * 1024.0;
                    break;
                }
                case 1:
                {
                    arg5 = arg5 * 1048576.0;
                    break;
                }
                case 2:
                {
                    arg5 = arg5 * 1073741824.0;
                    break;
                }
                case 3:
                {
                    arg5 = arg5 * 1099511627776.0;
                    break;
                }
                case 4:
                {
                    arg5 = arg5 * 1125899906842624.0;
                    break;
                }
                case 5:
                {
                    arg5 = arg5 * 1.152921504606847e+18;
                    break;
                }
                case 6:
                {
                    arg5 = arg5 * 1.1805916207174113e+21;
                    break;
                }
                case 7:
                {
                    arg5 = arg5 * 1.2089258196146292e+24;
                    break;
                }
            }
        }
    }
    
    *(arg1 + 8) = arg5;
    *arg1 = -0x8000000000000000;
}
