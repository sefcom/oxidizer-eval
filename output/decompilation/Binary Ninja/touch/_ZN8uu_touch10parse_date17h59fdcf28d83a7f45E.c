
  void* uu_touch::parse_date::h59fdcf28d83a7f45(int64_t* arg1, int64_t* arg2, char* arg3, uint64_t arg4)

{
    int32_t var_64;
    chrono::naive::datetime::NaiveDateTime::parse_from_str::hd1f2c37615fc2a8c(&var_64, arg3, arg4, 
        "%a %b %e %H:%M:%S %Y%Y-%m-%d %H:…");
    void* result;
    int32_t rdx_1;
    
    if (!var_64)
    {
        char* var_c0 = "%Y-%m-%d %H:%M:%S%Y-%m-%d %H:%M:…";
        void* result_1 = 0x11;
        char const* const var_b0_1 = "%Y-%m-%d %H:%M:%S.%f%Y-%m-%d %H:…";
        int64_t var_a8_1 = 0x14;
        char const* const var_a0_1 = "%Y-%m-%d %H:%M%Y-%m-%d %H:%M %zs…";
        int64_t var_98_1 = 0xe;
        char const* const var_90_1 = "%Y-%m-%d %H:%M %zsrc/uu/touch/sr…";
        int64_t var_88_1 = 0x11;
        int64_t var_80_1 = 0;
        int64_t var_78_1 = 4;
        int32_t i;
        
        do
        {
            int64_t rax_1 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h72940ebfc6d6072e(&var_c0);
            
            if (!rax_1)
            {
                core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$4_usize$GT$$GT$::he66c702aa3ce8ef4();
                int64_t rax_2 = chrono::naive::date::NaiveDate::parse_from_str::hb11b16b6a593980d(
                    arg3, arg4, "%Y-%m-%dpattern");
                
                if (!(rax_2 & 1))
                {
                    uint32_t var_4c = rax_2 >> 0x20;
                    int64_t var_48_1 = 0;
                    void var_40;
                    _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_local_datetime::h0fa0613822fc0925(&var_40, 1, &var_4c);
                    chrono::offset::LocalResult$LT$T$GT$::and_then::h38ad213f398289fd(&var_c0, 
                        &var_40, &var_4c);
                    chrono::offset::LocalResult$LT$T$GT$::unwrap::h8b21848d5a0bbe28(&var_40, 
                        &var_c0);
                    result = uu_touch::datetime_to_filetime::hee2fe932dd2f3a25(&var_40);
                    goto label_5c33bc;
                }
                
                var_c0 = arg3;
                result_1 = &arg3[arg4];
                char* rax_5 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3fb6acca9c1eba45(&var_c0);
                
                if (rax_5 && *rax_5 == 0x40)
                {
                    void* rax_6;
                    int64_t rdx_8;
                    rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(1, arg3, arg4);
                    
                    if (!rax_6)
                    {
                        core::str::slice_error_fail::h5dbb61534404fe7e(arg3, arg4, 1, arg4);
                        /* no return */
                    }
                    
                    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i64$GT$::from_str::hb0cdd6b069f41ab1(&var_c0, rax_6, rdx_8);
                    
                    if (!var_c0)
                    {
                        result = result_1;
                        arg1[1] = result;
                        arg1[2] = 0;
                        goto label_5c33cd;
                    }
                }
                
                parse_datetime::parse_datetime_at_date::h00767a45bcedb78e(&var_c0, arg2, arg3);
                
                if (var_c0 != -0x7ffffffffffffffe)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$chrono..datetime..DateTime$LT$chrono..offset..fixed..FixedOffset$GT$$C$parse_datetime..ParseDateTimeError$GT$$GT$::h4dc4571e2e7b5171(&var_c0);
                    result = _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he7405723912f7c0b(&arg1[1], arg3, arg4);
                    *arg1 = -0x8000000000000000;
                    goto label_5c34bf;
                }
                
                int64_t rax_7;
                int32_t rdx_10;
                rax_7 = uu_touch::datetime_to_filetime::h45fb62f820aa2d2d(&result_1);
                arg1[1] = rax_7;
                arg1[2] = rdx_10;
                *arg1 = -0x7ffffffffffffffc;
                return core::ptr::drop_in_place$LT$core..result..Result$LT$chrono..datetime..DateTime$LT$chrono..offset..fixed..FixedOffset$GT$$C$parse_datetime..ParseDateTimeError$GT$$GT$::h4dc4571e2e7b5171(&var_c0);
            }
            
            chrono::naive::datetime::NaiveDateTime::parse_from_str::hd1f2c37615fc2a8c(&i, arg3, 
                arg4, rax_1);
        } while (!i);
        
        int32_t rdx_3;
        result = uu_touch::datetime_to_filetime::h06ea8034382622db(&i);
        arg1[1] = result;
        arg1[2] = rdx_3;
        *arg1 = -0x7ffffffffffffffc;
        core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$4_usize$GT$$GT$::he66c702aa3ce8ef4();
    }
    else
    {
        result = uu_touch::datetime_to_filetime::h06ea8034382622db(&var_64);
        label_5c33bc:
        arg1[1] = result;
        arg1[2] = rdx_1;
        label_5c33cd:
        *arg1 = -0x7ffffffffffffffc;
    }
    label_5c34bf:
    return result;
}
