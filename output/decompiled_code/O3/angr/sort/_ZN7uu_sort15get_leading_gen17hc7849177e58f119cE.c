long long uu_sort::get_leading_gen::hc7849177e58f119c(unsigned long long a0, unsigned long long a1, unsigned long a2)
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
    char *v17;  // rdx
    struct_0 *v18;  // rax
    unsigned int v19;  // eax
    struct_0 *v20;  // rax
    unsigned long long v21;  // rsi
    char *v22;  // rdx
    char *v23;  // rdx

    v12 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h5f9a6f2f06c3caaa(a0, a1);
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
        while (_$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1ebf4d15f9fbd371(&v0))
        {
            if (!v23)
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
            else if (v23 == v23)
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
        }
    }
    else
    {
        while (true)
        {
            v13 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1ebf4d15f9fbd371(&v0);
            if (!v13)
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
            if ((char)::0x51b890::core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he7c08894b5496a04(v12, v23, v13, v23))
            {
                ::0x51a600::core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::hfdf47749dffdd942();
                return a1 - v23;
            }
        }
    }
    ::0x51a600::core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::hfdf47749dffdd942();
    v10 = 0;
    v8 = v12;
    v9 = v12 + v23;
    core::iter::traits::iterator::Iterator::fuse::h2453218cfcf8f03e(&v4, &v8);
    v0 = 0;
    v1 = 8;
    *((int128_t *)&v2) = 0;
    v14 = itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::h7fd2c37c82d090b1(&v0, 0);
    if (v14 && (v14->field_8 == 45 || v14->field_8 == 43))
        _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hef088e4d39f1a5b1(&v0, v16, v23);
    do
    {
        _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hef088e4d39f1a5b1(&v0, v16, v17);
        if ((unsigned int)v23 == 0x110000)
        {
            core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::hf7ee166d927cacbc(&v0);
            return a1 - v23;
        }
    } while ((unsigned int)(v23 + 48) < 10);
    switch ((unsigned int)v23)
    {
    case 46:
        if (false)
        {
            core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::hf7ee166d927cacbc(&v0);
            return a1 - v23;
        }
        break;
    case 69: case 101:
        v18 = itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::h7fd2c37c82d090b1(&v0, 0);
        if (!v18)
        {
            core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::hf7ee166d927cacbc(&v0);
            return a1 - v23;
        }
        goto LABEL_5233ea;
    default:
        core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::hf7ee166d927cacbc(&v0);
        return a1 - v23;
    }
LABEL_5233ea:
    v19 = v18->field_8;
    if (v19 == 45 || v19 == 43)
    {
        v20 = itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::h7fd2c37c82d090b1(&v0, 2);
        if (!v20)
        {
            core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::hf7ee166d927cacbc(&v0);
            return a1 - v23;
        }
        if (v20->field_8 - 48 > 9)
        {
            core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::hf7ee166d927cacbc(&v0);
            return a1 - v23;
        }
        _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hef088e4d39f1a5b1(&v0, v16, v23);
    }
    else if (v19 - 48 >= 10)
    {
        core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::hf7ee166d927cacbc(&v0);
        return a1 - v23;
    }
    while (true)
    {
        _$LT$itertools..peek_nth..PeekNth$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hef088e4d39f1a5b1(&v0, v21, v22);
        if ((unsigned int)v23 == 0x110000)
        {
            core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::hf7ee166d927cacbc(&v0);
            return a1 - v23;
        }
        v22 = (unsigned int)v23 - 48;
        if ((unsigned int)v22 >= 10)
        {
            core::ptr::drop_in_place$LT$itertools..peek_nth..PeekNth$LT$core..str..iter..CharIndices$GT$$GT$::hf7ee166d927cacbc(&v0);
            return a1 - v23;
        }
    }
}
