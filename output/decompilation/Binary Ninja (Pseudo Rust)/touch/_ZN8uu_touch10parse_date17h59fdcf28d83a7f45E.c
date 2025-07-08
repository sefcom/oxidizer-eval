
  fn uu_touch::parse_date::h59fdcf28d83a7f45(arg1: *mut i64, arg2: *mut i64, arg3: *mut i8, arg4: u64) -> *mut c_void

{
    let mut var_64: i32;
    chrono::naive::datetime::NaiveDateTime::parse_from_str::hd1f2c37615fc2a8c(&var_64, arg3, arg4, 
        "%a %b %e %H:%M:%S %Y%Y-%m-%d %H:…");
    let mut result: *mut c_void;
    let mut rdx_1: i32;
    
    if var_64 == 0
    {
        let mut var_c0: *mut i8 = "%Y-%m-%d %H:%M:%S%Y-%m-%d %H:%M:…";
        let mut result_1: *mut c_void = 0x11;
        let var_b0_1: *const i8 = "%Y-%m-%d %H:%M:%S.%f%Y-%m-%d %H:…";
        let var_a8_1: i64 = 0x14;
        let var_a0_1: *const i8 = "%Y-%m-%d %H:%M%Y-%m-%d %H:%M %zs…";
        let var_98_1: i64 = 0xe;
        let var_90_1: *const i8 = "%Y-%m-%d %H:%M %zsrc/uu/touch/sr…";
        let var_88_1: i64 = 0x11;
        let var_80_1: i64 = 0;
        let var_78_1: i64 = 4;
        let mut i: i32;
        
        do
        {
            let rax_1: i64 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h72940ebfc6d6072e(&var_c0);
            
            if rax_1 == 0
            {
                core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$4_usize$GT$$GT$::he66c702aa3ce8ef4();
                let rax_2: i64 = chrono::naive::date::NaiveDate::parse_from_str::hb11b16b6a593980d(
                    arg3, arg4, "%Y-%m-%dpattern");
                
                if (rax_2 & 1) == 0
                {
                    let mut var_4c: u32 = rax_2 >> 0x20;
                    let var_48_1: i64 = 0;
                    let mut var_40: ();
                    _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_local_datetime::h0fa0613822fc0925(&var_40, 1, &var_4c);
                    chrono::offset::LocalResult$LT$T$GT$::and_then::h38ad213f398289fd(&var_c0, 
                        &var_40, &var_4c);
                    chrono::offset::LocalResult$LT$T$GT$::unwrap::h8b21848d5a0bbe28(&var_40, 
                        &var_c0);
                    result = uu_touch::datetime_to_filetime::hee2fe932dd2f3a25(&var_40);
                    goto 'label_5c33bc;
                }
                
                var_c0 = arg3;
                result_1 = &arg3[arg4];
                let rax_5: *mut i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3fb6acca9c1eba45(&var_c0);
                
                if rax_5 != 0 && *rax_5 == 0x40
                {
                    let mut rax_6: *mut c_void;
                    let mut rdx_8: i64;
                    rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(1, arg3, arg4);
                    
                    if rax_6 == 0
                    {
                        core::str::slice_error_fail::h5dbb61534404fe7e(arg3, arg4, 1, arg4);
                        /* no return */
                    }
                    
                    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i64$GT$::from_str::hb0cdd6b069f41ab1(&var_c0, rax_6, rdx_8);
                    
                    if var_c0 == 0
                    {
                        result = result_1;
                        arg1[1] = result;
                        arg1[2] = 0;
                        goto 'label_5c33cd;
                    }
                }
                
                parse_datetime::parse_datetime_at_date::h00767a45bcedb78e(&var_c0, arg2, arg3);
                
                if var_c0 != -0x7ffffffffffffffe
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$chrono..datetime..DateTime$LT$chrono..offset..fixed..FixedOffset$GT$$C$parse_datetime..ParseDateTimeError$GT$$GT$::h4dc4571e2e7b5171(&var_c0);
                    result = _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he7405723912f7c0b(&arg1[1], arg3, arg4);
                    *arg1 = -0x8000000000000000;
                    goto 'label_5c34bf;
                }
                
                let mut rax_7: i64;
                let mut rdx_10: i32;
                rax_7 = uu_touch::datetime_to_filetime::h45fb62f820aa2d2d(&result_1);
                arg1[1] = rax_7;
                arg1[2] = rdx_10;
                *arg1 = -0x7ffffffffffffffc;
                return core::ptr::drop_in_place$LT$core..result..Result$LT$chrono..datetime..DateTime$LT$chrono..offset..fixed..FixedOffset$GT$$C$parse_datetime..ParseDateTimeError$GT$$GT$::h4dc4571e2e7b5171(&var_c0);
            }
            
            chrono::naive::datetime::NaiveDateTime::parse_from_str::hd1f2c37615fc2a8c(&i, arg3, 
                arg4, rax_1);
        } while i == 0;
        
        let mut rdx_3: i32;
        result = uu_touch::datetime_to_filetime::h06ea8034382622db(&i);
        arg1[1] = result;
        arg1[2] = rdx_3;
        *arg1 = -0x7ffffffffffffffc;
        core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$4_usize$GT$$GT$::he66c702aa3ce8ef4();
    }
    else
    {
        result = uu_touch::datetime_to_filetime::h06ea8034382622db(&var_64);
        'label_5c33bc:
        arg1[1] = result;
        arg1[2] = rdx_1;
        'label_5c33cd:
        *arg1 = -0x7ffffffffffffffc;
    }
    'label_5c34bf:
    result
}
