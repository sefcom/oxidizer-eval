
  uint64_t uu_numfmt::format::remove_suffix::h52c5c1e5f9168522(int128_t* arg1, char arg2, bool arg3, int32_t arg4, char const (* arg5)[0xa3] @ zmm0)

{
    char const (* var_78)[0xa3] = arg5;
    uint64_t result = arg4 - 2;
    char const (** const var_70)[0xa3];
    int64_t* var_30;
    
    if (arg3 != 2)
    {
        char r8_1 = 2;
        
        if (result < 4)
            r8_1 = result;
        
        char const* const var_40;
        
        switch (r8_1)
        {
            case 0:
            {
                if (!(arg3 & 1))
                {
                    label_4c38b9:
                    result = jump_table_422e94[arg2] + &jump_table_422e94;
                    
                    switch (result)
                    {
                        case 0x4c38be:
                        {
                            arg5 = arg5 * 1000.0;
                            break;
                        }
                        case 0x4c3916:
                        {
                            arg5 = arg5 * 1000000000000000.0;
                            break;
                        }
                        case 0x4c392a:
                        {
                            arg5 = arg5 * 1000000000.0;
                            break;
                        }
                        case 0x4c3952:
                        {
                            arg5 = arg5 * 1000000000000.0;
                            break;
                        }
                        case 0x4c395c:
                        {
                            arg5 = arg5 * 9.9999999999999998e+23;
                            break;
                        }
                        case 0x4c3966:
                        {
                            arg5 = arg5 * 1000000.0;
                            break;
                        }
                        case 0x4c3984:
                        {
                            arg5 = arg5 * 1e+18;
                            break;
                        }
                        case 0x4c398e:
                        {
                            arg5 = arg5 * 1e+21;
                            break;
                        }
                    }
                }
                else
                {
                    label_4c38f7:
                    result = jump_table_422e74[arg2] + &jump_table_422e74;
                    
                    switch (result)
                    {
                        case 0x4c38fc:
                        {
                            arg5 = arg5 * 1024.0;
                            break;
                        }
                        case 0x4c3909:
                        {
                            arg5 = arg5 * 1125899906842624.0;
                            break;
                        }
                        case 0x4c3920:
                        {
                            arg5 = arg5 * 1073741824.0;
                            break;
                        }
                        case 0x4c3934:
                        {
                            arg5 = arg5 * 1099511627776.0;
                            break;
                        }
                        case 0x4c393e:
                        {
                            arg5 = arg5 * 1.2089258196146292e+24;
                            break;
                        }
                        case 0x4c3948:
                        {
                            arg5 = arg5 * 1048576.0;
                            break;
                        }
                        case 0x4c3970:
                        {
                            arg5 = arg5 * 1.152921504606847e+18;
                            break;
                        }
                        case 0x4c397a:
                        {
                            arg5 = arg5 * 1.1805916207174113e+21;
                            break;
                        }
                    }
                }
                break;
            }
            case 1:
            {
                if (arg3 & 1)
                    /* tailcall */
                    return _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h523a2f825c855b37(arg1, "This suffix is unsupported for s…", 0x2d);
                
                goto label_4c38b9;
            }
            case 2:
            {
                if (arg3 & 1)
                {
                    if (arg4 & 1)
                        goto label_4c38f7;
                    
                    /* tailcall */
                    return _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h523a2f825c855b37(arg1, "This suffix is unsupported for s…", 0x2d);
                }
                
                if (!(arg4 & 1))
                    goto label_4c38f7;
                
                var_40 = arg2;
                var_30 = &var_78;
                int64_t (* var_28_1)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
                char const* const* var_20_1 = &var_40;
                int64_t (* var_18_1)(char* arg1, void* arg2) = _$LT$uu_numfmt..units..RawSuffix$u20$as$u20$core..fmt..Debug$GT$::fmt::ha046da94eec79152;
                var_70 = &data_535b18;
                int64_t var_68_1 = 3;
                int64_t var_50_1 = 0;
                int64_t** var_60_1 = &var_30;
                int64_t var_58_1 = 2;
                return core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(arg1, &var_70);
                break;
            }
            case 3:
            {
                char var_79 = arg2;
                arg3 &= 1;
                char const* const rcx = 1;
                
                if (arg3)
                    rcx = "iUnit 'auto' isn't supported wit…";
                
                var_40 = rcx;
                uint64_t var_38_1 = arg3;
                var_70 = &var_78;
                int64_t (* var_68_2)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
                char* var_60_2 = &var_79;
                int64_t (* var_58_2)(char* arg1, void* arg2) = _$LT$uu_numfmt..units..RawSuffix$u20$as$u20$core..fmt..Debug$GT$::fmt::ha046da94eec79152;
                int64_t* var_50_2 = &var_40;
                int64_t (* var_48_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h82a8b331819c1dee;
                var_30 = &data_535b48;
                int64_t var_28_2 = 4;
                int64_t var_10_1 = 0;
                char const (** const* var_20_2)[0xa3] = &var_70;
                int64_t var_18_2 = 3;
                return core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(arg1, &var_30);
                break;
            }
        }
    }
    else
    {
        bool c_1 = result < 4;
        result = result != 2;
        
        if (arg4 & 1 && !(c_1 & result))
        {
            var_30 = &var_78;
            int64_t (* var_28)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            var_70 = &data_535af8;
            int64_t var_68 = 2;
            int64_t var_50 = 0;
            int64_t** var_60 = &var_30;
            int64_t var_58 = 1;
            return core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(arg1, &var_70);
        }
    }
    *(arg1 + 8) = arg5;
    *arg1 = -0x8000000000000000;
    return result;
}
