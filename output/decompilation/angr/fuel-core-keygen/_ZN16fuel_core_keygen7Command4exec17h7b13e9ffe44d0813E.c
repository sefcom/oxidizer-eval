long long fuel_core_keygen::Command::exec(void* a0, void* a1)
{
    char v0;  // [bp-0x200]
    char v1;  // [bp-0x1ff]
    unsigned int v2;  // [bp-0x1fc]
    unsigned long long v3;  // [bp-0x1f8]
    int v4;  // [bp-0x1f0]
    char v5;  // [bp-0x1e0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x1d8]
    int v7;  // [bp-0x1d0], Other Possible Types: char
    int v8;  // [bp-0x1c0]
    int v9;  // [bp-0x1b0]
    int v10;  // [bp-0x1a0]
    int v11;  // [bp-0x190]
    char v12;  // [bp-0x180]
    char v13;  // [bp-0x170]
    unsigned long long v14;  // [bp-0x140]
    unsigned long long v15;  // [bp-0x138]
    int v16;  // [bp-0x130]
    int v17;  // [bp-0x120]
    int v18;  // [bp-0x110]
    int v19;  // [bp-0x100]
    int v20;  // [bp-0xf0]
    char v21;  // [bp-0xe0]
    char v22;  // [bp-0xd0]
    unsigned long long v23;  // [bp-0xc0]
    unsigned long long v24;  // [bp-0xb8]
    char v25;  // [bp-0xb0]
    unsigned long long v27;  // rax
    unsigned long v28;  // rax
    unsigned int v29;  // ecx
    unsigned long long v30;  // rcx
    char v31;  // dl
    unsigned long long v32;  // rax
    unsigned int v33;  // ecx

    if ((char)(((0 ^ *((long long *)a1)) & (0 ^ -(*((long long *)a1)))) >> 63))
    {
        v27 = fuel_core_keygen::new_key(&v5, (char)a1[9]);
        if (v5 == 2)
        {
            *((unsigned long long *)a0) = v6;
            *((char *)&a0[32]) = 2;
            return v27;
        }
        memcpy(&v25, &v7, 144);
        v23 = v5;
        v24 = v6;
        serde_json::value::to_value(&v0, &v23);
        v28 = v0;
        if ((char)v28 == 6)
        {
            v3.from();
            *((unsigned long long *)a0) = v32;
            *((char *)&a0[32]) = 2;
            return v32;
        }
        v29 = *((int *)&v1);
        *((unsigned int *)&a0[4]) = v2;
        *((unsigned int *)&a0[1]) = v29;
        v30 = v3;
        a0[16] = v4;
        v31 = (char)a1[8];
    }
    else
    {
        fuel_core_keygen::parse_secret(&(char)v5, (char)a1[25], (long long)a1[8], (long long)a1[16]);
        v32 = v6;
        if (v5 == 2)
        {
            *((unsigned long long *)a0) = v32;
            *((char *)&a0[32]) = 2;
            return v32;
        }
        memcpy(&v22, &v13, 16);
        memcpy(&v21, &v12, 16);
        v20 = v11;
        v19 = v10;
        v18 = v9;
        v17 = v8;
        v16 = v7;
        v14 = v5;
        v15 = v32;
        serde_json::value::to_value(&v0, &v14);
        v28 = v0;
        if ((char)v28 == 6)
        {
            v32 = v3.from();
            *((unsigned long long *)a0) = v32;
            *((char *)&a0[32]) = 2;
            return v32;
        }
        v33 = *((int *)&v1);
        *((unsigned int *)&a0[4]) = v2;
        *((unsigned int *)&a0[1]) = v33;
        v30 = v3;
        a0[16] = v4;
        v31 = (char)a1[24];
    }
    *((char *)a0) = v28;
    *((unsigned long long *)&a0[8]) = v30;
    *((char *)&a0[32]) = v31;
    return v28;
}
