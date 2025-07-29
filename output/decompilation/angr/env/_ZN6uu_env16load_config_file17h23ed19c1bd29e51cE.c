long long uu_env::load_config_file(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x2a8]
    unsigned long long v1;  // [bp-0x2a8]
    unsigned long v2;  // [bp-0x2a0]
    unsigned long long v3;  // [bp-0x2a0]
    unsigned long long v4;  // [bp-0x298]
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
    int v16;  // [bp-0x240]
    struct_0 *v17;  // [bp-0x230]
    unsigned long long v18;  // [bp-0x228]
    char v19;  // [bp-0x220]
    unsigned long long v20;  // [bp-0x220]
    unsigned long long v21;  // [bp-0x218]
    int v22;  // [bp-0x210]
    int v23;  // [bp-0x1e8]
    int v24;  // [bp-0x1c8]
    int v25;  // [bp-0x1b8]
    struct_0 *v26;  // [bp-0x178]
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
    unsigned long long v52;  // rdx
    unsigned long long v53[2];  // rax
    struct_0 *v54;  // rax
    unsigned long v55;  // rdx

    v4 = a0.into_iter();
    v5 = v52;
    if (!v4.next())
        return 0;
    do
    {
        v2 = v53[0];
        v0 = v53[1];
        if ((char)v53[0].equal(v53[1], "-errorenv-error-config-fileuu_env(uutils coreutils) 0.1.0env-aboutenv-usageenv-after-helpignore-environmentenv-help-ignore-environmentchdirDIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringar", 1))
        {
            v26 = std::io::stdio::stdin();
            v18 = v26.lock();
            v19 = (char)v52 & 1;
            v40.read_from_opt(&v18, 257);
            core::ptr::drop_in_place<std::io::stdio::StdinLock>(v18, *((int *)&v19));
        }
        else
        {
            v40.load_from_file_opt(v2, v0, 257);
        }
        if ((char)(((0 ^ v40) & (0 ^ -(v40))) >> 63))
        {
            v11 = v42;
            memcpy(&v10, &v41, 16);
            v6 = v1;
            v8 = v3;
            return uu_env::load_config_file::{{closure}}(v2, v0, &v6);
        }
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
        memcpy(&v22, &(unsigned long long)v27, 152);
        v18 = v40;
        v20 = v1;
        v21 = v3;
        v7 = &v18;
        v9 = &v23;
        v10 = v24;
        v11 = (long long)v25;
        while (true)
        {
            v16.next(&v7);
            v54 = v17;
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
        core::ptr::drop_in_place<ini::Ini>(&v18);
        v53 = v4.next();
    } while (v53);
    return 0;
}
