long long uu_sort::get_leading_gen::h381fabafeef8de83(unsigned long long a0, unsigned long long a1, unsigned long a2)
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
    unsigned long long v13;  // rax
    struct_0 *v14;  // rax
    unsigned long long v16;  // rsi
    void* v17;  // r13
    unsigned long long v18;  // rsi
    unsigned int v20;  // eax
    char *v23;  // rdx
    unsigned long long v24;  // rax
    struct_0 *v25;  // rax
    unsigned int v26;  // eax
    struct_0 *v27;  // rax
    char *v28;  // rdx

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
            if (!v28)
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
            else if (v28 == v28)
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
        }
    }
    else
    {
        while (true)
        {
            v13 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5ce99848dcb7192c(&v0);
            if (!v13)
                break;
            if (v28)
            {
                if (v28 < v28)
                {
                    if (*((char *)(v12 + v28)) <= 191)
                        continue;
                }
                else
                {
                    if (!(v28 == v28))
                        continue;
                }
            }
            if ((char)::0x51c850::core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he7c08894b5496a04(v12, v28, v13, v28))
            {
                ::0x51b5c0::core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h5e8c4d5bbc8b3091();
                return a1 - v28;
            }
        }
    }
    ::0x51b5c0::core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h5e8c4d5bbc8b3091();
    v10 = 0;
    v8 = v12;
    v9 = v12 + v28;
    core::iter::traits::iterator::Iterator::fuse::hdd6e28be1a8e845d(&v4, &v8);
    v0 = 0;
    v1 = 8;
    *((int128_t *)&v2) = 0;
    v14 = itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::haa0f1378b280dbbc(&v0, 0);
    if (v14 && (v14->field_8 == 45 || v14->field_8 == 43))
        _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he415a40120613359(&v0, v16, v28);
    v17 = 0;
    while (true)
    {
        v20 = (unsigned int)v17;
        do
        {
            v17 = v20;
            do
            {
                _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he415a40120613359(&v0, v18, v23);
                if ((unsigned int)v28 == 0x110000)
                {
                    core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h99fb1acb9dd0bcb6(&v0);
                    return a1 - v28;
                }
            } while (!(v28 == v28));
            v20 = v24 | -0x100 | 1;
        } while ((1 & !(v17 & 255 & 255) & (unsigned int)v28 == 46));
        if (!((1 & ((unsigned int)v28 & -33) == 69)) || !((v25 = itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::haa0f1378b280dbbc(&v0, 0), v25)))
            break;
        v26 = v25->field_8;
        if (!(v26 != 45 && v26 != 43))
        {
            v27 = itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::haa0f1378b280dbbc(&v0, 2);
            if (!(v27) || !(v27->field_8 - 48 <= 9))
                break;
            _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he415a40120613359(&v0, v16, v28);
        }
        else if (v26 - 48 >= 10)
        {
            break;
        }
    }
    core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::h99fb1acb9dd0bcb6(&v0);
    return a1 - v28;
}
