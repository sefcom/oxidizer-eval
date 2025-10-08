long long fish::builtins::path::path_change_extension(unsigned long long a0, struct_0 *a1, unsigned long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x1a8]
    int v1;  // [bp-0x1a8]
    unsigned long long v2;  // [bp-0x1a0]
    unsigned long long v3;  // [bp-0x198]
    int v4;  // [bp-0x188]
    unsigned long long v5;  // [bp-0x180]
    unsigned long long v6;  // [bp-0x178]
    void* v7;  // [bp-0x170]
    int v8;  // [bp-0x168]
    int v9;  // [bp-0x168]
    int v10;  // [bp-0x168]
    unsigned long long v11;  // [bp-0x158]
    unsigned int v12;  // [bp-0x148]
    unsigned int v13;  // [bp-0x140]
    void* v14;  // [bp-0x138]
    void* v15;  // [bp-0x128]
    void* v16;  // [bp-0x120]
    int v17;  // [bp-0x118]
    char v18;  // [bp-0x117]
    int v19;  // [bp-0x116]
    char v20;  // [bp-0x108]
    int v21;  // [bp-0x100]
    char v22;  // [bp-0x100]
    int v23;  // [bp-0xf0]
    int v24;  // [bp-0xe0]
    char v25;  // [bp-0xd0]
    int v26;  // [bp-0xc0]
    char v27;  // [bp-0xb0]
    char v28;  // [bp-0xa0]
    int v29;  // [bp-0x98]
    int v30;  // [bp-0x88]
    int v31;  // [bp-0x78]
    char v32;  // [bp-0x68]
    int v33;  // [bp-0x58]
    char v34;  // [bp-0x48]
    unsigned long long v35;  // [bp-0x38]
    char v37;  // al
    unsigned long v38;  // cc_ndep
    unsigned long long v39;  // cc_ndep
    unsigned long long v40;  // r14
    void* v41;  // rbx
    unsigned long long v42;  // cc_ndep
    void* v43;  // rbx
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rdx
    unsigned long long v46;  // rax
    unsigned long long v47;  // rsi
    void* v48;  // r12
    unsigned long long v49;  // cc_op
    void* v50;  // cc_dep1
    unsigned long long v51;  // cc_dep2
    void* v52;  // rbp
    unsigned int v53;  // eax

    v14 = 0;
    v12 = 0;
    v13 = 0;
    v15 = 0;
    *((uint128_t *)&v17) = 0;
    v20 = 0;
    v7 = 0;
    v37 = fish::builtins::path::parse_opts(&v12, &v7, 1, a2, a3, a0, a1);
    if ((v37 & 1))
        return 8589934593;
    v22.new(a2, a3, &v7, a1, 0x1000);
    v39 = _ccall(17, (unsigned long long)(v37 & 1), 0, v38);
    v28 = (char)v17 + 1;
    v35 = *((long long *)&v28);
    memcpy(&v34, &v27, 16);
    v33 = v26;
    memcpy(&v32, &v25, 16);
    v31 = v24;
    v30 = v23;
    v29 = v21;
    v40 = a1->field_8;
    v41 = 0;
    while (true)
    {
        v42 = v39;
        v43 = v41;
        v9 = v8;
        v22.next(&v29);
        if ((long long)v21 == 9223372036854775809)
            break;
        v4 = v21;
        v6 = (long long)v23;
        if (((char)fish::builtins::path::find_extension(v5, (long long)v23) & 1))
        {
            (char)v4.to_mut();
            v6 = v6;
            if (v44 <= v6)
            {
                v6 = v44;
                v6 = v44;
            }
            v45 = v6;
            v46 = (long long)v4;
            v47 = v5;
            if (v46 != 0x8000000000000000)
                goto LABEL_135d2e0;
            v9.to_vec(v5, v45);
            goto LABEL_135d2b6;
        }
        else
        {
            v46 = (long long)v4;
            v47 = v5;
            v45 = v6;
            if (v46 == 0x8000000000000000)
            {
                v9.to_vec(v5, v6);
LABEL_135d2b6:
                v3 = v11;
                v1 = v9;
                v48 = v15;
                v49 = 20;
                v50 = v48;
                v51 = 0;
                if (!v48)
                    goto LABEL_135d33b;
                goto LABEL_135d2fc;
            }
            else
            {
LABEL_135d2e0:
                v0 = v46;
                v2 = v47;
                v3 = v45;
                v48 = v15;
                v49 = 20;
                v50 = v48;
                v51 = 0;
                if (!v48)
                    goto LABEL_135d33b;
LABEL_135d2fc:
                v52 = v16;
                v49 = 20;
                v50 = v52;
                v51 = 0;
                if (v52)
                {
                    v53 = v48.char_at(v52, 0);
                    v49 = 7;
                    v50 = v53;
                    v51 = 46;
                    if (v53 != 46)
                        v0.push(46);
                    v0.spec_extend(v48, v48 + v52 * 4);
                }
LABEL_135d33b:
                v11 = v3;
                memcpy(&v9, &v0, 16);
                fish::builtins::path::path_out(v40, v18, (char)v19, &v9);
                v8 = v10;
                v41 = v43 + 1;
                v39 = _ccall(v49, v50, v51, v42);
                if ((char)_ccall(4, 24, v43 + 1, 0, _ccall(v49, v50, v51, v42)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14cb1b8); /* do not return */
            }
        }
    }
    core::ptr::drop_in_place<fish::builtins::shared::Arguments>(&v29);
    if (!v43)
        return 4294967297;
    return 0x100000000;
}
