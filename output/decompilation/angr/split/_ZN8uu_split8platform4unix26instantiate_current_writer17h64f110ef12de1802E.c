long long uu_split::platform::unix::instantiate_current_writer::h64f110ef12de1802(unsigned long long a0[2], unsigned long long a1[3], unsigned long long a2, unsigned long long a3, char a4)
{
    int v0;  // [bp-0x78], Other Possible Types: char
    char v1;  // [bp-0x74]
    char v2;  // [bp-0x70]
    char v3;  // [sp-0x60], Other Possible Types: unsigned long long
    char v4;  // [bp-0x5c]
    unsigned int v5;  // [bp-0x58]
    char v6;  // [sp-0x57]
    char v7;  // [sp-0x56]
    char v8;  // [sp-0x55]
    char v9;  // [bp-0x54], Other Possible Types: unsigned short
    char v10;  // [bp-0x50]
    unsigned long v11;  // [sp-0x40]
    unsigned long long v12;  // [sp-0x38]
    unsigned int v13;  // [sp-0x2c]
    unsigned long long v14;  // [sp-0x28]
    int v15;  // [sp-0x20]
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rcx

    v11 = a2;
    v12 = a3;
    if (a1[0] != 0x8000000000000000)
    {
        uu_split::platform::unix::FilterWriter::new::h45813eca9ccac0a5(&v3, a1[1], a1[2], a2, a3);
        if ((int)v3)
        {
            v17 = *((long long *)&v5);
            a0[1] = v17;
            a0[0] = 0x8000000000000000;
            return a0;
        }
        *((int128_t *)&v0) = *((int128_t *)&v10);
        v13 = *((int *)&v4);
        v14 = *((long long *)&v5);
        v15 = v0;
        v18 = alloc::boxed::Box$LT$T$GT$::new::hf533c4985f354361(&v13);
        v19 = &g_548dd0;
    }
    else
    {
        if (!a4)
        {
            v3 = 0x1b600000000;
            v5 = 0;
            v9 = 0;
            v7 = 1;
            std::fs::OpenOptions::open::h4e39116029faf268(&v0, &v3, a2, a3);
            if (*((int *)&v0))
            {
                v17 = uu_split::platform::unix::instantiate_current_writer::_$u7b$$u7b$closure$u7d$$u7d$::hab48b66e59ddb53b(&v11, *((long long *)&v2));
                a0[1] = v17;
                a0[0] = 0x8000000000000000;
                return a0;
            }
        }
        else
        {
            v3 = 0x1b600000000;
            v5 = 0;
            v9 = 0;
            v6 = 1;
            v9 = 1;
            v8 = 1;
            std::fs::OpenOptions::open::h4e39116029faf268(&v0, &v3, a2, a3);
            if (*((int *)&v0))
            {
                v17 = uu_split::platform::unix::instantiate_current_writer::_$u7b$$u7b$closure$u7d$$u7d$::hbae22fb731dd8edd(&v11, *((long long *)&v2));
                a0[1] = v17;
                a0[0] = 0x8000000000000000;
                return a0;
            }
        }
        v18 = ::0x4d5770::alloc::boxed::Box$LT$T$GT$::new::h8fc4b41669740c9d(*((int *)&v1));
        v19 = &g_548d80;
    }
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h1c3d443048ae43d7(a0, 0x2000, v18, v19);
    return a0;
}
