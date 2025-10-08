long long uu_env::load_config_file(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x2a8]
    unsigned long v1;  // [bp-0x2a8]
    unsigned long v2;  // [bp-0x2a0]
    unsigned long v3;  // [bp-0x2a0]
    unsigned long long v4[2];  // [bp-0x298]
    unsigned long long v5;  // [bp-0x290]
    unsigned long long v6;  // [bp-0x288]
    char *v7;  // [bp-0x288]
    unsigned long long v8;  // [bp-0x280]
    char *v9;  // [bp-0x280]
    int v10;  // [bp-0x278]
    unsigned long long v11;  // [bp-0x268]
    unsigned long long v12;  // [bp-0x260]
    unsigned long long v13;  // [bp-0x258]
    unsigned long long v14;  // [bp-0x250]
    unsigned long long v15;  // [bp-0x248]
    unsigned long long v16;  // [bp-0x240]
    char v17;  // [bp-0x238]
    unsigned long long v18;  // [bp-0x238]
    unsigned long long v19;  // [bp-0x230]
    int v20;  // [bp-0x228]
    int v21;  // [bp-0x200]
    int v22;  // [bp-0x1e0]
    int v23;  // [bp-0x1d0]
    int v24;  // [bp-0x190]
    struct_2 *v25;  // [bp-0x180]
    struct_2 *v26;  // [bp-0x178]
    int v27;  // [bp-0x178]
    unsigned long v28;  // [bp-0x170]
    unsigned long long v29;  // [bp-0x168]
    int v30;  // [bp-0x168]
    int v31;  // [bp-0x160]
    unsigned long v32;  // [bp-0x158]
    int v33;  // [bp-0x150]
    int v34;  // [bp-0x140]
    int v35;  // [bp-0x130]
    int v36;  // [bp-0x120]
    int v37;  // [bp-0x110]
    int v38;  // [bp-0x100]
    char v39;  // [bp-0xf0]
    unsigned long long v40;  // [bp-0xe0]
    int v41;  // [bp-0xc8]
    unsigned long long v42;  // [bp-0xb8]
    int v43;  // [bp-0xb0]
    int v44;  // [bp-0xa0]
    int v45;  // [bp-0x90]
    int v46;  // [bp-0x80]
    int v47;  // [bp-0x70]
    int v48;  // [bp-0x60]
    int v49;  // [bp-0x50]
    char v50;  // [bp-0x40]
    unsigned long long v52[2];  // rcx
    char v53;  // dl
    struct_2 *v54;  // rax
    unsigned long v55;  // rdx

    if (!a0->field_10)
        return 0;
    v52 = a0->field_8;
    v5 = &v52[a0->field_10];
    do
    {
        v4[0] = v52;
        v2 = v52[0];
        v0 = v52[1];
        if ((char)v52[0].equal(v52[1], "-: uu_env(uutils coreutils) 0.0.30Set each NAME to VALUE in the environment and run COMMAND{} [OPTION]... [-] [NAME=VALUE]... [COMMAND [ARG]...]A mere - implies -i. If no COMMAND, print the resulting environment.ignore-environmentstart with an empty enviro", 1))
        {
            v26 = std::io::stdio::stdin();
            v16 = v26.lock();
            v17 = v53 & 1;
            v40.read_from_opt(&v16);
            core::ptr::drop_in_place<std::io::stdio::StdinLock>(v16, *((int *)&v17));
        }
        else
        {
            v40.load_from_file_opt(v2, v0);
        }
        if ((char)(((0 ^ v40) & (0 ^ -(v40))) >> 63))
        {
            v11 = v42;
            memcpy(&v10, &v41, 16);
            v6 = v1;
            v8 = v3;
            return uu_env::load_config_file::{{closure}}(v2, v0, &v6);
        }
        v52[0] = v4 + 1;
        v29 = v42;
        v27 = v41;
        memcpy(&v39, &v50, 16);
        v38 = v49;
        v37 = v48;
        v36 = v47;
        v35 = v46;
        v34 = v45;
        v33 = v44;
        v31 = v43;
        v3 = v8;
        v1 = v6;
        memcpy(&v20, &(unsigned long long)v27, 152);
        v16 = v40;
        v18 = v1;
        v19 = v3;
        v7 = &v16;
        v9 = &v21;
        v10 = v22;
        v11 = (long long)v23;
        while (true)
        {
            v24.next(&v7);
            v54 = v25;
            if (!v54)
                break;
            v55 = v54->field_70;
            v26 = v54;
            v28 = &v54->padding_0[64];
            *((uint128_t *)&v30) = v54->field_60;
            v32 = v55;
            while (true)
            {
                v12.next(&v26);
                if (!v12)
                    break;
                std::env::set_var(v12, v13, v14, v15);
            }
        }
        core::ptr::drop_in_place<ini::Ini>(&v16);
    } while (v52 != v5);
    return 0;
}
