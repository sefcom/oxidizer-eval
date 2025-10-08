
  fn uu_touch::parse_date::hc2f6ff83abb54cd3(arg1: *mut i64, arg2: *mut i32, arg3: *mut i8, arg4: *mut c_void) -> i64

{
    let mut var_64: i32;
    chrono::naive::datetime::NaiveDateTime::parse_from_str::hdc760f858f0e9f44(&var_64, arg3, arg4, 
        "%a %b %e %H:%M:%S %Y%Y-%m-%d %H:…");
    let mut result: i64;
    let mut rdx_1: i32;
    let mut rdi_1: *mut i32;
    
    if var_64 == 0
    {
        let mut var_c0: i64 = 0;
        let mut result_1: i64 = 4;
        let var_b0_1: *const i8 = "%Y-%m-%d %H:%M:%S%Y-%m-%d %H:%M%…";
        let var_a8_1: i64 = 0x11;
        let var_a0_1: *const i8 = "%Y-%m-%d %H:%M:%S.%f%a %b %e %H:…";
        let var_98_1: i64 = 0x14;
        let var_90_1: *const i8 = "%Y-%m-%d %H:%M%Y%m%d%H%M.%S%Y%m%…";
        let var_88_1: i64 = 0xe;
        let var_80_1: *const i8 = "%Y-%m-%d %H:%M %z%Y%m%d%H%MUTC%z…";
        let var_78_1: i64 = 0x11;
        let mut rax_1: i64 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h699246570341f61a(&var_c0);
        
        if rax_1 != 0
        {
            loop
            {
                let mut var_58: i32;
                chrono::naive::datetime::NaiveDateTime::parse_from_str::hdc760f858f0e9f44(&var_58, 
                    arg3, arg4, rax_1);
                
                if var_58 != 0
                {
                    rdi_1 = &var_58;
                    break;
                }
                
                rax_1 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h699246570341f61a(&var_c0);
                
                if rax_1 == 0
                {
                    goto 'label_53ac11;
                }
            }
            
            goto 'label_53ab07;
        }
        
        'label_53ac11:
        let rax_2: i64 = chrono::naive::date::NaiveDate::parse_from_str::hf55d55429065828f(arg3, 
            arg4, "%Y-%m-%dpattern");
        
        if (rax_2 & 1) == 0
        {
            let mut var_4c: u32 = rax_2 >> 0x20;
            let var_48_1: i64 = 0;
            let mut var_40: ();
            _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_local_datetime::hccb4fb7298479e9d(&var_40, 1, &var_4c);
            chrono::offset::LocalResult$LT$T$GT$::and_then::h5026d116032789f9(&var_c0, &var_40, 
                &var_4c);
            chrono::offset::LocalResult$LT$T$GT$::unwrap::h26556c708ce8fc3f(&var_40, &var_c0);
            result = uu_touch::datetime_to_filetime::h5b8a0eb5c393ab6a(&var_40);
            goto 'label_53ab0c;
        }
        
        if arg4 == 0 || *arg3 != 0x40
        {
            'label_53ac75:
            parse_datetime::parse_datetime_at_date::hce30a59dcd90fe25(&var_c0, arg2, arg3);
            
            if var_c0 == -0x7ffffffffffffffe
            {
                let mut rax_4: i64;
                let mut rdx_6: i32;
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
            let mut rax_3: *mut c_void;
            let mut rdx_4: i64;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, arg3, arg4);
            
            if rax_3 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(arg3, arg4, 1, arg4);
                /* no return */
            }
            
            core::num::_$LT$impl$u20$i64$GT$::from_ascii_radix::h7589f30fc8392b2a(&var_c0, rax_3, 
                rdx_4);
            
            if var_c0 != 0
            {
                goto 'label_53ac75;
            }
            
            result = result_1;
            arg1[1] = result;
            arg1[2] = 0;
            *arg1 = -0x7ffffffffffffffc;
        }
    }
    else
    {
        rdi_1 = &var_64;
        'label_53ab07:
        result = uu_touch::datetime_to_filetime::hd1f2dbebee5994f4(rdi_1);
        'label_53ab0c:
        arg1[1] = result;
        arg1[2] = rdx_1;
        *arg1 = -0x7ffffffffffffffc;
    }
    result
}
