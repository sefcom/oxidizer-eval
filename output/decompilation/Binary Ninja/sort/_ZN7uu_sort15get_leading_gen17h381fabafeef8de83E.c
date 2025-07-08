
  void* uu_sort::get_leading_gen::h381fabafeef8de83(int64_t arg1, void* arg2)

{
    char const* const* rbp;
    char const* const* var_8 = rbp;
    char* rax;
    void* rdx;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hbba8ab33437caca6(arg1, arg2);
    char const* const var_88 = "infnanJANFEBMARAPRMAYJUNJULAUGSE…";
    int64_t var_80 = 3;
    char const* const var_78 = "-inflineNoneshimname\x1b[0m    N…";
    int64_t var_70 = 4;
    char const* const var_68 = "nanJANFEBMARAPRMAYJUNJULAUGSEPOC…";
    int64_t var_60 = 3;
    int64_t var_58 = 0;
    int64_t var_50 = 3;
    
    if (!rax)
    {
        void* r13_1 = nullptr;
        
        while (true)
        {
            int64_t rax_3;
            int64_t rdx_3;
            rax_3 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5ce99848dcb7192c(&var_88);
            
            if (!rax_3)
                break;
            
            if (rdx_3)
            {
                if (rdx_3 != rdx)
                    continue;
                else
                    r13_1 = rdx;
            }
            
            core::str::slice_error_fail::h5dbb61534404fe7e(nullptr, rdx, nullptr, r13_1);
            /* no return */
        }
        
        label_5242b4:
        core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h5e8c4d5bbc8b3091();
        int64_t var_38_1 = 0;
        char* var_48 = rax;
        void* var_40_1 = rax + rdx;
        core::iter::traits::iterator::Iterator::fuse::hdd6e28be1a8e845d(&var_68, &var_48);
        var_88 = nullptr;
        int64_t var_80_1 = 8;
        var_78 = {0};
        void* rax_6 =
            itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::haa0f1378b280dbbc(&var_88, 0);
        
        if (rax_6)
        {
            int32_t rax_7 = *(rax_6 + 8);
            
            if (rax_7 == 0x2d || rax_7 == 0x2b)
                _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he415a40120613359(&var_88);
        }
        
        rbp = 1;
        int32_t r13_2 = 0;
        
        while (true)
        {
            int32_t rax_8 = r13_2;
            int32_t rdx_4;
            bool rcx_3;
            
            do
            {
                r13_2 = rax_8;
                
                do
                {
                    void* rax_9;
                    rax_9 = _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he415a40120613359(&var_88);
                    
                    if (rdx_4 == 0x110000)
                    {
                        core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h99fb1acb9dd0bcb6(&var_88);
                        goto label_5243f4;
                    }
                } while (rdx_4 - 0x30 < 0xa);
                
                rax_8 = rdx_4 == 0x2e;
                rcx_3 = !r13_2 & rax_8;
                rax_8 = 1;
            } while (rcx_3 & rbp);
            rax_8 = (rdx_4 & 0xffffffdf) == 0x45;
            
            if (!(rax_8 & rbp))
                break;
            
            void* rax_10 =
                itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::haa0f1378b280dbbc(&var_88, 0);
            
            if (!rax_10)
                break;
            
            int32_t rax_11 = *(rax_10 + 8);
            
            if (rax_11 != 0x2d && rax_11 != 0x2b)
            {
                rbp = nullptr;
                
                if (rax_11 - 0x30 >= 0xa)
                    break;
                
                continue;
            }
            
            void* rax_12 =
                itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::haa0f1378b280dbbc(&var_88, 2);
            
            if (!rax_12)
                break;
            
            if (*(rax_12 + 8) - 0x30 > 9)
                break;
            
            rbp = nullptr;
            _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he415a40120613359(&var_88);
        }
        
        core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h99fb1acb9dd0bcb6(&var_88);
    }
    else
    {
        while (true)
        {
            int64_t rax_1;
            char** rdx_1;
            rax_1 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5ce99848dcb7192c(&var_88);
            
            if (!rax_1)
                goto label_5242b4;
            
            if (rdx_1)
            {
                if (rdx_1 >= rdx)
                {
                    if (rdx_1 != rdx)
                        continue;
                }
                else if (*(rax + rdx_1) <= 0xbf)
                    continue;
            }
            
            if (core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he7c08894b5496a04(rax, rdx_1, rax_1, rdx_1))
            {
                core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h5e8c4d5bbc8b3091();
                break;
            }
        }
    }
    
    label_5243f4:
    return arg2 - rdx;
}
