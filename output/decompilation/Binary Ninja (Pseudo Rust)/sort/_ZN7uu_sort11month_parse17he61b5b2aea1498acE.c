
  fn uu_sort::month_parse::he61b5b2aea1498ac() -> u64

{
    let rax: i64;
    let var_18: i64 = rax;
    let mut rax_1: *mut i8;
    let mut rdx: i64;
    let rsi: i64;
    let rdi: i64;
    rax_1 = core::str::_$LT$impl$u20$str$GT$::trim_matches::ha7c02580526c77a6(rdi, rsi);
    
    if rdx <= 3
    {
        if rdx != 3
        {
            return 0;
        }
        
        'label_4d662e:
        let mut rax_2: *mut i8;
        let mut rdx_2: i64;
        rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
        
        if rax_2 != 0
        {
            if core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_2, rdx_2, "JANFEBMARAPRMAYJUNJULAUGSEPOCTNO…", 3) != 0
            {
                return (&data_58d3d8)[2];
            }
            
            if rdx < 4 || rax_1[3] >= 0xc0
            {
                goto 'label_4d667d;
            }
            
            goto 'label_4d66bb;
        }
    }
    else
    {
        if rax_1[3] > 0xbf
        {
            goto 'label_4d662e;
        }
        
        if rax_1[3] < 0xc0
        {
            'label_4d66bb:
            
            if rax_1[3] < 0xc0
            {
                'label_4d670a:
                
                if rax_1[3] < 0xc0
                {
                    'label_4d6759:
                    
                    if rax_1[3] < 0xc0
                    {
                        'label_4d67a8:
                        
                        if rax_1[3] < 0xc0
                        {
                            'label_4d67f7:
                            
                            if rax_1[3] < 0xc0
                            {
                                'label_4d6846:
                                
                                if rax_1[3] < 0xc0
                                {
                                    'label_4d6895:
                                    
                                    if rax_1[3] < 0xc0
                                    {
                                        'label_4d68e4:
                                        
                                        if rax_1[3] < 0xc0
                                        {
                                            'label_4d6933:
                                            
                                            if rax_1[3] < 0xc0
                                            {
                                                'label_4d697f:
                                                
                                                if rax_1[3] < 0xc0
                                                {
                                                    return 0;
                                                }
                                                
                                                'label_4d6990:
                                                let mut rax_25: *mut i8;
                                                let mut rdx_24: i64;
                                                rax_25 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
                                                
                                                if rax_25 != 0
                                                {
                                                    if core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_25, rdx_24, 
                                                        "DECstandard outputwrite failed: …", 3) == 0
                                                    {
                                                        return 0;
                                                    }
                                                    
                                                    return (&data_58d4e0)[2];
                                                }
                                            }
                                            else
                                            {
                                                'label_4d6944:
                                                let mut rax_23: *mut i8;
                                                let mut rdx_22: i64;
                                                rax_23 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
                                                
                                                if rax_23 != 0
                                                {
                                                    if core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_23, rdx_22, 
                                                        "NOVDECstandard outputwrite faile…", 3) != 0
                                                    {
                                                        return (&data_58d4c8)[2];
                                                    }
                                                    
                                                    if rdx < 4 || rax_1[3] >= 0xc0
                                                    {
                                                        goto 'label_4d6990;
                                                    }
                                                    
                                                    return 0;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            'label_4d68f5:
                                            let mut rax_21: *mut i8;
                                            let mut rdx_20: i64;
                                            rax_21 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
                                            
                                            if rax_21 != 0
                                            {
                                                if core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_21, rdx_20, 
                                                    "OCTNOVDECstandard outputwrite fa…", 3) != 0
                                                {
                                                    return (&data_58d4b0)[2];
                                                }
                                                
                                                if rdx < 4 || rax_1[3] >= 0xc0
                                                {
                                                    goto 'label_4d6944;
                                                }
                                                
                                                goto 'label_4d697f;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        'label_4d68a6:
                                        let mut rax_19: *mut i8;
                                        let mut rdx_18: i64;
                                        rax_19 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
                                        
                                        if rax_19 != 0
                                        {
                                            if core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_19, rdx_18, "SEPOCTNOVDECstandard outputwrite…", 
                                                3) != 0
                                            {
                                                return (&data_58d498)[2];
                                            }
                                            
                                            if rdx < 4 || rax_1[3] >= 0xc0
                                            {
                                                goto 'label_4d68f5;
                                            }
                                            
                                            goto 'label_4d6933;
                                        }
                                    }
                                }
                                else
                                {
                                    'label_4d6857:
                                    let mut rax_17: *mut i8;
                                    let mut rdx_16: i64;
                                    rax_17 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
                                    
                                    if rax_17 != 0
                                    {
                                        if core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_17, rdx_16, "AUGSEPOCTNOVDECstandard outputwr…", 3)
                                            != 0
                                        {
                                            return (&data_58d480)[2];
                                        }
                                        
                                        if rdx < 4 || rax_1[3] >= 0xc0
                                        {
                                            goto 'label_4d68a6;
                                        }
                                        
                                        goto 'label_4d68e4;
                                    }
                                }
                            }
                            else
                            {
                                'label_4d6808:
                                let mut rax_15: *mut i8;
                                let mut rdx_14: i64;
                                rax_15 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
                                
                                if rax_15 != 0
                                {
                                    if core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_15, rdx_14, "JULAUGSEPOCTNOVDECstandard outpu…", 3) != 0
                                    {
                                        return (&data_58d468)[2];
                                    }
                                    
                                    if rdx < 4 || rax_1[3] >= 0xc0
                                    {
                                        goto 'label_4d6857;
                                    }
                                    
                                    goto 'label_4d6895;
                                }
                            }
                        }
                        else
                        {
                            'label_4d67b9:
                            let mut rax_13: *mut i8;
                            let mut rdx_12: i64;
                            rax_13 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
                            
                            if rax_13 != 0
                            {
                                if core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_13, rdx_12, "JUNJULAUGSEPOCTNOVDECstandard ou…", 3) != 0
                                {
                                    return (&data_58d450)[2];
                                }
                                
                                if rdx < 4 || rax_1[3] >= 0xc0
                                {
                                    goto 'label_4d6808;
                                }
                                
                                goto 'label_4d6846;
                            }
                        }
                    }
                    else
                    {
                        'label_4d676a:
                        let mut rax_11: *mut i8;
                        let mut rdx_10: i64;
                        rax_11 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
                        
                        if rax_11 != 0
                        {
                            if core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_11, rdx_10, "MAYJUNJULAUGSEPOCTNOVDECstandard…", 3) != 0
                            {
                                return (&data_58d438)[2];
                            }
                            
                            if rdx < 4 || rax_1[3] >= 0xc0
                            {
                                goto 'label_4d67b9;
                            }
                            
                            goto 'label_4d67f7;
                        }
                    }
                }
                else
                {
                    'label_4d671b:
                    let mut rax_9: *mut i8;
                    let mut rdx_8: i64;
                    rax_9 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
                    
                    if rax_9 != 0
                    {
                        if core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_9, rdx_8, "APRMAYJUNJULAUGSEPOCTNOVDECstand…", 3) != 0
                        {
                            return (&data_58d420)[2];
                        }
                        
                        if rdx < 4 || rax_1[3] >= 0xc0
                        {
                            goto 'label_4d676a;
                        }
                        
                        goto 'label_4d67a8;
                    }
                }
            }
            else
            {
                'label_4d66cc:
                let mut rax_7: *mut i8;
                let mut rdx_6: i64;
                rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
                
                if rax_7 != 0
                {
                    if core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_7, rdx_6, "MARAPRMAYJUNJULAUGSEPOCTNOVDECst…", 3) != 0
                    {
                        return (&data_58d408)[2];
                    }
                    
                    if rdx < 4 || rax_1[3] >= 0xc0
                    {
                        goto 'label_4d671b;
                    }
                    
                    goto 'label_4d6759;
                }
            }
        }
        else
        {
            'label_4d667d:
            let mut rax_5: *mut i8;
            let mut rdx_4: i64;
            rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
            
            if rax_5 != 0
            {
                if core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_5, rdx_4, "FEBMARAPRMAYJUNJULAUGSEPOCTNOVDE…", 3) != 0
                {
                    return (&data_58d3f0)[2];
                }
                
                if rdx < 4 || rax_1[3] >= 0xc0
                {
                    goto 'label_4d66cc;
                }
                
                goto 'label_4d670a;
            }
        }
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(rax_1, rdx, 0, 3);
    /* no return */
}
