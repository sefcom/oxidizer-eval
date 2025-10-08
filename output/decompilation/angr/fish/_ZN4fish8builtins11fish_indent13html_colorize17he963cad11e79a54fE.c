void fish::builtins::fish_indent::html_colorize(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0xee]
    char v1;  // [bp-0xed]
    unsigned int v2;  // [bp-0xec]
    char v3;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0xe0]
    unsigned long long v5;  // [bp-0xd8]
    unsigned long long v6;  // [bp-0xc8]
    unsigned long long v7;  // [bp-0xc0]
    char v8;  // [bp-0xb8]
    unsigned long long v9;  // [bp-0xb0]
    unsigned long long v10;  // [bp-0xa8]
    unsigned long long v11;  // [bp-0x98]
    unsigned long long v12;  // [bp-0x90]
    char v13[4];  // [bp-0x88]
    void* v14;  // [bp-0x80], Other Possible Types: char
    void* v15;  // [bp-0x48]
    char v16;  // [bp-0x40]
    char v18;  // r12b
    char v19;  // r14b
    char v20;  // bpl
    unsigned int v21;  // r13d
    char v22[4];  // rax
    unsigned long v23;  // rbx
    unsigned long v24;  // r15
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rsi
    unsigned long long v27;  // rdx

    if (!a2)
    {
        a0->field_0 = 0;
        a0->field_8 = 1;
        a0->field_10 = 0;
        return;
    }
    v6 = a4;
    v7 = a2;
    if (a4 != a2)
    {
        v14 = 0;
        core::panicking::assert_failed(0, &v6, &v7, &v14, &g_14c9940); /* do not return */
    }
    v3.to_vec("<", 11);
    v14.zip(a1, a2 * 4 + a1, a3, a2);
    v15 = 0;
    v2 = 0;
    while (true)
    {
        v20 = v1;
        v11.next(&v14);
        v21 = v12;
        if (v21 == 0x110000)
            break;
        v22 = v13;
        v1 = v22[0];
        v0 = v22[1];
        v23 = v22[2];
        v24 = v22[3];
        if (v11)
        {
            if ((v19 ^ (char)v24) || (v18 ^ (char)v23) || ((v1 ^ v20) & 1) || ((v0 ^ (char)v2) & 1))
            {
                v3.extend("</span><span class=\"%ls\">&quot;&apos;&amp;", "<span class=\"%ls\">&quot;&apos;&amp;");
                if (!(!(v19 ^ (char)v24) && !(v18 ^ (char)v23)) || ((v20 ^ v1) & 1))
                    goto LABEL_1350380;
            }
            if (!(((char)v2 ^ v0) & 1))
                goto LABEL_13503f9;
        }
LABEL_1350380:
        v8 = 1;
        v9 = fish::builtins::fish_indent::html_class_name_for_color(v0 * 0x100 | v1 | ((unsigned int)v23 & 255) * 0x10000 | ((unsigned int)v24 & 255) * &g_1000000);
        v10 = v25;
        fish_printf::printf_impl::sprintf_locale(&v16, &v3, "<span class=\"%ls\">&quot;&apos;&amp;", 18, &v8, 1);
        v16.unwrap(&g_14c9958);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v8);
LABEL_13503f9:
        switch (v21)
        {
        case 39:
            v26 = "&apos;&amp;";
            v27 = "&amp;";
            break;
        case 60:
            v26 = "&lt;suidsgidkclrcuu1mcudmcubkextmhpai128 as dyn exitExitdefcsgr1ktbckMOVkil1knxt/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/slice.rs";
            v27 = "suidsgidkclrcuu1mcudmcubkextmhpai128 as dyn exitExitdefcsgr1ktbckMOVkil1knxt/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/slice.rs";
            break;
        case 62:
            v26 = "&gt;trimkLFTxvpawindritmkcanmvpakrefmainchar";
            v27 = "trimkLFTxvpawindritmkcanmvpakrefmainchar";
            break;
        case 34:
            v26 = "&quot;&apos;&amp;";
            v27 = "&apos;&amp;";
        case 38:
            v3.extend(v26, v27);
        default:
            v3.push(v21);
            goto LABEL_13502b5;
        }
LABEL_13502b5:
        v2 = v0;
    }
    v3.extend("</span></code></pre></span><span class=\"%ls\">&quot;&apos;&amp;", "</span><span class=\"%ls\">&quot;&apos;&amp;");
    fish::common::wcs2osstring(a0, v4, v5);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
    return;
}
