long long uu_nice::standardize_nice_args(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x17c]
    unsigned long long v1;  // [bp-0x178]
    unsigned int v2;  // [bp-0x178]
    unsigned long long v3;  // [bp-0x178]
    unsigned long long v4;  // [bp-0x178]
    unsigned long long v5;  // [bp-0x170]
    unsigned long long v6;  // [bp-0x168]
    int v7;  // [bp-0x160]
    unsigned long long v8;  // [bp-0x150]
    void* v9;  // [bp-0x148]
    unsigned long long v10;  // [bp-0x140]
    void* v11;  // [bp-0x138]
    unsigned long long v12;  // [bp-0x130]
    unsigned long long v13;  // [bp-0x128]
    int v14;  // [bp-0x128]
    int v15;  // [bp-0x120]
    unsigned long long v16;  // [bp-0x118]
    unsigned long long v17;  // [bp-0x110]
    int v18;  // [bp-0x108]
    unsigned long long v19;  // [bp-0x100]
    unsigned long long v20;  // [bp-0xf8]
    unsigned long long v21;  // [bp-0xe8]
    unsigned long long v22;  // [bp-0xe0]
    unsigned long long v23;  // [bp-0xd0]
    char v24;  // [bp-0xc8]
    unsigned long long v25;  // [bp-0xb8]
    char v26;  // [bp-0xa8]
    unsigned long long v27;  // [bp-0x98]
    char v28;  // [bp-0x88], Other Possible Types: unsigned long long
    char v29;  // [bp-0x80]
    unsigned long long v30;  // [bp-0x70]
    unsigned long long v31;  // [bp-0x68]
    unsigned long long v32;  // [bp-0x60]
    char v33;  // [bp-0x58]
    char v34;  // [bp-0x48]
    char v36;  // bl
    unsigned long long v37;  // r13
    unsigned long long v38;  // rbp
    unsigned long long v39;  // r15
    unsigned long long v40;  // rax
    int v41;  // xmm0
    unsigned long long v42;  // r15
    unsigned long long v43;  // r12
    unsigned long long v44;  // rax
    int v45;  // xmm0

    v21 = a1;
    v22 = a2;
    v9 = 0;
    v10 = 8;
    v11 = 0;
    v28.next(&v21);
    if ((char)(((0 ^ v28) & (0 ^ -(v28))) >> 63))
        core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(0x8000000000000000, *((long long *)&v29));
    else
        v9.push(&v28, &g_4dad98);
    memcpy(&v33, &v21, 16);
    v0 = 0;
    while (true)
    {
        v30.next(&v33);
        v37 = v30;
        if (v37 == 0x8000000000000000)
            break;
        v38 = v31;
        v39 = v32;
        if ((v36 & 1))
        {
            v1 = v37;
            v5 = v38;
            v6 = v39;
            v9.push(&v1, &g_4dae40);
            goto LABEL_452065;
        }
        if (((char)v0 & 1))
        {
            v1.to_vec("-n--adjustment: \nTry ' --help' for more information.\n", 2);
            v25 = v6;
            memcpy(&v24, &v1, 16);
            v1 = v37;
            v5 = v38;
            v6 = v39;
            v24.push(&v1);
            v9.push(&v24, &g_4dae28);
            v0 = 0;
            continue;
        }
        core::str::converts::from_utf8(&v1, v38, v39);
        if (!((char)v1 & 1))
        {
            v40 = v5.equal(v6, "-n--adjustment: \nTry ' --help' for more information.\n", 2);
            if ((v40 & 255))
                goto LABEL_452191;
        }
        core::str::converts::from_utf8(&v1, v38, v39);
        if (!((char)v1 & 1))
        {
            v40 = uu_nice::is_prefix_of(v5, v6, "--adjustment: \nTry ' --help' for more information.\n", 12, 3);
            if (!(v40 & 255))
                goto LABEL_45219e;
LABEL_452191:
            v0 = (unsigned int)v40 & 0xffffff00 | 1;
            goto LABEL_4523b4;
        }
        else
        {
LABEL_45219e:
            v34.clone(v38, v39);
            v1.from_utf8(&v34);
            if (v1 == 0x8000000000000000)
            {
                v20 = (long long)v7;
                v41 = *((int128_t *)&v5);
                v18 = v41;
                v17 = v20;
                v15 = v41;
                v13 = 0;
                v8 = (long long)v15;
                v42 = v16;
                v43 = v17;
                v2 = 0;
                v44 = ::0x44fe00::core::char::methods::encode_utf8_raw(&v2).strip_prefix_of(v42, v43);
                v36 = !v44;
                if (v44)
                {
                    v12 = v42;
                    ::0x44e9e0::core::num::<impl i64>::from_ascii_radix(&(char)v18, v44, a2);
                    if ((char)v18)
                    {
                        v3 = v8;
                        v5 = v12;
                        v6 = v43;
                        v9.push(&v3, &g_4dade0);
                    }
                    else
                    {
                        v2.to_vec("-n--adjustment: \nTry ' --help' for more information.\n", 2);
                        v27 = v6;
                        memcpy(&v26, &v1, 16);
                        v2.spec_to_string(v19);
                        v26.push(&v2);
                        v9.push(&v26, &g_4dadc8);
                        core::ptr::drop_in_place<alloc::string::String>(v8, v12);
                        v1 = v4;
LABEL_4523b4:
                        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v37, v38);
                        continue;
                    }
                }
                else
                {
                    v3 = v8;
                    v5 = v42;
                    v6 = v43;
                    v9.push(&v2, &g_4dadf8);
                }
                v1 = v3;
                goto LABEL_4523b4;
            }
            else
            {
                v20 = v6;
                v45 = *((int128_t *)&v1);
                v18 = v45;
                v17 = v20;
                v15 = v45;
                v13 = 1;
                core::ptr::drop_in_place<clap_builder::error::Message>(&v13);
                v1 = v37;
                v5 = v38;
                v6 = v39;
                v9.push(&v1, &g_4dae10);
LABEL_452065:
                v36 = 1;
            }
        }
    }
    if (((char)v0 & 1))
    {
        v1.to_vec("-n--adjustment: \nTry ' --help' for more information.\n", 2);
        v16 = v6;
        *((int128_t *)&v14) = *((int128_t *)&v1);
        v9.push(&(unsigned long long)v14, &g_4dadb0);
    }
    return v23.into_iter(&v9);
}
