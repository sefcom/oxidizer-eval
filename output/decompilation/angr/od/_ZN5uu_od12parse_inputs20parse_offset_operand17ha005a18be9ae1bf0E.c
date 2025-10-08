long long uu_od::parse_inputs::parse_offset_operand(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [sp-0x50]
    unsigned long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3[2];  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned long long v8;  // [bp-0x10]
    unsigned long long v10;  // r15
    unsigned long long v11;  // r14
    unsigned long long v12;  // r13
    unsigned long long v13;  // r12
    unsigned long long v14;  // rbx
    unsigned long long v15;  // r12
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rax
    unsigned int v19;  // eax
    unsigned long long v20;  // r13
    unsigned long long v21;  // rax
    unsigned long long v22;  // rbx
    unsigned long v23;  // rax
    unsigned int v24;  // ebp
    unsigned long long v26;  // r13
    unsigned long long v27;  // r8
    unsigned long long v29;  // rax
    unsigned long v30;  // rax
    unsigned long v31;  // rcx

    v8 = v10;
    v7 = v11;
    v6 = v12;
    v5 = v13;
    v4 = v14;
    v0 = 0;
    v15 = (unsigned int)core::slice::<impl [T]>::starts_with(a1, a2, ::0x465460::core::char::methods::encode_utf8_raw(43, &v0), 1);
    v16 = v15.get(a2, a1, a2);
    if (!v16)
        core::str::slice_error_fail(a1, a2, v15, a2, &g_502738); /* do not return */
    if (!(char)core::slice::<impl [T]>::starts_with(v16, v17, "0x0Xparse failednulsohstxetxeotenqackbelbshtnlvtffcrsosidledc1dc2dc3dc4naksynetbcanemsubescfsgsrsussp!\"$%&\'*+,./012", 2))
    {
        v18 = v15.get(a2, a1, a2);
        if (!v18)
            core::str::slice_error_fail(a1, a2, v15, a2, &g_502750); /* do not return */
        if ((char)core::slice::<impl [T]>::starts_with(v18, v17, "0Xparse failednulsohstxetxeotenqackbelbshtnlvtffcrsosidledc1dc2dc3dc4naksynetbcanemsubescfsgsrsussp!\"$%&\'*+,./012", 2))
            goto LABEL_46ab7d;
        v0 = 0;
        v19 = core::slice::<impl [T]>::ends_with(v18, v17, ::0x465460::core::char::methods::encode_utf8_raw(98, &v0));
        v20 = a2 - v19;
        v21 = v15.get(v20, a1, a2);
        if (v21)
        {
            v2 = v21;
            v22 = ((v19 & 255) ? 0x200 : 1);
            v0 = 0;
            v23 = (unsigned int)core::slice::<impl [T]>::ends_with(v2, v17, ::0x465460::core::char::methods::encode_utf8_raw(46, &v0));
            v24 = (unsigned int)v23 * 2 + 8;
            v26 = v20 - v23;
LABEL_46ac29:
            v20 = v26;
            v29 = v15.get(v20, a1, a2);
            if (v29)
            {
                ::0x464330::core::num::<impl u64>::from_ascii_radix(&v0, v29, a2, v24);
                v30 = ((char)v0 ? "parse failednulsohstxetxeotenqackbelbshtnlvtffcrsosidledc1dc2dc3dc4naksynetbcanemsubescfsgsrsussp!\"$%&\'*+,./012" : 0);
                v31 = (!(char)v0 ? v1 * v22 : 12);
                v3[0] = v30;
                v3[1] = v31;
                return v30;
            }
            v27 = &g_502780;
        }
        else
        {
            v27 = &g_502768;
        }
        core::str::slice_error_fail(a1, a2, v15, v20, v27); /* do not return */
    }
LABEL_46ab7d:
    v15 |= 2;
    v24 = 16;
    v22 = 1;
    v26 = a2;
    goto LABEL_46ac29;
}
