long long uu_uname::UNameOutput::new(struct_0 *a0, char a1[9])
{
    unsigned long long v0;  // [bp-0x558]
    unsigned long long v1;  // [bp-0x548]
    unsigned long long v3;  // [bp-0x538]
    unsigned long long v4;  // [bp-0x528]
    char v6;  // [bp-0x518], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x508]
    unsigned long long v9;  // [bp-0x4f8]
    unsigned long long v10;  // [bp-0x4e8]
    char v12;  // [bp-0x4d8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x4c8]
    unsigned long long v15;  // [bp-0x4b8]
    unsigned long long v16;  // [bp-0x4a8]
    char v17;  // [bp-0x498], Other Possible Types: unsigned long long
    int v18;  // [bp-0x498]
    unsigned long long v19;  // [bp-0x488]
    int v20;  // [bp-0x478], Other Possible Types: char
    int v21;  // [bp-0x468], Other Possible Types: char
    unsigned long long v22;  // [bp-0x460]
    unsigned long long v24;  // [bp-0x458]
    int v25;  // [bp-0x450], Other Possible Types: char
    unsigned long long v26;  // [bp-0x440]
    int v27;  // [bp-0x438]
    unsigned long long v28;  // [bp-0x428]
    int v29;  // [bp-0x420]
    unsigned long long v30;  // [bp-0x410]
    int v31;  // [bp-0x408]
    unsigned long long v32;  // [bp-0x3f8]
    int v33;  // [bp-0x3f0]
    unsigned long long v34;  // [bp-0x3e0]
    int v35;  // [bp-0x3d8]
    unsigned long long v36;  // [bp-0x3c8]
    unsigned long long v37;  // [bp-0x248]
    unsigned long long v38;  // [bp-0x240]
    unsigned long long v39;  // [bp-0x238]
    char v40;  // [bp-0x230]
    unsigned long long v41;  // [bp-0x228]
    char v42;  // [bp-0x220]
    unsigned long long v43;  // [bp-0x210]
    char v44;  // [bp-0x208]
    unsigned long long v45;  // [bp-0x1f8]
    char v46;  // [bp-0x1f0]
    unsigned long long v47;  // [bp-0x1e0]
    char v48;  // [bp-0x1d8]
    unsigned long long v49;  // [bp-0x1c8]
    char v50;  // [bp-0x1c0]
    unsigned long long v52;  // r13
    char v53;  // bpl
    int v54;  // [bp-0x558]
    int v55;  // [bp-0x538]
    int v56;  // [bp-0x518]
    int v57;  // [bp-0x4f8]
    int v58;  // [bp-0x4d8]
    int v59;  // [bp-0x4b8]

    v52 = 0x8000000000000000;
    v21.new();
    if ((char)(((0 ^ *((long long *)&v21)) & (0 ^ -(*((long long *)&v21)))) >> 63))
    {
        a0->field_8 = uu_uname::UNameOutput::new::{{closure}}(v22, v24);
        a0->field_10 = &g_5624f0;
        a0->field_0 = 9223372036854775809;
        return a0;
    }
    memcpy(&v40, &v25, 0x200);
    v37 = *((long long *)&v21);
    v38 = v22;
    v39 = v24;
    v53 = a1[0];
    if (v53)
    {
LABEL_4921b0:
        uu_uname::UNameOutput::new::{{closure}}(&v21, v22, v24);
        v1 = v24;
        memcpy(&v0, &v21, 16);
        if (!(!a1[2] && !v53))
            goto LABEL_492302;
LABEL_4921ea:
        v3 = 0x8000000000000000;
        if (!a1[4])
            goto LABEL_492347;
        goto LABEL_4921fa;
    }
    else if (!(a1[1] == 1 || a1[2] || a1[4] || a1[3] || a1[5] || a1[8] || a1[6]))
    {
        if (!(a1[7] == 1))
            goto LABEL_4921b0;
        v0 = 0x8000000000000000;
        v3 = 0x8000000000000000;
        if (!(!a1[4]))
            goto LABEL_4921fa;
LABEL_492347:
        v6 = 0x8000000000000000;
        if (!a1[3])
        {
LABEL_49223f:
            v9 = 0x8000000000000000;
            if (!a1[5])
                goto LABEL_49239c;
            goto LABEL_49224f;
        }
        else
        {
LABEL_492357:
            uu_uname::UNameOutput::new::{{closure}}(&v21, v45, *((long long *)&v46));
            v10 = v24;
            memcpy(&v9, &v21, 16);
            if (a1[5] || v53)
            {
LABEL_49224f:
                uu_uname::UNameOutput::new::{{closure}}(&v21, v47, *((long long *)&v48));
                v13 = v24;
                memcpy(&v12, &v21, 16);
                if (!(!v53 && !a1[8]))
                    goto LABEL_4923af;
                goto LABEL_492296;
            }
            else
            {
LABEL_49239c:
                v12 = 0x8000000000000000;
                if (!a1[8])
                {
LABEL_492296:
                    v15 = 0x8000000000000000;
                    if (!a1[6])
                        goto LABEL_4923f7;
                    goto LABEL_4922a9;
                }
                else
                {
LABEL_4923af:
                    uu_uname::UNameOutput::new::{{closure}}(&v21, v49, *((long long *)&v50));
                    v16 = v24;
                    memcpy(&v15, &v21, 16);
                    if (a1[6])
                    {
LABEL_4922a9:
                        uucore::mods::locale::get_message(&v21, "uname-unknownuname-error-cannot-get-system-name(uutils coreutils) 0.1.0uname-aboutuname-usageuname-help-allsysnameuname-help-kernel-nameuname-help-nodenamereleaseuname-help-kernel-releaseuname-help-kernel-versionuname-help-machineuname-help-osuname-help-pr", 13);
                        v19 = v24;
                        memcpy(&v17, &v21, 16);
                        if (!(!a1[7]))
                            goto LABEL_492406;
                    }
                    else
                    {
LABEL_4923f7:
                        v17 = 0x8000000000000000;
                        if (a1[7])
                        {
LABEL_492406:
                            uucore::mods::locale::get_message(&v21, "uname-unknownuname-error-cannot-get-system-name(uutils coreutils) 0.1.0uname-aboutuname-usageuname-help-allsysnameuname-help-kernel-nameuname-help-nodenamereleaseuname-help-kernel-releaseuname-help-kernel-versionuname-help-machineuname-help-osuname-help-pr", 13);
                            v52 = *((long long *)&v21);
                            memcpy(&v20, &v22, 16);
                        }
                    }
                }
            }
        }
    }
    else if (!a1[1] && !v53)
    {
        v0 = 0x8000000000000000;
        if (!(a1[2] & 1))
            goto LABEL_4921ea;
LABEL_492302:
        uu_uname::UNameOutput::new::{{closure}}(&v21, v41, *((long long *)&v42));
        v4 = v24;
        memcpy(&v3, &v21, 16);
        if (!a1[4] && !v53)
            goto LABEL_492347;
LABEL_4921fa:
        uu_uname::UNameOutput::new::{{closure}}(&v21, v43, *((long long *)&v44));
        v7 = v24;
        memcpy(&v6, &v21, 16);
        if (!(!a1[3] && !v53))
            goto LABEL_492357;
        goto LABEL_49223f;
    }
    v24 = v1;
    v21 = v54;
    v25 = v55;
    v26 = v4;
    v27 = v56;
    v28 = v7;
    v29 = v57;
    v30 = v10;
    v32 = v13;
    v31 = v58;
    v34 = v16;
    v33 = v59;
    v36 = v19;
    v35 = v18;
    memcpy(a0, &v21, 168);
    a0->field_a8 = v52;
    *((void*)&a0->field_b0) = v20;
    core::ptr::drop_in_place<platform_info::lib_impl::target::PlatformInfo>(&v37);
    return a0;
}
