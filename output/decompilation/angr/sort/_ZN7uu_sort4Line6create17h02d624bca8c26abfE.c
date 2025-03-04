long long uu_sort::Line::create::h02d624bca8c26abf(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long long a4, struct_1 *a5, struct_0 *a6)
{
    unsigned long long v0;  // [sp-0xb0]
    unsigned long long v1;  // [sp-0xa0]
    unsigned long long v2;  // [sp-0x90]
    unsigned long long v3;  // [sp-0x88]
    unsigned long v4;  // [sp-0x80]
    unsigned long long v5;  // [sp-0x78]
    unsigned long v6;  // [sp-0x70]
    unsigned long long v7;  // [sp-0x68]
    struct_1 *v8;  // [sp-0x60]
    char v9;  // [bp-0x58]
    char v10;  // [bp-0x50]
    char v11;  // [bp-0x48]
    char v12;  // [bp-0x40]
    char v13;  // [bp-0x38]
    unsigned long long v14;  // rax
    int v15;  // ymm0
    unsigned long long v16;  // rbx
    unsigned long long v17;  // r14
    unsigned long long v18;  // rax
    unsigned long long v19;  // rcx

    a5->field_10 = 0;
    if (a6->field_60)
        uu_sort::tokenize::hb47c688654b41b2e(a1, a2, a6->field_78, a5);
    v4 = a6->field_8;
    v5 = a6->field_10 * 56 + v4;
    v0 = a1;
    v6 = a1;
    v1 = a2;
    v7 = a2;
    v8 = a5;
    v14 = ::0x51d940::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1dc45998b69df0a3(&v4);
    if (!v14)
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
        core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h2f50737dd865e250(&v9, &v6, v14);
        v16 = *((long long *)&v10);
        v17 = *((long long *)&v11);
        v18 = v13;
        v19 = (3 <= (v18 - 2 & 4294967295 & 255 & 255 & 255) ? 1 : v18 - 2 & 4294967295 & 255 & 4294967295 & 4294967295);
        if ((char)v19 == 2)
        {
            if (!*((char *)(*((long long *)&v9) + 55)))
                continue;
        }
        else
        {
            if ((unsigned int)v19 != 1)
            {
                v15 = v15 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h7cac5b45018ed91a(v2, v16);
            }
            else
            {
                alloc::vec::Vec$LT$T$C$A$GT$::push::h68d358aa572f8f14(v3, *((long long *)&v12), (char)v18 & 1);
            }
        }
        alloc::vec::Vec$LT$T$C$A$GT$::push::he8aa91f7f4c1aff9(a4, v16, v17);
    } while ((v14 = ::0x51d940::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1dc45998b69df0a3(&v4), v14));
}
