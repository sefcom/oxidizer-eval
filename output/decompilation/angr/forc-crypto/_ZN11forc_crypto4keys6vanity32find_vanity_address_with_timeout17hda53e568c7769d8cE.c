long long forc_crypto::keys::vanity::find_vanity_address_with_timeout(unsigned long long a0[9], uint128_t a1[3], char a2, char a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x208]
    unsigned long long v1;  // [bp-0x200]
    int v2;  // [bp-0x1f8]
    int v3;  // [bp-0x1e8]
    int v4;  // [bp-0x1d8]
    unsigned long long v5;  // [bp-0x1c8]
    char v6;  // [bp-0x1c0]
    unsigned long long v7;  // [bp-0x1b8]
    unsigned long long v8;  // [bp-0x1b0]
    int v9;  // [bp-0x1a8]
    int v10;  // [bp-0x198]
    int v11;  // [bp-0x188]
    char v12;  // [bp-0x178]
    unsigned long long v13;  // [bp-0x168]
    int v14;  // [bp-0x168]
    unsigned long long v15;  // [bp-0x160]
    int v16;  // [bp-0x158]
    char v17;  // [bp-0x158]
    int v18;  // [bp-0x148]
    int v19;  // [bp-0x138]
    char *v20;  // [bp-0x128], Other Possible Types: char
    char *v21;  // [bp-0x120]
    char v22;  // [bp-0xc0]
    char v23;  // [bp-0x28]
    unsigned long long v25;  // rax

    *((unsigned long long *)&v14) = 1;
    v15 = 1;
    v17 = 0;
    v25 = (unsigned long long)v14.new();
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v25) + 1, 0, (unsigned long long)(char)(&v23 < 480))))
    {
        v0 = v25;
        v6 = a2;
        v5 = v25;
        *((uint128_t *)&v2) = a1[0];
        *((uint128_t *)&v3) = a1[1];
        *((uint128_t *)&v4) = a1[2];
        if ((a3 & 1))
        {
            v1 = a4;
            (unsigned long long)v14.new();
            if (v13 != 2)
            {
                memcpy(&v12, &v20, 16);
                v11 = v19;
                v10 = v18;
                v9 = v16;
                v7 = v13;
                v8 = 1;
                memcpy(&v19, &v5, 16);
                v18 = v4;
                v16 = v3;
                v14 = v2;
                v20 = &v1;
                v21 = &v0;
                v22 = 0;
                a0.block_on(&v7, &(unsigned long long)v14);
                core::ptr::drop_in_place<alloc::sync::Arc<core::sync::atomic::AtomicBool>>(&v0);
                core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(&v7);
                return a0;
            }
            a0[0] = 1.from();
            a0[8] = 9223372036854775809;
            core::ptr::drop_in_place<forc_crypto::keys::vanity::find_vanity_address_with_timeout::{{closure}}>(&v2);
        }
        else
        {
            forc_crypto::keys::vanity::find_vanity_address_with_timeout::{{closure}}(a0, &v2);
            core::ptr::drop_in_place<forc_crypto::keys::vanity::find_vanity_address_with_timeout::{{closure}}>(&v2);
        }
        core::ptr::drop_in_place<alloc::sync::Arc<core::sync::atomic::AtomicBool>>(&v0);
        return a0;
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 8369721()
}
