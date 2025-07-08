
  fn uu_sort::get_leading_gen::h381fabafeef8de83(arg1: i64, arg2: *mut c_void) -> *mut c_void

{
    let mut rbp: *const *const i8;
    let var_8: *const *const i8 = rbp;
    let mut rax: *mut i8;
    let mut rdx: *mut c_void;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hbba8ab33437caca6(arg1, arg2);
    let mut var_88: *const i8 = "infnanJANFEBMARAPRMAYJUNJULAUGSE…";
    let var_80: i64 = 3;
    let mut var_78: *const i8 = "-inflineNoneshimname\x1b[0m    N…";
    let var_70: i64 = 4;
    let mut var_68: *const i8 = "nanJANFEBMARAPRMAYJUNJULAUGSEPOC…";
    let var_60: i64 = 3;
    let var_58: i64 = 0;
    let var_50: i64 = 3;
    
    if rax == 0
    {
        let mut r13_1: *mut c_void = nullptr;
        
        loop
        {
            let mut rax_3: i64;
            let mut rdx_3: i64;
            rax_3 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5ce99848dcb7192c(&var_88);
            
            if rax_3 == 0
            {
                break;
            }
            
            if rdx_3 != 0
            {
                if rdx_3 != rdx
                {
                    continue;
                }
                else
                {
                    r13_1 = rdx;
                }
            }
            
            core::str::slice_error_fail::h5dbb61534404fe7e(nullptr, rdx, nullptr, r13_1);
            /* no return */
        }
        
        'label_5242b4:
        core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h5e8c4d5bbc8b3091();
        let var_38_1: i64 = 0;
        let mut var_48: *mut i8 = rax;
        let var_40_1: *mut c_void = rax.byte_offset(rdx);
        core::iter::traits::iterator::Iterator::fuse::hdd6e28be1a8e845d(&var_68, &var_48);
        var_88 = nullptr;
        let var_80_1: i64 = 8;
        var_78 = {0};
        let rax_6: *mut c_void =
            itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::haa0f1378b280dbbc(&var_88, 0);
        
        if rax_6 != 0
        {
            let rax_7: i32 = *rax_6.byte_offset(8);
            
            if rax_7 == 0x2d || rax_7 == 0x2b
            {
                _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he415a40120613359(&var_88);
            }
        }
        
        rbp = 1;
        let mut r13_2: i32 = 0;
        
        loop
        {
            let mut rax_8: i32 = r13_2;
            let mut rdx_4: i32;
            let mut rcx_3: bool;
            
            do
            {
                r13_2 = rax_8;
                
                do
                {
                    let mut rax_9: *mut c_void;
                    rax_9 = _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he415a40120613359(&var_88);
                    
                    if rdx_4 == 0x110000
                    {
                        core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h99fb1acb9dd0bcb6(&var_88);
                        goto 'label_5243f4;
                    }
                } while rdx_4 - 0x30 < 0xa;
                
                rax_8 = rdx_4 == 0x2e;
                rcx_3 = r13_2 == 0 & rax_8;
                rax_8 = 1;
            } while (rcx_3 & rbp) != 0;
            rax_8 = (rdx_4 & 0xffffffdf) == 0x45;
            
            if (rax_8 & rbp) == 0
            {
                break;
            }
            
            let rax_10: *mut c_void =
                itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::haa0f1378b280dbbc(&var_88, 0);
            
            if rax_10 == 0
            {
                break;
            }
            
            let rax_11: i32 = *rax_10.byte_offset(8);
            
            if rax_11 != 0x2d && rax_11 != 0x2b
            {
                rbp = nullptr;
                
                if rax_11 - 0x30 >= 0xa
                {
                    break;
                }
                
                continue;
            }
            
            let rax_12: *mut c_void =
                itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::haa0f1378b280dbbc(&var_88, 2);
            
            if rax_12 == 0
            {
                break;
            }
            
            if *rax_12.byte_offset(8) - 0x30 > 9
            {
                break;
            }
            
            rbp = nullptr;
            _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he415a40120613359(&var_88);
        }
        
        core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h99fb1acb9dd0bcb6(&var_88);
    }
    else
    {
        loop
        {
            let mut rax_1: i64;
            let mut rdx_1: *mut *mut i8;
            rax_1 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5ce99848dcb7192c(&var_88);
            
            if rax_1 == 0
            {
                goto 'label_5242b4;
            }
            
            if rdx_1 != 0
            {
                if rdx_1 >= rdx
                {
                    if rdx_1 != rdx
                    {
                        continue;
                    }
                }
                else if *rax.byte_offset(rdx_1) <= 0xbf
                {
                    continue;
                }
            }
            
            if core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he7c08894b5496a04(rax, rdx_1, rax_1, rdx_1) != 0
            {
                core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h5e8c4d5bbc8b3091();
                break;
            }
        }
    }
    
    'label_5243f4:
    arg2.byte_offset(-rdx)
}
