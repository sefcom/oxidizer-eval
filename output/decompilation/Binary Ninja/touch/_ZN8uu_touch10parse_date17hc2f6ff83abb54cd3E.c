
  int64_t uu_touch::parse_date::hc2f6ff83abb54cd3(int64_t* arg1, int32_t* arg2, char* arg3, uint64_t arg4)

{
    int32_t var_64;
    chrono::naive::datetime::NaiveDateTime::parse_from_str::hdc760f858f0e9f44(&var_64, arg3, arg4, 
        "%a %b %e %H:%M:%S %Y%Y-%m-%d %H:…");
    int64_t result;
    int32_t rdx_1;
    int32_t* rdi_1;
    
    if (!var_64)
    {
        int64_t var_c0 = 0;
        int64_t result_1 = 4;
        void* const var_b0_1 = "%Y-%m-%d %H:%M:%S%Y-%m-%d %H:%M%…";
        int64_t var_a8_1 = 0x11;
        char const* const var_a0_1 = "%Y-%m-%d %H:%M:%S.%f%a %b %e %H:…";
        int64_t var_98_1 = 0x14;
        void* const var_90_1 = "%Y-%m-%d %H:%M%Y%m%d%H%M.%S%Y%m%…";
        int64_t var_88_1 = 0xe;
        char const* const var_80_1 = "%Y-%m-%d %H:%M %z%Y%m%d%H%MUTC%z…";
        int64_t var_78_1 = 0x11;
        int64_t rax_1 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h699246570341f61a(&var_c0);
        
        if (rax_1)
        {
            while (true)
            {
                int32_t var_58;
                chrono::naive::datetime::NaiveDateTime::parse_from_str::hdc760f858f0e9f44(&var_58, 
                    arg3, arg4, rax_1);
                
                if (var_58)
                {
                    rdi_1 = &var_58;
                    break;
                }
                
                rax_1 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h699246570341f61a(&var_c0);
                
                if (!rax_1)
                    goto label_53ac11;
            }
            
            goto label_53ab07;
        }
        
        label_53ac11:
        int64_t rax_2 = chrono::naive::date::NaiveDate::parse_from_str::hf55d55429065828f(arg3, 
            arg4, "%Y-%m-%dpattern");
        
        if (!(rax_2 & 1))
        {
            uint32_t var_4c = rax_2 >> 0x20;
            int64_t var_48_1 = 0;
            void var_40;
            _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_local_datetime::hccb4fb7298479e9d(&var_40, 1, &var_4c);
            chrono::offset::LocalResult$LT$T$GT$::and_then::h5026d116032789f9(&var_c0, &var_40, 
                &var_4c);
            chrono::offset::LocalResult$LT$T$GT$::unwrap::h26556c708ce8fc3f(&var_40, &var_c0);
            result = uu_touch::datetime_to_filetime::h5b8a0eb5c393ab6a(&var_40);
            goto label_53ab0c;
        }
        
        if (!arg4 || *arg3 != 0x40)
        {
            label_53ac75:
            parse_datetime::parse_datetime_at_date::hce30a59dcd90fe25(&var_c0, arg2, arg3);
            
            if (var_c0 == -0x7ffffffffffffffe)
            {
                int64_t rax_4;
                int32_t rdx_6;
                rax_4 = uu_touch::datetime_to_filetime::h5b8a0eb5c393ab6a(&result_1);
                arg1[1] = rax_4;
                arg1[2] = rdx_6;
                *arg1 = -0x7ffffffffffffffc;
                return core::ptr::drop_in_place$LT$core..result..Result$LT$chrono..datetime..DateTime$LT$chrono..offset..fixed..FixedOffset$GT$$C$parse_datetime..ParseDateTimeError$GT$$GT$::h7c96216ea4c4b575(&var_c0);
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$chrono..datetime..DateTime$LT$chrono..offset..fixed..FixedOffset$GT$$C$parse_datetime..ParseDateTimeError$GT$$GT$::h7c96216ea4c4b575(&var_c0);
            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h443e6c10e45cdc42(&arg1[1], arg3, arg4);
            *arg1 = -0x8000000000000000;
        }
        else
        {
            void* rax_3;
            int64_t rdx_4;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, arg3, arg4);
            
            if (!rax_3)
            {
                core::str::slice_error_fail::h1a2885084e28d077(arg3, arg4, 1, arg4);
                /* no return */
            }
            
            core::num::_$LT$impl$u20$i64$GT$::from_ascii_radix::h7589f30fc8392b2a(&var_c0, rax_3, 
                rdx_4);
            
            if (var_c0)
                goto label_53ac75;
            
            result = result_1;
            arg1[1] = result;
            arg1[2] = 0;
            *arg1 = -0x7ffffffffffffffc;
        }
    }
    else
    {
        rdi_1 = &var_64;
        label_53ab07:
        result = uu_touch::datetime_to_filetime::hd1f2dbebee5994f4(rdi_1);
        label_53ab0c:
        arg1[1] = result;
        arg1[2] = rdx_1;
        *arg1 = -0x7ffffffffffffffc;
    }
    return result;
}
