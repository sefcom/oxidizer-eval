long long fish::future_feature_flags::Features::set_from_string(unsigned int a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    char v2;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    char v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    char v9;  // [bp-0x38]
    unsigned long long v11;  // rax
    char *v12;  // rbp
    unsigned long long v13;  // rdx
    unsigned long long v14;  // r12
    unsigned long long v15;  // r12
    unsigned long long v16;  // rax
    char *v17;  // rbx
    unsigned long long v18;  // rbp
    unsigned long long v19;  // rbp
    unsigned long long v20;  // rax
    unsigned long long v21;  // rsi
    unsigned long long v22;  // rax
    unsigned long long v23;  // r13
    unsigned long long v24;  // rbp
    unsigned long long v25;  // rbp
    unsigned long long v26;  // rbp
    unsigned long long v27;  // rbp
    unsigned long long v28;  // rbp
    unsigned long long v29;  // rdx
    unsigned long long v30;  // r12
    struct_0 *v31;  // rax
    unsigned long long v32;  // rbp
    unsigned long long v33;  // r12
    unsigned long long v36;  // r12
    unsigned long long v37;  // rbp
    unsigned long long v38;  // rbp
    unsigned long long v39;  // r12
    unsigned long long v42;  // r12
    unsigned long long v43;  // rbp
    unsigned long long v44;  // rbp
    unsigned long long v45;  // r12
    unsigned long long v48;  // r12
    unsigned long long v49;  // rbp
    unsigned long long v50;  // rbp
    unsigned long long v51;  // r12
    unsigned long long v54;  // r12
    unsigned long long v55;  // rbp
    unsigned long long v56;  // rbp
    unsigned long long v57;  // r12
    unsigned long long v60;  // r12
    unsigned long long v61;  // rbp
    unsigned long long v62;  // rbp
    unsigned long long v63;  // r12
    unsigned long long v66;  // r12
    unsigned long long v67;  // rbp
    unsigned long long v68;  // rbp
    unsigned long long v69;  // r12
    char v72;  // r14b

    v7 = a1;
    v8 = a2;
    v9 = 0;
    v11 = v7.next();
    if (!v11)
        return v11;
    v12 = &v2;
    while (true)
    {
        if (v14)
            break;
LABEL_13b8937:
        v11 = v7.next();
        v14 = v13;
        if (!v11)
            return v11;
    }
    v2 = v11;
    v3 = v15 * 4 + v11;
    v6 = 0;
    v4 = "\t";
    v5 = 12;
    v16 = v12.fold();
    v17 = v12;
    v18 = v15;
    v19 = v18 - v16;
    if (v18 < v16)
        core::slice::index::slice_start_index_len_fail(v16, v15, &g_14d90f0); /* do not return */
    v2 = v16 * 4 + v11;
    v6 = 0;
    v4 = "\t";
    v5 = 12;
    v20 = v17.fold();
    v21 = v19;
    if (v21 < v20)
        core::panicking::panic_const::panic_const_sub_overflow(&g_14d90c0); /* do not return */
    v22 = 0.index(v21 - v20, v2, v19, &g_14d90d8);
    v23 = core::slice::<impl [T]>::strip_prefix(v22, v13);
    if (v23)
    {
        v24 = v23;
        v25 = v24;
        v26 = v24;
        if (v25)
            goto LABEL_13b8a07;
LABEL_13b8a06:
        v28 = v26;
        v29 = v13;
        goto LABEL_13b8a09;
    }
    v27 = v22;
    v25 = v27;
    v26 = v27;
    if (!v24)
        goto LABEL_13b8a06;
LABEL_13b8a07:
    v28 = v25;
    v29 = v13;
LABEL_13b8a09:
    v30 = v29;
    v0 = v28;
    v1 = v30;
    v2 = &g_14ccfd0;
    v3 = &g_14cd1c8;
    v31 = v17.find(&v0);
    if (v31)
    {
        v12 = &v2;
        if (v31->field_32)
            goto LABEL_13b8930;
    }
    else
    {
        if (!(char)"3".equal(3, v28, v30))
        {
            v32 = v28;
            v33 = v30;
            if (!(char)v32.equal(v33, "a", 3))
                goto LABEL_13b8abc;
        }
        a0.set(1, !v24);
        v32 = v0;
        v33 = v1;
LABEL_13b8abc:
        v36 = v33;
        v37 = v32;
        if (!(char)"3".equal(3, v37, v36))
        {
            v38 = v37;
            v39 = v36;
            if (!(char)v38.equal(v39, "a", 3))
                goto LABEL_13b8b11;
        }
        a0.set(2, !v24);
        v38 = v0;
        v39 = v1;
LABEL_13b8b11:
        v42 = v39;
        v43 = v38;
        if (!(char)"3".equal(3, v43, v42))
        {
            v44 = v43;
            v45 = v42;
            if (!(char)v44.equal(v45, "a", 3))
                goto LABEL_13b8b66;
        }
        a0.set(3, !v24);
        v44 = v0;
        v45 = v1;
LABEL_13b8b66:
        v48 = v45;
        v49 = v44;
        if (!(char)"4".equal(3, v49, v48))
        {
            v50 = v49;
            v51 = v48;
            if (!(char)v50.equal(v51, "a", 3))
                goto LABEL_13b8bb7;
        }
        a0.set(4, !v24);
        v50 = v0;
        v51 = v1;
LABEL_13b8bb7:
        v54 = v51;
        v55 = v50;
        if (!(char)"4".equal(3, v55, v54))
        {
            v56 = v55;
            v57 = v54;
            if (!(char)v56.equal(v57, "a", 3))
                goto LABEL_13b8c08;
        }
        a0.set(5, !v24);
        v56 = v0;
        v57 = v1;
LABEL_13b8c08:
        v60 = v57;
        v61 = v56;
        if (!(char)"4".equal(3, v61, v60))
        {
            v62 = v61;
            v63 = v60;
            if (!(char)v62.equal(v63, "a", 3))
                goto LABEL_13b8c59;
        }
        a0.set(6, !v24);
        v62 = v0;
        v63 = v1;
LABEL_13b8c59:
        v66 = v63;
        v67 = v62;
        if (!(char)"4".equal(3, v67, v66))
        {
            v68 = v67;
            v69 = v66;
            if (!(char)v68.equal(v69, "a", 3))
                goto LABEL_13b8cb1;
        }
        a0.set(7, !v24);
        v68 = v0;
        v69 = v1;
LABEL_13b8cb1:
        v72 = 8;
        if ((char)"4".equal(3, v68, v69))
        {
            v12 = &v2;
        }
        else
        {
            v12 = &v2;
            if (!(char)v68.equal(v69, "a", 3))
                goto LABEL_13b8930;
        }
    }
    a0.set(v72, !v24);
LABEL_13b8930:
    goto LABEL_13b8937;
}
