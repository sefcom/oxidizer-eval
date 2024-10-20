long long uu_du::parse_time_style::h1184e69d1f7d7983(unsigned long long a0[3], unsigned short *a1, unsigned long a2)
{
    unsigned long long v1;  // r15
    unsigned long long v3[4];  // rax

    if (!a1)
    {
        a0[1] = "%Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z0.0.27Estimate file space usageDisplay values are in units of the first available SIZE from --block-size,\nand the DU_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, units default to 1024 bytes (or";
        a0[2] = 14;
        a0[0] = 0;
        return a0;
    }
    if (!a2)
    {
        v1 = 1;
        goto LABEL_4b0f68;
    }
    if (a2 == 3)
    {
        if (!(unsigned short)((char)a1[1] ^ 111) && !(unsigned short)(*(a1) ^ 29545))
        {
            a0[1] = "%Y-%m-%dThursdayFebruaryextern \"";
            a0[2] = 8;
            a0[0] = 0;
            return a0;
        }
LABEL_4b0f38:
        v1 = __rust_alloc(a2, 1);
        if (v1)
        {
LABEL_4b0f68:
            memcpy(v1, a1, a2);
            v3 = __rust_alloc(32, 8);
            if (v3)
            {
                v3[0] = 2;
                v3[1] = a2;
                v3[2] = v1;
                v3[3] = a2;
                a0[1] = v3;
                a0[2] = &g_5349c0;
                a0[0] = 1;
                return a0;
            }
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
    }
    else if (a2 == 8)
    {
        if (*((long long *)&a1) == 8030878204345218406)
        {
            a0[1] = "%Y-%m-%d %H:%M:%S.%f %z0.0.27Estimate file space usageDisplay values are in units of the first available SIZE from --block-size,\nand the DU_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, units default to 1024 bytes (or 512 if POSIXL";
            a0[2] = 23;
            a0[0] = 0;
            return a0;
        }
        if (*((long long *)&a1) == 8030878204261461868)
        {
            a0[1] = "%Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z0.0.27Estimate file space usageDisplay values are in units of the first available SIZE from --block-size,\nand the DU_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, units default to 1024 bytes (or";
            a0[2] = 14;
            a0[0] = 0;
            return a0;
        }
        goto LABEL_4b0f38;
    }
    else if (!(a2 < 0))
    {
        goto LABEL_4b0f38;
    }
    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
}
