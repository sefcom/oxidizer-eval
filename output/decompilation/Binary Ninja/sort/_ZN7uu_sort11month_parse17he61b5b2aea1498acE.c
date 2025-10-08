
  uint64_t uu_sort::month_parse::he61b5b2aea1498ac()

{
    int64_t rax;
    int64_t var_18 = rax;
    char* rax_1;
    int64_t rdx;
    int64_t rsi;
    int64_t rdi;
    rax_1 = core::str::_$LT$impl$u20$str$GT$::trim_matches::ha7c02580526c77a6(rdi, rsi);
    
    if (rdx <= 3)
    {
        if (rdx != 3)
            return 0;
        
        label_4d662e:
        char* rax_2;
        int64_t rdx_2;
        rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
        
        if (rax_2)
        {
            if (core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_2, rdx_2, "JANFEBMARAPRMAYJUNJULAUGSEPOCTNO…", 3))
                return (&data_58d3d8)[2];
            
            if (rdx < 4 || rax_1[3] >= 0xc0)
                goto label_4d667d;
            
            goto label_4d66bb;
        }
    }
    else
    {
        if (rax_1[3] > 0xbf)
            goto label_4d662e;
        
        if (rax_1[3] < 0xc0)
        {
            label_4d66bb:
            
            if (rax_1[3] < 0xc0)
            {
                label_4d670a:
                
                if (rax_1[3] < 0xc0)
                {
                    label_4d6759:
                    
                    if (rax_1[3] < 0xc0)
                    {
                        label_4d67a8:
                        
                        if (rax_1[3] < 0xc0)
                        {
                            label_4d67f7:
                            
                            if (rax_1[3] < 0xc0)
                            {
                                label_4d6846:
                                
                                if (rax_1[3] < 0xc0)
                                {
                                    label_4d6895:
                                    
                                    if (rax_1[3] < 0xc0)
                                    {
                                        label_4d68e4:
                                        
                                        if (rax_1[3] < 0xc0)
                                        {
                                            label_4d6933:
                                            
                                            if (rax_1[3] < 0xc0)
                                            {
                                                label_4d697f:
                                                
                                                if (rax_1[3] < 0xc0)
                                                    return 0;
                                                
                                                label_4d6990:
                                                char* rax_25;
                                                int64_t rdx_24;
                                                rax_25 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
                                                
                                                if (rax_25)
                                                {
                                                    if (!core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_25, rdx_24, 
                                                            "DECstandard outputwrite failed: …", 3))
                                                        return 0;
                                                    
                                                    return (&data_58d4e0)[2];
                                                }
                                            }
                                            else
                                            {
                                                label_4d6944:
                                                char* rax_23;
                                                int64_t rdx_22;
                                                rax_23 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
                                                
                                                if (rax_23)
                                                {
                                                    if (core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_23, rdx_22, 
                                                            "NOVDECstandard outputwrite faile…", 3))
                                                        return (&data_58d4c8)[2];
                                                    
                                                    if (rdx < 4 || rax_1[3] >= 0xc0)
                                                        goto label_4d6990;
                                                    
                                                    return 0;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            label_4d68f5:
                                            char* rax_21;
                                            int64_t rdx_20;
                                            rax_21 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
                                            
                                            if (rax_21)
                                            {
                                                if (core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_21, rdx_20, 
                                                        "OCTNOVDECstandard outputwrite fa…", 3))
                                                    return (&data_58d4b0)[2];
                                                
                                                if (rdx < 4 || rax_1[3] >= 0xc0)
                                                    goto label_4d6944;
                                                
                                                goto label_4d697f;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        label_4d68a6:
                                        char* rax_19;
                                        int64_t rdx_18;
                                        rax_19 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
                                        
                                        if (rax_19)
                                        {
                                            if (core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_19, rdx_18, 
                                                    "SEPOCTNOVDECstandard outputwrite…", 3))
                                                return (&data_58d498)[2];
                                            
                                            if (rdx < 4 || rax_1[3] >= 0xc0)
                                                goto label_4d68f5;
                                            
                                            goto label_4d6933;
                                        }
                                    }
                                }
                                else
                                {
                                    label_4d6857:
                                    char* rax_17;
                                    int64_t rdx_16;
                                    rax_17 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
                                    
                                    if (rax_17)
                                    {
                                        if (core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_17, rdx_16, "AUGSEPOCTNOVDECstandard outputwr…", 3))
                                            return (&data_58d480)[2];
                                        
                                        if (rdx < 4 || rax_1[3] >= 0xc0)
                                            goto label_4d68a6;
                                        
                                        goto label_4d68e4;
                                    }
                                }
                            }
                            else
                            {
                                label_4d6808:
                                char* rax_15;
                                int64_t rdx_14;
                                rax_15 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
                                
                                if (rax_15)
                                {
                                    if (core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_15, rdx_14, "JULAUGSEPOCTNOVDECstandard outpu…", 3))
                                        return (&data_58d468)[2];
                                    
                                    if (rdx < 4 || rax_1[3] >= 0xc0)
                                        goto label_4d6857;
                                    
                                    goto label_4d6895;
                                }
                            }
                        }
                        else
                        {
                            label_4d67b9:
                            char* rax_13;
                            int64_t rdx_12;
                            rax_13 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
                            
                            if (rax_13)
                            {
                                if (core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_13, rdx_12, "JUNJULAUGSEPOCTNOVDECstandard ou…", 3))
                                    return (&data_58d450)[2];
                                
                                if (rdx < 4 || rax_1[3] >= 0xc0)
                                    goto label_4d6808;
                                
                                goto label_4d6846;
                            }
                        }
                    }
                    else
                    {
                        label_4d676a:
                        char* rax_11;
                        int64_t rdx_10;
                        rax_11 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
                        
                        if (rax_11)
                        {
                            if (core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_11, rdx_10, "MAYJUNJULAUGSEPOCTNOVDECstandard…", 3))
                                return (&data_58d438)[2];
                            
                            if (rdx < 4 || rax_1[3] >= 0xc0)
                                goto label_4d67b9;
                            
                            goto label_4d67f7;
                        }
                    }
                }
                else
                {
                    label_4d671b:
                    char* rax_9;
                    int64_t rdx_8;
                    rax_9 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
                    
                    if (rax_9)
                    {
                        if (core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_9, rdx_8, "APRMAYJUNJULAUGSEPOCTNOVDECstand…", 3))
                            return (&data_58d420)[2];
                        
                        if (rdx < 4 || rax_1[3] >= 0xc0)
                            goto label_4d676a;
                        
                        goto label_4d67a8;
                    }
                }
            }
            else
            {
                label_4d66cc:
                char* rax_7;
                int64_t rdx_6;
                rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
                
                if (rax_7)
                {
                    if (core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_7, rdx_6, "MARAPRMAYJUNJULAUGSEPOCTNOVDECst…", 3))
                        return (&data_58d408)[2];
                    
                    if (rdx < 4 || rax_1[3] >= 0xc0)
                        goto label_4d671b;
                    
                    goto label_4d6759;
                }
            }
        }
        else
        {
            label_4d667d:
            char* rax_5;
            int64_t rdx_4;
            rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(3, rax_1, rdx);
            
            if (rax_5)
            {
                if (core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_5, rdx_4, "FEBMARAPRMAYJUNJULAUGSEPOCTNOVDE…", 3))
                    return (&data_58d3f0)[2];
                
                if (rdx < 4 || rax_1[3] >= 0xc0)
                    goto label_4d66cc;
                
                goto label_4d670a;
            }
        }
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(rax_1, rdx, 0, 3);
    /* no return */
}
