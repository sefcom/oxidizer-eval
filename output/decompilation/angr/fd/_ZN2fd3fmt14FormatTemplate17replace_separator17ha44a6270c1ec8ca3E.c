long long fd::fmt::FormatTemplate::replace_separator(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x148]
    unsigned long long v1;  // [bp-0x140]
    void* v2;  // [bp-0x138]
    struct_0 *v3;  // [bp-0x130]
    char v4;  // [bp-0x128]
    char v6;  // [bp-0x118]
    int v8;  // [bp-0x108]
    char v9;  // [bp-0xf8], Other Possible Types: unsigned long long
    int v10;  // [bp-0xe8]
    unsigned long long v11;  // [bp-0xe0]
    int v12;  // [bp-0xd8]
    unsigned long long v13;  // [bp-0xd0]
    int v14;  // [bp-0xc8]
    unsigned long long v15;  // [bp-0xb8]
    char v16;  // [bp-0xa8]
    char v21;  // [bp-0x70]
    char v22;  // [bp-0x60]
    int v23;  // [bp-0x50]
    char v24;  // [bp-0x40]
    unsigned long long v26;  // rdx
    int v27;  // xmm1
    unsigned long v28;  // rax
    unsigned long v29;  // rcx
    unsigned long long v31;  // rbx
    unsigned long long v32;  // r13

    if (!a3)
    {
        a0[1] = a1;
        a0[2] = a2;
        a0[0] = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v0 = a2.with_capacity_in(1, 1, &g_8024a0);
    v1 = v26;
    v2 = 0;
    v4.components(a1, a2);
    memcpy(&v24, &v9, 16);
    v23 = v8;
    memcpy(&v22, &v6, 16);
    memcpy(&v21, &v4, 16);
    while (true)
    {
        v16 = 11;
        v4.next(&v21);
        if (v4 == 10)
            break;
        v27 = *((int128_t *)&v6);
        *((int128_t *)&v10) = *((int128_t *)&v4);
        v15 = v9;
        v14 = v8;
        v12 = v27;
        v28 = (char)v10;
        v29 = v28 - 5;
        if (4 <= (v28 - 6 & 255))
            v29 = 0;
        if (v29)
        {
            if (v29 != 1)
            {
                v0.push((unsigned long long)(char)v10.as_os_str(), a2);
                v16.get_or_insert_with(&v21);
                if (v16 == 10)
                    goto LABEL_5f6353;
            }
            v0.push(a3, a4);
        }
        else
        {
            if ((char)v28 == 4)
            {
                v31 = v13;
                v32 = (long long)v14;
                v0.push(a3, a4);
                v0.push(a3, a4);
                v0.push(v11, (long long)v12);
                v0.push(a3, a4);
            }
            else
            {
                v31 = (unsigned long long)(char)v10.as_os_str();
                v32 = v26;
            }
            v0.push(v31, v32);
        }
LABEL_5f6353:
    }
    v3->field_10 = 0;
    v3->field_0 = *((int128_t *)&v0);
    return 0;
}
