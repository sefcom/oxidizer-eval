long long firecracker::api_server::request::drive::parse_patch_drive(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    unsigned long long v0;  // [bp-0x1e0]
    unsigned long long v1;  // [bp-0x1d8]
    void* v2;  // [bp-0x1d0]
    unsigned long long v3;  // [bp-0x1c8]
    unsigned long long v4;  // [bp-0x1c0]
    int v5;  // [bp-0x1b8]
    int v6;  // [bp-0x1a8]
    int v7;  // [bp-0x198]
    char v8;  // [bp-0x188]
    unsigned long long v9;  // [bp-0x180]
    int v10;  // [bp-0x178]
    int v11;  // [bp-0x168], Other Possible Types: char
    char v12;  // [bp-0x158], Other Possible Types: unsigned long long
    char v13;  // [bp-0x157]
    unsigned int v14;  // [bp-0x154]
    int v15;  // [bp-0x152]
    int v16;  // [bp-0x150], Other Possible Types: char
    char v17;  // [bp-0x148]
    unsigned long long v18;  // [bp-0x142]
    int v19;  // [bp-0x140]
    int v20;  // [bp-0x130]
    char v21;  // [bp-0x120]
    char v22;  // [bp-0x110]
    char v23;  // [bp-0x100]
    int v24;  // [bp-0xf0]
    char v25;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long v26;  // [bp-0x98]
    int v27;  // [bp-0x90]
    int v28;  // [bp-0x80]
    int v29;  // [bp-0x70]
    char v30;  // [bp-0x60]
    int v31;  // [bp-0x50]
    char v32;  // [bp-0x40]
    unsigned long v34;  // rax
    unsigned long long v35;  // rax
    unsigned long long v36;  // rax
    unsigned long long v37;  // rcx
    unsigned int v38;  // ecx
    unsigned long long v39;  // rcx
    int v40;  // xmm0

    _ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E.add(1);
    if (a3)
    {
        firecracker::api_server::parsed_request::checked_id(&(char)v12, a3, a4);
        v34 = v12;
        if ((char)v34 == 5)
        {
            v0 = a1;
            v1 = a2;
            v2 = 0;
            serde_json::de::from_trait(&(char)v12, &v0, a2);
            v25.inspect_err(&(char)v12);
            v34 = v26;
            if (v25 == 4)
            {
                *((char *)&a0[8]) = 4;
                *((unsigned long long *)&a0[16]) = v4;
            }
            else
            {
                memcpy(&v11, &v32, 16);
                v10 = v31;
                memcpy(&v8, &v30, 16);
                v7 = v29;
                v6 = v28;
                v5 = v27;
                v3 = v25;
                v4 = v34;
                if (!(char)*((long long *)&v16).equal(*((long long *)&v17), v9, (long long)v10))
                {
                    g_7c4640.add(1);
                    v25.to_vec("The id from the path does not match the id from the body!", 57);
                    v18 = (long long)v27;
                    *((int128_t *)&v15) = *((int128_t *)&v25);
                    *((unsigned short *)&a0[8]) = 769;
                    v36 = (long long)(&v15)[8];
                    v37 = v18;
                    *((int128_t *)&a0[10]) = *((int128_t *)&v12);
                    *((unsigned long long *)&a0[24]) = v36;
                    *((unsigned long long *)&a0[32]) = v37;
                    *((unsigned long long *)a0) = 1;
                    return (unsigned long long)core::ptr::drop_in_place<vmm::vmm_config::drive::BlockDeviceUpdateConfig>(&v3);
                }
                v24 = v11;
                memcpy(&v23, &v10, 16);
                memcpy(&v22, &v8, 16);
                memcpy(&v21, &v7, 16);
                v20 = v6;
                v19 = v5;
                *((int128_t *)&v16) = *((int128_t *)&v3);
                v12 = 33;
                v35 = a0 + 8.new_sync(&(char)v12);
                *((unsigned long long *)a0) = 0;
                return v35;
            }
        }
        else
        {
            v38 = *((int *)&v13);
            *((unsigned int *)&a0[12]) = v14;
            *((unsigned int *)&a0[9]) = v38;
            v39 = (long long)v15;
            v40 = *((int128_t *)&v17);
            *((char *)&a0[8]) = v34;
            *((unsigned long long *)&a0[16]) = v39;
            a0[24] = v40;
        }
    }
    else
    {
        v34 = (unsigned long long)g_7c4640.add(1);
        *((char *)&a0[8]) = 0;
    }
    *((unsigned long long *)a0) = 1;
    return v34;
}
