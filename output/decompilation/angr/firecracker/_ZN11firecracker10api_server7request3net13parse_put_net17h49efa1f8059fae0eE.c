long long firecracker::api_server::request::net::parse_put_net(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    unsigned long long v0;  // [bp-0x298]
    unsigned long long v1;  // [bp-0x290]
    void* v2;  // [bp-0x288]
    unsigned long long v3;  // [bp-0x280]
    unsigned long long v4;  // [bp-0x278]
    int v5;  // [bp-0x270], Other Possible Types: char
    unsigned long long v6;  // [bp-0x260]
    char v7;  // [bp-0x258], Other Possible Types: unsigned long
    char v8;  // [bp-0x257]
    unsigned int v9;  // [bp-0x254]
    int v10;  // [bp-0x252]
    char v11;  // [bp-0x250], Other Possible Types: unsigned long long
    char *v12;  // [bp-0x248], Other Possible Types: char
    unsigned long long v13;  // [bp-0x242]
    unsigned long long v14;  // [bp-0x240]
    void* v15;  // [bp-0x238]
    char *v16;  // [bp-0x1a0], Other Possible Types: char, unsigned long long
    unsigned long long v17;  // [bp-0x198]
    char *v18;  // [bp-0x190], Other Possible Types: char
    unsigned long long v19;  // [bp-0x188]
    unsigned long long v20;  // [bp-0xe8]
    unsigned long long v21;  // [bp-0xe0]
    char v22;  // [bp-0xd8]
    unsigned long long v23;  // [bp-0x60]
    char v24;  // [bp-0x58]
    unsigned long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned long long v29;  // rcx
    unsigned int v30;  // ecx
    unsigned long long v31;  // rcx
    int v32;  // xmm0

    g_7c4810.add(1);
    if (a3)
    {
        firecracker::api_server::parsed_request::checked_id(&(char)v7, a3, a4);
        v26 = v7;
        if ((char)v26 == 5)
        {
            v3 = *((long long *)&v11);
            v4 = *((long long *)&v12);
            v0 = a1;
            v1 = a2;
            v2 = 0;
            serde_json::de::from_trait(&(char)v7, &v0, a2);
            v26 = v16.inspect_err(&(char)v7);
            if (v16 == 4)
            {
                *((char *)&a0[8]) = 4;
                *((unsigned long long *)&a0[16]) = v17;
            }
            else
            {
                memcpy(&v22, &v18, 168);
                v20 = v16;
                v21 = v17;
                if (!(char)*((long long *)&v11).equal(*((long long *)&v12), v23, *((long long *)&v24)))
                {
                    g_7c4820.add(1);
                    v0 = v23;
                    v1 = *((long long *)&v24);
                    v16 = &v3;
                    v17 = <&T as core::fmt::Display>::fmt;
                    v18 = &v0;
                    v19 = <&T as core::fmt::Display>::fmt;
                    v7 = &g_7a3870;
                    v11 = 3;
                    v15 = 0;
                    v12 = &v16;
                    v14 = 2;
                    v5.map_or_else(0, a2, &(char)v7);
                    v10 = v5;
                    v13 = v6;
                    *((unsigned short *)&a0[8]) = 769;
                    v28 = (long long)(&v10)[8];
                    v29 = v13;
                    *((int128_t *)&a0[10]) = *((int128_t *)&v7);
                    *((unsigned long long *)&a0[24]) = v28;
                    *((unsigned long long *)&a0[32]) = v29;
                    *((unsigned long long *)a0) = 1;
                    return (unsigned long long)core::ptr::drop_in_place<vmm::vmm_config::net::NetworkInterfaceConfig>(&v20);
                }
                v27 = a0 + 8.new_sync(&v20);
                *((unsigned long long *)a0) = 0;
                return v27;
            }
        }
        else
        {
            v30 = *((int *)&v8);
            *((unsigned int *)&a0[12]) = v9;
            *((unsigned int *)&a0[9]) = v30;
            v31 = v11;
            v32 = *((int128_t *)&v12);
            *((char *)&a0[8]) = v26;
            *((unsigned long long *)&a0[16]) = v31;
            a0[24] = v32;
        }
    }
    else
    {
        v26 = (unsigned long long)g_7c4820.add(1);
        *((char *)&a0[8]) = 0;
    }
    *((unsigned long long *)a0) = 1;
    return v26;
}
