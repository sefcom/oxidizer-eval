long long firecracker::api_server::request::drive::parse_put_drive(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    unsigned long long v0;  // [bp-0x248]
    unsigned long long v1;  // [bp-0x240]
    void* v2;  // [bp-0x238]
    char v3;  // [bp-0x230], Other Possible Types: unsigned long long
    char v4;  // [bp-0x22f]
    unsigned int v5;  // [bp-0x22c]
    int v6;  // [bp-0x22a]
    char v7;  // [bp-0x228]
    char v8;  // [bp-0x220]
    unsigned long long v9;  // [bp-0x21a]
    unsigned long long v10;  // [bp-0x178]
    unsigned long long v11;  // [bp-0x170]
    char v12;  // [bp-0x168]
    unsigned long long v13;  // [bp-0x130]
    char v14;  // [bp-0x128]
    char v15;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0xc8]
    char v17;  // [bp-0xc0]
    unsigned long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // r14
    unsigned long long v23;  // rax
    unsigned int v24;  // ecx
    unsigned long long v25;  // rcx
    int v26;  // xmm0
    unsigned long long v27;  // rax

    g_7c4770.add(1);
    if (!a3)
    {
        v27 = (unsigned long long)g_7c4780.add(1);
        *((char *)&a0[8]) = 0;
        *((unsigned long long *)a0) = 1;
        return v27;
    }
    firecracker::api_server::parsed_request::checked_id(&v3, a3, a4);
    v19 = v3;
    if ((char)v19 != 5)
    {
        v24 = *((int *)&v4);
        *((unsigned int *)&a0[12]) = v5;
        *((unsigned int *)&a0[9]) = v24;
        v25 = (long long)v6;
        v26 = *((int128_t *)&v8);
        *((char *)&a0[8]) = v19;
        *((unsigned long long *)&a0[16]) = v25;
        a0[24] = v26;
        *((unsigned long long *)a0) = 1;
        return v19;
    }
    v0 = a1;
    v1 = a2;
    v2 = 0;
    serde_json::de::from_trait(&v3, &v0, a2);
    v20 = v15.inspect_err(&v3);
    if (v15 == 4)
    {
        *((char *)&a0[8]) = 4;
        *((unsigned long long *)&a0[16]) = v16;
        *((unsigned long long *)a0) = 1;
        return v20;
    }
    memcpy(&v12, &v17, 152);
    v10 = v15;
    v11 = v16;
    if ((char)*((long long *)&v7).equal(*((long long *)&v8), v13, *((long long *)&v14)))
    {
        memcpy(&v7, &v10, 168);
        v3 = 17;
        v21 = a0 + 8.new_sync(&v3);
        v22 = 0;
    }
    else
    {
        v22 = 1;
        g_7c4780.add(1);
        v15.to_vec("The id from the path does not match the id from the body!", 57);
        v9 = *((long long *)&v17);
        *((int128_t *)&v6) = *((int128_t *)&v15);
        *((unsigned short *)&a0[8]) = 769;
        v23 = (long long)(&v6)[8];
        *((int128_t *)&a0[10]) = *((int128_t *)&v3);
        *((unsigned long long *)&a0[24]) = v23;
        *((unsigned long long *)&a0[32]) = v9;
        v21 = (unsigned long long)core::ptr::drop_in_place<vmm::vmm_config::drive::BlockDeviceConfig>(&v10);
    }
    *((unsigned long long *)a0) = v22;
    return v21;
}
