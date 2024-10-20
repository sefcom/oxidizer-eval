long long uu_nl::SectionDelimiter::parse::h22e26084446ec79b(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long v0;  // [sp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xd8]
    void* v2;  // [sp-0xd0]
    unsigned long long v3;  // [sp-0xc8]
    unsigned long long v4;  // [sp-0xc0]
    unsigned long long v5;  // [sp-0xb8]
    char *v6;  // [sp-0xb0]
    char *v7;  // [sp-0xa8]
    char *v8;  // [sp-0xa0]
    char v9;  // [bp-0x98]
    char v10;  // [bp-0x90]
    char v11;  // [bp-0x80]
    char v12;  // [bp-0x78]
    char v13;  // [bp-0x70]
    char v14;  // [bp-0x60]
    char v15;  // [bp-0x50]
    char v16;  // [bp-0x48]
    char v17;  // [bp-0x40]
    char v18;  // [bp-0x38]
    unsigned long v20;  // rbx
    unsigned long long v21;  // rbx
    char *v22;  // rdx
    unsigned long long v23;  // r11
    char *v24;  // rdi
    char *v25;  // rsi
    char *v26;  // rax
    unsigned long long v27;  // rcx
    unsigned long long v28;  // r12
    char *v29;  // r8
    char *v30;  // r13
    char *v31;  // rbp
    void* v32;  // r10
    char *v33;  // r13
    char *v34;  // rax
    char *v35;  // rax
    char *v36;  // r13
    char *v37;  // r13
    unsigned long long v38;  // rbx
    char *v39;  // rdx
    char *v40;  // r12
    char *v41;  // r12
    char *v42;  // r8
    char *v44;  // r10
    char *v45;  // r13
    char *v46;  // rdx
    char *v47;  // r8
    char *v48;  // r8
    char *v49;  // r9
    char *v50;  // rax
    char *v52;  // rax
    char *v53;  // r9
    unsigned long long v54;  // r8
    char *v56;  // r8
    unsigned long long v58;  // rcx
    unsigned int v59;  // eax
    unsigned int v60;  // r9d
    unsigned int v61;  // r8d
    unsigned long long v63;  // rax
    char *v64;  // rax
    unsigned long long v66;  // rax
    unsigned long long v67;  // rcx
    unsigned long long v68;  // rdx

    v21 = v20 | -0x100 | 3;
    if (!(a1 && a3))
        return v21 & 4294967295;
    core::str::pattern::StrSearcher::new::h5c57f06bc9dca553(&v9, a0, a1, a2, a3);
    v22 = *((long long *)&v10);
    v23 = *((long long *)&v11);
    v24 = *((long long *)&v15);
    v25 = *((long long *)&v16);
    if (!*((long long *)&v9))
    {
        if (((unsigned int)v23 & 0xff0000))
            return v21 & 4294967295;
        v32 = 0;
        while (true)
        {
            if (v22)
            {
                if (v22 < v25)
                {
                    if (*((char *)(v24 + v22)) < 192)
                        goto LABEL_53391a;
                }
                else
                {
                    if (!(v22 == v25))
                        goto LABEL_53391a;
                }
            }
            if (v22 == v25)
            {
                if ((char)v23)
                {
                    v23 = v23 | -0x100 | (char)v23 ^ 1;
                    goto LABEL_533788;
                }
                else
                {
                    v2 = v32;
                    v1 = a1;
                    v3 = a3;
                    break;
                }
            }
            v58 = *((char *)(v24 + v22));
            if ((char)v58 >= 0)
            {
                if (!(!(v23 & 255 & 255)))
                    goto LABEL_533740;
                goto LABEL_53379d;
            }
            v59 = (unsigned int)v58 & 31;
            v60 = *((char *)(v24 + v22 + 1)) & 63;
            if ((v58 & 255) < 224)
            {
                v58 = v59 * 64 | v60;
                if (!(!(v23 & 255 & 255)))
                    goto LABEL_533740;
                goto LABEL_53379d;
            }
            v61 = *((char *)(v24 + v22 + 2)) & 63 | v60 * 64;
            if ((v58 & 255) >= 240)
            {
                v58 = *((char *)(v24 + v22 + 3)) & 63 | v61 * 64 | (v59 & 7) * 0x40000;
                if (!(v23 & 255 & 255))
                    goto LABEL_53379d;
LABEL_533740:
                goto LABEL_533743;
            }
            v58 = v61 | v59 * 0x1000;
            if (!(!(v23 & 255 & 255)))
                goto LABEL_533740;
LABEL_53379d:
            v63 = 1;
            if ((unsigned int)v58 >= 128)
            {
                v63 = 2;
                if ((unsigned int)v58 >= 0x800)
                    v63 = 4 - ((unsigned int)v58 < 0x10000);
            }
            v64 = &v22[v63];
            if (&v22[v63])
            {
                if (v64 < v25)
                {
                    if (*((char *)(v24 + v64)) < 192)
                        goto LABEL_53391a;
                }
                else
                {
                    if (v64 != v25)
                    {
LABEL_53391a:
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    }
                }
            }
            if (v64 == v25)
            {
                v23 = 0;
LABEL_533788:
            }
            else
            {
                v23 = v23 | -0x100 | 1;
LABEL_533743:
                v23 = v23 | -0x100 | (char)v23 ^ 1;
            }
            v32 += 1;
        }
    }
    else
    {
        v26 = *((long long *)&v13);
        v27 = *((long long *)&v18);
        v28 = v27 - 1;
        v29 = &v26[v28];
        if (v29 >= v25)
            return v21 & 4294967295;
        v1 = a1;
        v3 = a3;
        v21 = *((long long *)&v12);
        v30 = *((long long *)&v14);
        v31 = *((long long *)&v17);
        v4 = v23;
        v7 = v27 - v23;
        v6 = v22 + 1;
        v8 = -(v22);
        v2 = 0;
        v5 = v21;
        while (true)
        {
            if (v30 != -1)
            {
                do
                {
                    v0 = v21;
                    if (((char)(*((char *)&v0 + ((*((char *)(v24 + v29)) & 63) >> 3)) >> (*((char *)(v24 + v29)) & 63 & 7)) & 1))
                    {
                        v28 = v28;
                        v40 = v39;
                    }
                    else
                    {
                        v35 = &v34[v27];
                        v36 = 0;
                        continue;
                    }
                    do
                    {
                        v42 = v41;
                        if (v42 >= v27)
                        {
                            v28 = v28;
                            v21 = v5;
                            while (true)
                            {
                                v47 = v46;
                                if (v33 >= v47)
                                {
                                    v30 = 0;
                                    goto LABEL_533563;
                                }
                                v48 = v47 + 1;
                                if (!(v48 < v27) || !((v49 = v48 + v34, v49 < v25)))
                                    break;
                                if (*((char *)(v31 + v48)) != *((char *)(v24 + v49)))
                                {
                                    v35 = &v34[v4];
                                    v37 = v7;
                                }
                            }
                        }
                        if (!(v34 + v42 < v25))
                            goto LABEL_5338fd;
                        v44 = v42 + 1;
                    } while (*((char *)(v31 + v42)) == *(v24 + v34 + v42));
                    v35 = v34 + v8 + v44;
                    v45 = 0;
                    v38 = v5;
                } while ((v21 = v38, v29 = v35 + v28, v29 < v25));
            }
            else
            {
                v0 = v21;
                if (!((char)(*((char *)&v0 + ((*((char *)(v24 + v29)) & 63) >> 3)) >> (*((char *)(v24 + v29)) & 63 & 7)) & 1))
                {
                    v50 = &v34[v27];
                    goto LABEL_533663;
                }
            }
            v53 = v52;
            v54 = 0;
            if (&v22[v54] >= v27)
            {
                v6 = v6;
                while (true)
                {
                    v56 = v6;
                    if (v56 == -1)
                        break;
                    if (v6 >= v27)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                    if (v34 + v56 >= v25)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                    if (*((char *)(v31 + v56)) != *(v24 + v34 + v56))
                    {
                        v50 = &v34[v4];
LABEL_533663:
                        goto LABEL_533666;
                    }
                }
                v30 = -1;
LABEL_533563:
                v26 = &v34[v27];
                v2 += 1;
                v29 = &v26[v28];
                if (v29 >= v25)
                    break;
            }
            else
            {
                if (v22 + v53 >= v25)
                {
LABEL_5338fd:
                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                }
                v50 = v53 + 1;
LABEL_533666:
                v29 = &v50[v28];
                if (!(v29 < v25))
                    break;
            }
        }
    }
    v66 = v2;
    v67 = v66 * v3;
    if (v66 == 1)
    {
        v21 = v21 | -0x100 | v67 == v1 ^ 3;
    }
    else
    {
        v68 = v1;
        if (v66 == 2)
        {
            v21 = v21 | -0x100 | (v67 != v68) * 2 | 1;
        }
        else
        {
            v21 = v21 | -0x100 | 3;
            if (v66 == 3)
                v21 = (-0x100 | v67 != v68) * 3 & 4294967295;
        }
    }
}
