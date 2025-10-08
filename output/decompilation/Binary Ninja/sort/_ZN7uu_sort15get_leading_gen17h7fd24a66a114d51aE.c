
  int64_t uu_sort::get_leading_gen::h7fd24a66a114d51a(int64_t arg1, int64_t arg2)

{
    char* rax;
    int64_t rdx;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h6fd1fe3819229226(arg1, arg2);
    int64_t result_1 = arg2 - rdx;
    int64_t var_88 = 0;
    int64_t var_80 = 3;
    char const* const var_78 = "infnanJANFEBMARAPRMAYJUNJULAUGSE…";
    int64_t var_70 = 3;
    char const* const var_68 = "-inflineNoneshim\x1b[0mname    "…";
    int64_t var_60 = 4;
    char const* const var_58 = "nanJANFEBMARAPRMAYJUNJULAUGSEPOC…";
    int64_t var_50 = 3;
    char* rax_2;
    int64_t rdx_1;
    rax_2 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h6d7882ddb4a96050(&var_88);
    int64_t result;
    
    if (!rax_2)
    {
        label_4d6314:
        int64_t var_38_1 = 0;
        char* var_48 = rax;
        void* var_40_1 = &rax[rdx];
        itertools::peek_nth::peek_nth::h92859c16a2f455a1(&var_88, &var_48);
        void* rax_8 =
            itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::h70d91140c83045e8(&var_88, 0);
        
        if (rax_8)
        {
            int32_t rax_9 = *(rax_8 + 8);
            
            if (rax_9 == 0x2d || rax_9 == 0x2b)
                _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86022b484d628b37(&var_88);
        }
        
        int64_t rax_10;
        int32_t rdx_6;
        rax_10 = _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86022b484d628b37(&var_88);
        result = result_1;
        
        if (rdx_6 != 0x110000)
        {
            char rbx_2 = 0;
            char r13_3 = 0;
            
            while (true)
            {
                if (rdx_6 - 0x30 >= 0xa)
                {
                    if (rdx_6 != 0x2e)
                    {
                        if ((rdx_6 & 0xffffffdf) != 0x45 || r13_3 & 1)
                        {
                            core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h06b252700301dda5(&var_88);
                            break;
                        }
                        
                        void* rax_14 =
                            itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::h70d91140c83045e8(
                            &var_88, 0);
                        
                        if (!rax_14)
                        {
                            core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h06b252700301dda5(&var_88);
                            break;
                        }
                        
                        int32_t rax_15 = *(rax_14 + 8);
                        
                        if (rax_15 == 0x2d || rax_15 == 0x2b)
                        {
                            void* rax_16 =
                                itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::h70d91140c83045e8(
                                &var_88, 2);
                            
                            if (!rax_16 || *(rax_16 + 8) - 0x30 > 9)
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
                            
                            if (rax_15 - 0x30 >= 0xa)
                            {
                                core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h06b252700301dda5(&var_88);
                                break;
                            }
                        }
                    }
                    else
                    {
                        if (rbx_2 & 1)
                        {
                            core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h06b252700301dda5(&var_88);
                            break;
                        }
                        
                        rbx_2 = 1;
                        
                        if (r13_3 & 1)
                        {
                            core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h06b252700301dda5(&var_88);
                            break;
                        }
                    }
                }
                
                int64_t rax_12;
                rax_12 = _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86022b484d628b37(&var_88);
                
                if (rdx_6 == 0x110000)
                    goto label_4d637b;
            }
        }
        else
        {
            label_4d637b:
            core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h06b252700301dda5(&var_88);
        }
    }
    else
    {
        char* rbx_1 = rax_2;
        int64_t r13_1 = rdx_1;
        
        while (true)
        {
            if (!r13_1)
            {
                label_4d62db:
                char* rax_4;
                int64_t rdx_4;
                rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r13_1, rax, rdx);
                
                if (!rax_4)
                {
                    core::str::slice_error_fail::h1a2885084e28d077(rax, rdx, 0, r13_1);
                    /* no return */
                }
                
                if (core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rax_4, rdx_4, rbx_1, r13_1))
                {
                    result = result_1;
                    break;
                }
            }
            else if (r13_1 >= rdx)
            {
                if (r13_1 == rdx)
                    goto label_4d62db;
            }
            else if (rax[r13_1] > 0xbf)
                goto label_4d62db;
            
            char* rax_3;
            int64_t rdx_2;
            rax_3 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h6d7882ddb4a96050(&var_88);
            rbx_1 = rax_3;
            r13_1 = rdx_2;
            
            if (!rax_3)
                goto label_4d6314;
        }
    }
    
    return result;
}
