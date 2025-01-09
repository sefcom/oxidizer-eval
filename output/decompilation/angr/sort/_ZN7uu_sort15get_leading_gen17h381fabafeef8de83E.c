long long uu_sort::get_leading_gen::h381fabafeef8de83(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [sp-0x88], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x80]
    int v2;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x70]
    unsigned long v4;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x60]
    void* v6;  // [sp-0x58]
    unsigned long long v7;  // [sp-0x50]
    char *v8;  // [sp-0x48]
    unsigned long long v9;  // [sp-0x40]
    void* v10;  // [sp-0x38]
    char *v12;  // r12
    unsigned long long v14;  // rax
    char *v15;  // r13
    struct_0 *v16;  // rax
    void* v18;  // r13
    unsigned int v19;  // eax
    unsigned long long v20;  // rax
    struct_0 *v21;  // rax
    unsigned int v22;  // eax
    struct_0 *v23;  // rax
    char *v24;  // rdx

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
            v15 = 0;
            if (!v24)
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(0, v24, 0, v15, &g_5ffdf0); /* do not return */
            }
            else if (v24 == v24)
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(0, v24, 0, v15, &g_5ffdf0); /* do not return */
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
            if (v24)
            {
                if (v24 >= v24)
                {
                    if (!(v24 == v24))
                        continue;
                }
                else
                {
                    if (*((char *)(v12 + v24)) <= 191)
                        continue;
                }
            }
            if ((char)::0x51c850::core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he7c08894b5496a04(v12, v24, v14, v24))
            {
                ::0x51b5c0::core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h5e8c4d5bbc8b3091();
                return a1 - v24;
            }
        }
    }
    ::0x51b5c0::core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h5e8c4d5bbc8b3091();
    v10 = 0;
    v8 = v12;
    v9 = v12 + v24;
    core::iter::traits::iterator::Iterator::fuse::hdd6e28be1a8e845d(&v4, &v8);
    v0 = 0;
    v1 = 8;
    *((uint128_t *)&v2) = 0;
    v16 = itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::haa0f1378b280dbbc(&v0, 0);
    if (v16 && (v16->field_8 == 45 || v16->field_8 == 43))
        _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he415a40120613359(&v0);
    v18 = 0;
    while (true)
    {
        v19 = (unsigned int)v18;
        do
        {
            v18 = v19;
            do
            {
                _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he415a40120613359(&v0);
                if ((unsigned int)v24 == 0x110000)
                {
                    core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h99fb1acb9dd0bcb6(&v0);
                    return a1 - v24;
                }
            } while (!(v24 == v24));
            v19 = v20 & 0xffffffffffffff00 | 1;
        } while ((1 & !(v18 & 255 & 255) & (unsigned int)v24 == 46));
        if (!((1 & ((unsigned int)v24 & 4294967263) == 69)) || !((v21 = itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::haa0f1378b280dbbc(&v0, 0), v21)))
            break;
        v22 = v21->field_8;
        if (!(v22 != 45 && v22 != 43))
        {
            v23 = itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::haa0f1378b280dbbc(&v0, 2);
            if (!(v23) || !(v23->field_8 - 48 <= 9))
                break;
            _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he415a40120613359(&v0);
        }
        else if (v22 - 48 >= 10)
        {
            break;
        }
    }
    core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h99fb1acb9dd0bcb6(&v0);
    return a1 - v24;
}
