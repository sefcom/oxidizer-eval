long long uu_sort::get_leading_gen::h381fabafeef8de83(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [sp-0x88], Other Possible Types: unsigned long
    unsigned long long v1;  // [sp-0x80]
    int v2;  // [bp-0x78], Other Possible Types: unsigned long
    unsigned long long v3;  // [sp-0x70]
    unsigned long v4;  // [sp-0x68]
    unsigned long long v5;  // [sp-0x60]
    void* v6;  // [sp-0x58]
    unsigned long long v7;  // [sp-0x50]
    char *v8;  // [sp-0x48]
    unsigned long long v9;  // [sp-0x40]
    void* v10;  // [sp-0x38]
    char *v12;  // r12
    unsigned long long v14;  // rax
    struct_0 *v15;  // rax
    void* v17;  // r13
    unsigned int v18;  // eax
    unsigned long long v19;  // rax
    struct_0 *v20;  // rax
    unsigned int v21;  // eax
    struct_0 *v22;  // rax
    char *v23;  // rdx

    v12 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hbba8ab33437caca6(a0, a1);
    v0 = "inf";
    v1 = 3;
    v2 = "-inf";
    v3 = 4;
    v4 = "nanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC";
    v5 = 3;
    v6 = 0;
    v7 = 3;
    if (!v12)
    {
        while (_$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5ce99848dcb7192c(&v0))
        {
            if (!v23)
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(0, v23, 0, 0, &g_5ffdf0); /* do not return */
            }
            else if (v23 == v23)
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(0, v23, 0, v23, &g_5ffdf0); /* do not return */
            }
        }
    }
    else
    {
        while (true)
        {
            v14 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5ce99848dcb7192c(&v0);
            if (!v14)
                break;
            if (v23)
            {
                if (v23 >= v23)
                {
                    if (!(v23 == v23))
                        continue;
                }
                else
                {
                    if (*((char *)(v12 + v23)) <= 191)
                        continue;
                }
            }
            if ((char)::0x51c850::core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he7c08894b5496a04(v12, v23, v14, v23))
            {
                ::0x51b5c0::core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h5e8c4d5bbc8b3091();
                return a1 - v23;
            }
        }
    }
    ::0x51b5c0::core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h5e8c4d5bbc8b3091();
    v10 = 0;
    v8 = v12;
    v9 = v12 + v23;
    core::iter::traits::iterator::Iterator::fuse::hdd6e28be1a8e845d(&v4, &v8);
    v0 = 0;
    v1 = 8;
    *((uint128_t *)&v2) = 0;
    v15 = itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::haa0f1378b280dbbc(&v0, 0);
    if (v15 && (v15->field_8 == 45 || v15->field_8 == 43))
        _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he415a40120613359(&v0);
    v17 = 0;
    while (true)
    {
        v18 = (unsigned int)v17;
        do
        {
            v17 = v18;
            do
            {
                _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he415a40120613359(&v0);
                if ((unsigned int)v23 == 0x110000)
                {
                    core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h99fb1acb9dd0bcb6(&v0);
                    return a1 - v23;
                }
            } while ((v19 = v23 - 48 & 4294967295, (unsigned int)v19 < 10));
            v18 = v19 & 0xffffffffffffff00 | 1;
        } while ((1 & !(v17 & 255 & 255) & (unsigned int)v23 == 46));
        if (!((1 & ((unsigned int)v23 & 4294967263) == 69)) || !((v20 = itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::haa0f1378b280dbbc(&v0, 0), v20)))
            break;
        v21 = v20->field_8;
        if (!(v21 != 45 && v21 != 43))
        {
            v22 = itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::haa0f1378b280dbbc(&v0, 2);
            if (!(v22) || !(v22->field_8 - 48 <= 9))
                break;
            _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he415a40120613359(&v0);
        }
        else if (v21 - 48 >= 10)
        {
            break;
        }
    }
    core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h99fb1acb9dd0bcb6(&v0);
    return a1 - v23;
}
