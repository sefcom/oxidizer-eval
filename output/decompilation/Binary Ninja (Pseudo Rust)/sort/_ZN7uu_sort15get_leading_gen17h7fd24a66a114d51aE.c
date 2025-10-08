
  fn uu_sort::get_leading_gen::h7fd24a66a114d51a(arg1: i64, arg2: i64) -> i64

{
    let mut rax: *mut i8;
    let mut rdx: i64;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h6fd1fe3819229226(arg1, arg2);
    let result_1: i64 = arg2 - rdx;
    let mut var_88: i64 = 0;
    let var_80: i64 = 3;
    let var_78: *const i8 = "infnanJANFEBMARAPRMAYJUNJULAUGSE…";
    let var_70: i64 = 3;
    let var_68: *const i8 = "-inflineNoneshim\x1b[0mname    "…";
    let var_60: i64 = 4;
    let var_58: *const i8 = "nanJANFEBMARAPRMAYJUNJULAUGSEPOC…";
    let var_50: i64 = 3;
    let mut rax_2: *mut i8;
    let mut rdx_1: i64;
    rax_2 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h6d7882ddb4a96050(&var_88);
    let mut result: i64;
    
    if rax_2 == 0
    {
        'label_4d6314:
        let var_38_1: i64 = 0;
        let mut var_48: *mut i8 = rax;
        let var_40_1: *mut c_void = &rax[rdx];
        itertools::peek_nth::peek_nth::h92859c16a2f455a1(&var_88, &var_48);
        let rax_8: *mut c_void =
            itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::h70d91140c83045e8(&var_88, 0);
        
        if rax_8 != 0
        {
            let rax_9: i32 = *rax_8.byte_offset(8);
            
            if rax_9 == 0x2d || rax_9 == 0x2b
            {
                _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86022b484d628b37(&var_88);
            }
        }
        
        let mut rax_10: i64;
        let mut rdx_6: i32;
        rax_10 = _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86022b484d628b37(&var_88);
        result = result_1;
        
        if rdx_6 != 0x110000
        {
            let mut rbx_2: i8 = 0;
            let mut r13_3: i8 = 0;
            
            loop
            {
                if rdx_6 - 0x30 >= 0xa
                {
                    if rdx_6 != 0x2e
                    {
                        if (rdx_6 & 0xffffffdf) != 0x45 || (r13_3 & 1) != 0
                        {
                            core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h06b252700301dda5(&var_88);
                            break;
                        }
                        
                        let rax_14: *mut c_void =
                            itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::h70d91140c83045e8(
                            &var_88, 0);
                        
                        if rax_14 == 0
                        {
                            core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h06b252700301dda5(&var_88);
                            break;
                        }
                        
                        let rax_15: i32 = *rax_14.byte_offset(8);
                        
                        if rax_15 == 0x2d || rax_15 == 0x2b
                        {
                            let rax_16: *mut c_void =
                                itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::h70d91140c83045e8(
                                &var_88, 2);
                            
                            if rax_16 == 0 || *rax_16.byte_offset(8) - 0x30 > 9
                            {
                                core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h06b252700301dda5(&var_88);
                                break;
                            }
                            
                            _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86022b484d628b37(&var_88);
                            r13_3 = 1;
                        }
                        else
                        {
                            r13_3 = 1;
                            
                            if rax_15 - 0x30 >= 0xa
                            {
                                core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h06b252700301dda5(&var_88);
                                break;
                            }
                        }
                    }
                    else
                    {
                        if (rbx_2 & 1) != 0
                        {
                            core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h06b252700301dda5(&var_88);
                            break;
                        }
                        
                        rbx_2 = 1;
                        
                        if (r13_3 & 1) != 0
                        {
                            core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h06b252700301dda5(&var_88);
                            break;
                        }
                    }
                }
                
                let mut rax_12: i64;
                rax_12 = _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86022b484d628b37(&var_88);
                
                if rdx_6 == 0x110000
                {
                    goto 'label_4d637b;
                }
            }
        }
        else
        {
            'label_4d637b:
            core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h06b252700301dda5(&var_88);
        }
    }
    else
    {
        let mut rbx_1: *mut i8 = rax_2;
        let mut r13_1: i64 = rdx_1;
        
        loop
        {
            if r13_1 == 0
            {
                'label_4d62db:
                let mut rax_4: *mut i8;
                let mut rdx_4: i64;
                rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r13_1, rax, rdx);
                
                if rax_4 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(rax, rdx, 0, r13_1);
                    /* no return */
                }
                
                if core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_4, rdx_4, rbx_1, r13_1) != 0
                {
                    result = result_1;
                    break;
                }
            }
            else if r13_1 >= rdx
            {
                if r13_1 == rdx
                {
                    goto 'label_4d62db;
                }
            }
            else if rax[r13_1] > 0xbf
            {
                goto 'label_4d62db;
            }
            
            let mut rax_3: *mut i8;
            let mut rdx_2: i64;
            rax_3 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h6d7882ddb4a96050(&var_88);
            rbx_1 = rax_3;
            r13_1 = rdx_2;
            
            if rax_3 == 0
            {
                goto 'label_4d6314;
            }
        }
    }
    
    result
}
