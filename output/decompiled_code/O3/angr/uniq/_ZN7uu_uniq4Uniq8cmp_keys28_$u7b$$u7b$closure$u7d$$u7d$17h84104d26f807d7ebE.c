long long uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h84104d26f807d7eb(struct_4 *a0, unsigned long long a1, struct_2 *a2, unsigned long a3, unsigned long a4, unsigned int a5)
{
    char *v0;  // [sp-0x80]
    unsigned long long v1;  // [sp-0x78]
    unsigned long long v2;  // [sp-0x70]
    unsigned long long v3;  // [sp-0x68]
    unsigned long long v4;  // [sp-0x60]
    char *v5;  // [sp-0x58]
    unsigned long long v6[3];  // [bp-0x50]
    char v7;  // [bp-0x48]
    char v8;  // [bp-0x40]
    unsigned long long v9;  // [sp-0x38]
    struct_0 *v11;  // rbx
    unsigned long long v12;  // r12
    unsigned long long v13;  // rax
    unsigned long long v14;  // r12
    unsigned long long v16;  // rbp
    void* v17;  // r13
    unsigned long long v18;  // rbp
    char *v19;  // rbx
    struct struct_1 **v20;  // r13
    void* v21;  // rbp
    char v22;  // dl
    unsigned long long v23;  // rbp
    unsigned int v24;  // eax
    struct struct_1 **v25;  // r13
    struct struct_1 **v26;  // r13
    char *v27;  // r15
    struct struct_1 **v28;  // r15
    char v29;  // dl
    unsigned long long v30;  // rbp
    struct struct_1 **v31;  // r13
    unsigned long long v32;  // rbp
    unsigned long long v33;  // rax
    char v34;  // dl
    char v35;  // dl
    char *v36;  // rbx
    char *v37;  // rbx
    char *v38;  // rax
    unsigned long long v39;  // rax
    char v40;  // dl
    char *v41;  // r13
    unsigned long long v42;  // rax
    char *v43;  // rax
    unsigned long long v44;  // rbp

    v11 = a0->field_0;
    uu_uniq::Uniq::skip_fields::h2a07e332503a88d4(v6, *((long long *)&v11->field_0), *((long long *)&v11->field_8), a0->field_8, *((long long *)&a0->field_10), a5);
    v12 = *((long long *)&v8);
    v13 = v11->field_20;
    if (v11->field_10)
    {
        v16 = v14;
        if (!v12)
        {
LABEL_488d8e:
            v19 = *((long long *)&v7);
            v0 = v19;
            v1 = &v19[v12];
            v20 = a2->field_18;
            v21 = 0;
            do
            {
                if (!((char)v20(a1) & 1))
                    v24 = _$LT$core..iter..adapters..copied..Copied$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcbbc77ce41a0af1b(&v0);
            } while (((char)_$LT$core..iter..adapters..copied..Copied$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcbbc77ce41a0af1b(&v0) & 1) && v22 == v22);
        }
        v17 = v11->field_18;
        if (!(!v11->field_34))
            goto LABEL_488d23;
        if (v17)
        {
LABEL_488f35:
            v19 = *((long long *)&v7);
            v0 = v19;
            v1 = &v19[v12];
            v2 = v17;
            v3 = v30;
            v31 = a2->field_18;
            v21 = 0;
            do
            {
                if (!((char)v31(a1) & 1))
                    v24 = _$LT$core..iter..adapters..copied..Copied$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h68996df390fed03d(&v0);
            } while (((char)_$LT$core..iter..adapters..copied..Copied$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h68996df390fed03d(&v0) & 1) && v35 == v35);
        }
        if (v16 == v12)
            goto LABEL_488ea4;
        v17 = 0;
        goto LABEL_488f35;
    }
    else if (!v13)
    {
        if (!v12)
            goto LABEL_488d8e;
        if (!v11->field_34)
        {
LABEL_488ea4:
            v19 = *((long long *)&v7);
            v0 = v19;
            v1 = &v19[v12];
            v25 = a2->field_18;
            v21 = 0;
            do
            {
                if (!((char)v25(a1) & 1))
                    v24 = _$LT$core..iter..adapters..copied..Copied$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcbbc77ce41a0af1b(&v0);
            } while (((char)_$LT$core..iter..adapters..copied..Copied$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcbbc77ce41a0af1b(&v0) & 1) && v29 == v29);
        }
        else
        {
            v17 = 0;
LABEL_488d23:
            v23 = v18;
            v19 = *((long long *)&v7);
            if (!v17 && v23 == v12)
            {
                v26 = a2->field_18;
                v27 = 0;
                do
                {
                    v32 = v26(a1) & 4294967295 & 4294967295;
                    if ((((char)v32 ^ 1) & 1) || v12 == v27)
                    {
                        v21 = v32 | -0x100 | (char)v32 ^ 1 | -0x100 | ((char)v32 ^ 1) & v12 == v27;
                        goto LABEL_488fba;
                    }
                } while ((v33 = (unsigned long long)(char)*((char *)(v19 + v27)), v27 += 1, ((char)((unsigned long long)(char)((v33 - 65 & 4294967295 & 255 & 255) < 26) << 5) | (char)v33) == v34));
            }
            else
            {
                v28 = a2->field_18;
                if (!((char)v28(a1) & 1))
                {
                    v21 = v23 | -0x100 | 1;
                    if (!v23)
                        goto LABEL_488fba;
                    if (!v17)
                    {
LABEL_488fb0:
                        if (!(v37 == &v19[v12]))
                            goto LABEL_488fb8;
                        v21 = v44 | -0x100 | 1;
                    }
                    else if (!(v12 <= v17))
                    {
                        goto LABEL_488fb8;
                    }
                }
                else
                {
                    if (!v23)
                        goto LABEL_488fb8;
                    if (v17)
                    {
                        if (v12 <= v17)
                            goto LABEL_488fb8;
                        v38 = v19 + v17;
                    }
                    v5 = v36;
                    v39 = *(v5);
                    if (((char)(((v39 - 65 & 4294967295 & 255 & 255) < 26) << 5) | (char)v39) == v40)
                    {
                        v4 = v23;
                        v9 = v12 - v17;
                        v41 = 1;
                        while (((char)v28(a1) & 1))
                        {
                            v21 = 0;
                            if (!(v4 != v41) || !(v9 != v41) || !((v42 = (unsigned long long)(char)*((char *)(v5 + v41)), v41 += 1, v21 = 0, ((char)((unsigned long long)(char)((v42 - 65 & 4294967295 & 255 & 255) < 26) << 5) | (char)v42) == v40)))
                                goto LABEL_488fba;
                        }
                        v21 = v23 | -0x100 | 1;
                        if (v4 == v41)
                            goto LABEL_488fba;
                        v43 = v5 + v41;
                        goto LABEL_488fb0;
                    }
LABEL_488fb8:
                    v21 = 0;
                }
            }
        }
    }
    else
    {
        if (!v12)
            goto LABEL_488d8e;
        v16 = v11->field_28;
        if (v11->field_34)
        {
            v17 = 0;
            goto LABEL_488d23;
        }
    }
LABEL_488fba:
    if (v6[0])
        __rust_dealloc(v19);
    return (v21 | -0x100 | ~((char)v21) & 1) & 4294967295 & 4294967295;
}
