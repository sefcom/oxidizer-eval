long long uu_od::parse_inputs::parse_offset_operand::h32742555ec275655(unsigned long long a0[2], char *a1, char *a2)
{
    char v0;  // [bp-0x20]
    char v1;  // [bp-0x18]
    unsigned long long v2;  // [sp-0x10]
    unsigned long long v3;  // [sp-0x8]
    unsigned long v5;  // r14
    unsigned long v6;  // rbx
    char v7;  // cl
    char *v8;  // rdx
    unsigned long long v9;  // r8
    char *v10;  // rcx
    void* v11;  // r10
    char *v12;  // rdx
    unsigned long long v13;  // rcx
    unsigned long long v14;  // r14
    char *v15;  // 4096
    char *v16;  // r8
    char *v17;  // rcx
    unsigned long long v18;  // r10
    char *v19;  // r9
    void* v20;  // r10
    unsigned long long v21;  // r10
    char *v22;  // r10
    char *v23;  // r9
    unsigned long long v24;  // r14
    unsigned long long v26;  // rax

    v3 = v5;
    v2 = v6;
    if (!a2)
    {
        v8 = 0;
        goto LABEL_4a08a0;
    }
    v7 = *(a1);
    if (v7 != 43)
    {
        v8 = 0;
        goto LABEL_4a086a;
    }
    if (a2 != 1 && a1[1] < 192)
    {
LABEL_4a0a09:
        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
    }
    v8 = 1;
    if (!(a2 + 1 >= 2) || !(*((short *)(a1 + v8)) == 30768))
    {
LABEL_4a086a:
        if (!(v7 == 43) || !((v9 = a2 - v8, a2 > v8)))
        {
LABEL_4a08a0:
            v9 = a2 - v8;
            v10 = a1 + v8;
            if (v9 < 2)
            {
                goto LABEL_4a08b2;
            }
            else
            {
                if (*((short *)&v10) == 22576)
                    goto LABEL_4a08ea;
                goto LABEL_4a08cc;
            }
        }
        else
        {
            if (*((char *)(a1 + v8)) <= 191)
                goto LABEL_4a0a09;
            v10 = a1 + v8;
            if (v9 < 2)
            {
LABEL_4a08b2:
                v11 = 0;
                if (!v9)
                {
                    v14 = 1;
                    goto LABEL_4a0904;
                }
                else
                {
                    v16 = 0;
                }
LABEL_4a08cf:
                v11 = v18 | -0x100 | *((char *)(v17 + v16)) == 98;
                v14 = (*((char *)(v17 + v16)) == 98 ? 1 : 0x200);
LABEL_4a0904:
                v19 = &a2[-1 * (v11 & 4294967295)];
                if (!(v12 <= v19) || !(*(v17) > 191))
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                if (v19)
                {
                    if (v19 >= a2)
                    {
                        if ((char)v11)
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    }
                    else
                    {
                        if (*((char *)(a1 + v19)) <= 191)
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    }
                }
                if (v19 == v12)
                {
                    v13 = 8;
                    v20 = 0;
                }
                else
                {
                    v21 = -0x100 | *(v17 + ~(v12) + v19) == 46;
                    v13 = v21 * 2 + 8 & 4294967295;
                    v20 = -(v21);
                }
                v22 = v20 + v19;
LABEL_4a097a:
                v23 = v15;
                if (v23 < v12)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                if (v12)
                {
                    if (v12 >= a2)
                    {
                        if (v12 != a2)
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    }
                    else
                    {
                        if (*((char *)(a1 + v12)) <= 191)
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    }
                }
                if (v23)
                {
                    if (v23 >= a2)
                    {
                        if (v23 != a2)
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    }
                    else
                    {
                        if (*((char *)(a1 + v23)) <= 191)
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    }
                }
                core::num::_$LT$impl$u20$u64$GT$::from_str_radix::h99ae39453f343bd7(&v0, a1 + v12, v23 - v12, v13);
                v24 = *((long long *)&v1) * v14;
                if (v0)
                    v24 = 12;
                v26 = (v0 ? "parse failed: \nI/O:  -0" : 0);
                a0[1] = v24;
                a0[0] = v26;
                return v26;
            }
            if (*((short *)&v10) != 22576)
            {
LABEL_4a08cc:
                v16 = v9 - 1;
                goto LABEL_4a08cf;
            }
        }
    }
LABEL_4a08ea:
    v12 = v8 | 2;
    v13 = 16;
    v14 = 1;
    goto LABEL_4a097a;
}
