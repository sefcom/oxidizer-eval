long long uu_sort::Line::create::h16213a0d09279b63(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long long a4, struct_1 *a5)
{
    unsigned long long v0;  // [sp-0xb0]
    unsigned long long v1;  // [sp-0xa0]
    unsigned long long v2;  // [sp-0x90]
    unsigned long long v3;  // [sp-0x88]
    unsigned long v4;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x78]
    unsigned long v6;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x68]
    char v8;  // [bp-0x58]
    char v9;  // [bp-0x50]
    char v10;  // [bp-0x48]
    char v11;  // [bp-0x40]
    char v12;  // [bp-0x38]
    struct_0 *v13;  // [bp+0x8]
    struct_0 *v14;  // r14
    unsigned long long v15;  // rax
    int v16;  // ymm0
    unsigned long long v17;  // rbx
    unsigned long long v18;  // r14
    unsigned long long v19;  // rax
    unsigned long long v20;  // rcx
    unsigned long long v21;  // rdx

    v14 = v13;
    a5->field_10 = 0;
    if (v14->field_60)
        uu_sort::tokenize::hacd0390b76f8fb9b(a1, a2, v14->field_78, a5);
    v4 = v14->field_8;
    v5 = v14->field_10 * 56 + v4;
    v0 = a1;
    v6 = a1;
    v1 = a2;
    v7 = a2;
    v15 = ::0x51c960::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1b5284f2e41ec843(&v4);
    if (!v15)
    {
        a0[0] = v0;
        a0[1] = v1;
        a0[2] = a3;
        return a0;
    }
    v3 = a4 + 24;
    v2 = a4 + 48;
    do
    {
        core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h3e23b4f66b54d90b(&v8, &v6, v15);
        v17 = *((long long *)&v9);
        v18 = *((long long *)&v10);
        v19 = v12;
        v20 = (3 <= (v19 - 2 & 4294967295 & 255 & 255 & 255) ? 1 : v19 - 2 & 4294967295 & 255 & 4294967295 & 4294967295);
        if ((char)v20 == 2)
        {
            if (!*((char *)(*((long long *)&v8) + 55)))
                continue;
        }
        else
        {
            if ((unsigned int)v20 == 1)
            {
                alloc::vec::Vec$LT$T$C$A$GT$::push::hf3f3019bbf7268da(v3, *((long long *)&v11), (char)v19 & 1);
            }
            else
            {
                v16 = v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h0d5858a47d93c2b7(v2, v17, v21);
            }
        }
        alloc::vec::Vec$LT$T$C$A$GT$::push::h406673f1c2550ca9(a4, v17, v18);
    } while ((v15 = ::0x51c960::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1b5284f2e41ec843(&v4), v15));
}
