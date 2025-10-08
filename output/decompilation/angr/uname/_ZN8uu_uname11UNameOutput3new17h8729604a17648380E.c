long long uu_uname::UNameOutput::new(struct_0 *a0, char a1[9])
{
    unsigned long long v0;  // [bp-0x508]
    unsigned long long v1;  // [bp-0x500]
    unsigned long long v2;  // [bp-0x4f8]
    unsigned long long v3;  // [bp-0x4f0]
    unsigned long long v4;  // [bp-0x4e8]
    unsigned long long v5;  // [bp-0x4e0]
    unsigned long long v6;  // [bp-0x4d8]
    unsigned long long v7;  // [bp-0x4d0]
    unsigned long long v8;  // [bp-0x4c8]
    unsigned long long v9;  // [bp-0x4c0]
    unsigned long long v10;  // [bp-0x4b8]
    unsigned long long v11;  // [bp-0x4b0]
    unsigned long long v12;  // [bp-0x4a8]
    unsigned long long v13;  // [bp-0x4a0]
    unsigned long long v14;  // [bp-0x498]
    unsigned long long v15;  // [bp-0x490]
    unsigned long long v16;  // [bp-0x488]
    unsigned long long v17;  // [bp-0x480]
    char v18;  // [bp-0x478]
    char v19;  // [bp-0x460], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x460]
    unsigned long long v21;  // [bp-0x458]
    unsigned long long v22;  // [bp-0x450]
    char v23;  // [bp-0x448]
    unsigned long long v24;  // [bp-0x248]
    unsigned long long v25;  // [bp-0x240]
    unsigned long long v26;  // [bp-0x238]
    char v27;  // [bp-0x230]
    unsigned long long v28;  // [bp-0x228]
    char v29;  // [bp-0x220]
    unsigned long long v30;  // [bp-0x210]
    char v31;  // [bp-0x208]
    unsigned long long v32;  // [bp-0x1f8]
    char v33;  // [bp-0x1f0]
    unsigned long long v34;  // [bp-0x1e0]
    char v35;  // [bp-0x1d8]
    unsigned long long v36;  // [bp-0x1c8]
    char v37;  // [bp-0x1c0]
    unsigned long long v39;  // rbp
    char v40;  // r13b
    unsigned long long v41;  // r14
    unsigned long long v43;  // r15
    unsigned long long v45;  // r13
    unsigned long long v48;  // r13
    unsigned long long v49;  // r14
    unsigned long long v50;  // rbp

    v39 = 0x8000000000000000;
    v19.new();
    if ((char)(((0 ^ v19) & (0 ^ -(v19))) >> 63))
    {
        a0->field_8 = uu_uname::UNameOutput::new::{{closure}}(v21, v22);
        a0->field_10 = &g_4da138;
        a0->field_0 = 9223372036854775809;
        return a0;
    }
    memcpy(&v27, &v23, 0x200);
    v24 = v19;
    v25 = v21;
    v26 = v22;
    v40 = a1[0];
    if (v40 || (a1[1] & 1) || a1[2] || a1[4] || a1[3] || a1[5] || a1[8] || a1[6])
    {
        if (((a1[1] | v40) & 1))
            goto LABEL_451cb6;
        v41 = 0x8000000000000000;
        if (!a1[2] && !v40)
            goto LABEL_451d59;
LABEL_451d09:
        uu_uname::UNameOutput::new::{{closure}}(&v19, v28, *((long long *)&v29));
        v4 = v21;
        v12 = v22;
        v20 = v19;
    }
    else
    {
        if (!a1[7])
        {
LABEL_451cb6:
            uu_uname::UNameOutput::new::{{closure}}(&v19, v21, v22);
            v41 = v19;
            v10 = v21;
            v17 = v22;
            if (a1[2] || v40)
                goto LABEL_451d09;
        }
        else
        {
            v41 = 0x8000000000000000;
        }
LABEL_451d59:
        v20 = 0x8000000000000000;
    }
    v43 = v20;
    v3 = v41;
    v11 = v43;
    if (a1[4] || v40)
    {
        uu_uname::UNameOutput::new::{{closure}}(&v19, v30, *((long long *)&v31));
        v2 = v19;
        v9 = v21;
        v16 = v22;
        if (a1[3] || v40)
            goto LABEL_451dda;
        v0 = 0x8000000000000000;
    }
    else
    {
        v2 = 0x8000000000000000;
        v0 = 0x8000000000000000;
        if (a1[3])
        {
LABEL_451dda:
            uu_uname::UNameOutput::new::{{closure}}(&v19, v32, *((long long *)&v33));
            v0 = v19;
            v8 = v21;
            v15 = v22;
        }
    }
    if (a1[5] || v40)
    {
        uu_uname::UNameOutput::new::{{closure}}(&v19, v34, *((long long *)&v35));
        v1 = v19;
        v7 = v21;
        v14 = v22;
        if (v40 || a1[8])
            goto LABEL_451e88;
        v45 = 0x8000000000000000;
    }
    else
    {
        v1 = 0x8000000000000000;
        v45 = 0x8000000000000000;
        if (a1[8])
        {
LABEL_451e88:
            uu_uname::UNameOutput::new::{{closure}}(&v19, v36, *((long long *)&v37));
            v6 = v21;
            v13 = v22;
            v45 = v19;
        }
    }
    v48 = v45;
    if (a1[6])
    {
        v19.to_vec("unknowncannot get system name(uutils coreutils) 0.0.30Print certain system information. \nWith no OPTION, same as -s.{} [OPTION]...Behave as though all of the options -mnrsvo were specified.sysnameprint the kernel name.print the nodename (the nodename may b", 7);
        v49 = v19;
        v5 = v21;
        v43 = v22;
        v50 = v39;
        if (a1[7])
            goto LABEL_451f1a;
    }
    else
    {
        v49 = 0x8000000000000000;
        v50 = v39;
        if (a1[7])
        {
LABEL_451f1a:
            v19.to_vec("unknowncannot get system name(uutils coreutils) 0.0.30Print certain system information. \nWith no OPTION, same as -s.{} [OPTION]...Behave as though all of the options -mnrsvo were specified.sysnameprint the kernel name.print the nodename (the nodename may b", 7);
            memcpy(&v18, &v21, 16);
            v50 = v19;
        }
    }
    a0->field_0 = v3;
    a0->field_8 = v10;
    a0->field_10 = v17;
    a0->field_18 = v11;
    a0->field_20 = v4;
    a0->field_28 = v12;
    a0->field_30 = v2;
    a0->field_38 = v9;
    a0->field_40 = v16;
    a0->field_48 = v0;
    a0->field_50 = v8;
    a0->field_58 = v15;
    a0->field_60 = v1;
    a0->field_68 = v7;
    a0->field_70 = v14;
    a0->field_78 = v48;
    a0->field_80 = v6;
    a0->field_88 = v13;
    a0->field_90 = v49;
    a0->field_98 = v5;
    a0->field_a0 = v43;
    a0->field_a8 = v50;
    a0->field_b0 = *((int128_t *)&v18);
    core::ptr::drop_in_place<platform_info::lib_impl::target::PlatformInfo>(&v24);
    return a0;
}
