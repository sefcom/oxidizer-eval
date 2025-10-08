long long bat::app::App::new(void* a0)
{
    int v0;  // [bp-0xa8]
    int v1;  // [bp-0xa1]
    int v2;  // [bp-0x98]
    int v3;  // [bp-0x91]
    int v4;  // [bp-0x88]
    int v5;  // [bp-0x81]
    char v6;  // [bp-0x79]
    unsigned long long v7;  // [bp-0x71]
    char v8;  // [bp-0x60]
    char v9;  // [bp-0x5f]
    char v10;  // [bp-0x58]
    char v11;  // [bp-0x4f]
    char v12;  // [bp-0x48]
    char v13;  // [bp-0x3f]
    int v14;  // [bp-0x38]
    unsigned long long v15;  // [bp-0x28]
    char v16;  // [bp-0x20]
    unsigned int v18;  // eax
    unsigned long v19;  // rax
    int v20;  // xmm0
    int v21;  // xmm1
    int v22;  // xmm0
    int v23;  // xmm1
    int v24;  // xmm0
    int v25;  // xmm1

    std::io::stdio::stdout();
    v18 = std::sys::io::is_terminal::isatty::is_terminal();
    v8.matches(v18);
    v19 = v8;
    if ((char)v19 == 13)
    {
        v7 = v15;
        v20 = *((int128_t *)&v10);
        v21 = *((int128_t *)&v12);
        v5 = v14;
        v3 = v21;
        v1 = v20;
        *((unsigned long long *)&a0[56]) = v15;
        a0[40] = v14;
        a0[24] = v21;
        a0[8] = v20;
        *((char *)&a0[64]) = v18;
    }
    else
    {
        v22 = *((int128_t *)&v9);
        v23 = *((int128_t *)&v11);
        memcpy(&v6, &(char)v14, 16);
        *((int128_t *)&v4) = *((int128_t *)&v13);
        v2 = v23;
        v0 = v22;
        *((int128_t *)&a0[64]) = *((int128_t *)&v16);
        *((int128_t *)&a0[48]) = *((int128_t *)&v6);
        v24 = (int128_t)v0;
        v25 = (int128_t)v2;
        *((int128_t *)&a0[33]) = (int128_t)v4;
        a0[17] = v25;
        a0[1] = v24;
    }
    *((char *)a0) = v19;
    return v19;
}
