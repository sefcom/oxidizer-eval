long long bat::output::OutputType::from_mode(struct_0 *a0, char a1, char a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x98]
    char v1;  // [bp-0x97]
    char v2;  // [bp-0x90]
    int v3;  // [bp-0x88]
    char v4;  // [bp-0x80]
    int v5;  // [bp-0x78]
    char v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    int v9;  // [bp-0x58]
    int v10;  // [bp-0x48]
    int v11;  // [bp-0x38]
    int v12;  // [bp-0x28]
    char v13;  // [bp-0x19]
    unsigned long long v14;  // [bp-0x11]
    int v16;  // xmm2
    int v17;  // xmm0
    int v18;  // xmm1
    int v19;  // xmm0
    int v20;  // xmm1

    if (a1)
    {
        if (a1 == 1)
        {
            v0.try_pager(0, a2, a3, a4);
            if (v0 != 13)
            {
                v19 = *((int128_t *)&v1);
                v20 = (int128_t)v3;
                memcpy(&v13, &(char)v7, 16);
                *((int128_t *)&v12) = (int128_t)v5;
                v11 = v20;
                v10 = v19;
                *((void*)&a0->field_11[15]) = v9;
                *((int128_t *)&a0->field_8[24]) = *((int128_t *)&v13);
                *((int128_t *)&a0->field_8[9]) = (int128_t)v12;
                *((void*)&a0->field_1[16]) = v11;
                *((void*)&a0->field_1[0]) = v10;
                a0->field_0 = v0;
                return a0;
            }
LABEL_83cdc2:
            v14 = v8;
            v16 = *((int128_t *)&v6);
            memcpy(&v0, &v2, 16);
            *((int128_t *)&v3) = *((int128_t *)&v4);
            v5 = v16;
            v7 = v14;
        }
        else
        {
            v0.stdout();
        }
        *((unsigned long long *)&a0->field_11[7]) = v7;
        v17 = *((int128_t *)&v0);
        v18 = (int128_t)v3;
        *((int128_t *)&a0->field_8[16]) = (int128_t)v5;
        *((void*)&a0->field_8[0]) = v18;
        *((void*)&a0->field_1[7]) = v17;
        a0->field_0 = 13;
        return a0;
    }
    v0.try_pager(1, a2, a3, a4);
    if (v0 != 13)
    {
        v19 = *((int128_t *)&v1);
        v20 = (int128_t)v3;
        memcpy(&v13, &(char)v7, 16);
        *((int128_t *)&v12) = (int128_t)v5;
        v11 = v20;
        v10 = v19;
        *((void*)&a0->field_11[15]) = v9;
        *((int128_t *)&a0->field_8[24]) = *((int128_t *)&v13);
        *((int128_t *)&a0->field_8[9]) = (int128_t)v12;
        *((void*)&a0->field_1[16]) = v11;
        *((void*)&a0->field_1[0]) = v10;
        a0->field_0 = v0;
        return a0;
    }
    goto LABEL_83cdc2;
}
