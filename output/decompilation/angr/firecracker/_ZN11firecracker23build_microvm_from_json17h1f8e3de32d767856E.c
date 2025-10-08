void firecracker::build_microvm_from_json(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3[3], unsigned long long a4, char a5, char a6, unsigned long long a7, unsigned long long a8, unsigned long long a9)
{
    int v0;  // [bp-0x398], Other Possible Types: char
    int v1;  // [bp-0x391]
    char v2;  // [bp-0x388]
    int v3;  // [bp-0x381]
    int v4;  // [bp-0x378]
    int v5;  // [bp-0x371]
    unsigned long v6;  // [bp-0x369]
    unsigned long long v7;  // [bp-0x361]
    unsigned long long v8;  // [bp-0x348]
    unsigned long long v9;  // [bp-0x340]
    unsigned long long v10;  // [bp-0x338]
    unsigned long long v11;  // [bp-0x330]
    unsigned long long v12;  // [bp-0x328]
    char v13;  // [bp-0x320]
    unsigned int v14;  // [bp-0x31c]
    char v15;  // [bp-0x318], Other Possible Types: unsigned long long
    char v16;  // [bp-0x317]
    unsigned long long v17;  // [bp-0x310]
    int v18;  // [bp-0x308], Other Possible Types: char
    char v19;  // [bp-0x307]
    char v20;  // [bp-0x300]
    char v21;  // [bp-0x2f8]
    char v22;  // [bp-0x2f7]
    int v23;  // [bp-0x2f0]
    char v24;  // [bp-0x2e8]
    char v25;  // [bp-0x2d8]
    unsigned long long v26;  // [bp-0x1a8]
    char v27;  // [bp-0x1a0]
    char v28;  // [bp-0x19f]
    char v29;  // [bp-0x18f]
    int v30;  // [bp-0x17f]
    char v31;  // [bp-0x160]
    char v32;  // [bp-0x38]
    char v33;  // [bp-0x37]
    unsigned long long v34;  // r12
    int v35;  // xmm0
    int v36;  // xmm1
    char v37;  // r13b
    char v38;  // al
    unsigned long long v39;  // r12
    unsigned int v40;  // ecx
    unsigned long long v41;  // rcx

    v13.from_json(a3[1], a3[2], a4, a7, a8, a9);
    v34 = *((long long *)&v13);
    if ((char)(((0 ^ v34) & (0 ^ -(v34))) >> 63))
    {
        v7 = *((long long *)&v24);
        v35 = *((int128_t *)&v15);
        v36 = *((int128_t *)&v18);
        *((int128_t *)&v5) = *((int128_t *)&v21);
        v3 = v36;
        v1 = v35;
        *((unsigned long *)&a0[56]) = v6;
        *((unsigned long long *)&a0[64]) = v7;
        *((int128_t *)&a0[41]) = (int128_t)(&v3)[9];
        *((int128_t *)&a0[25]) = (int128_t)(&v1)[9];
        *((int128_t *)&a0[9]) = *((int128_t *)&v0);
        *((char *)&a0[8]) = 27;
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v37 = v15;
        *((int128_t *)&v0) = *((int128_t *)&v16);
        memcpy(&v2, &v19, 16);
        *((int128_t *)&v4) = *((int128_t *)&v22);
        memcpy(&(char)v4, &v22, 16);
        memcpy(&v31, &v25, 304);
        memcpy(&v28, &v0, 16);
        memcpy(&v29, &v2, 16);
        *((int128_t *)&v30) = (int128_t)v4;
        memcpy(&v30, &v4, 16);
        v26 = v34;
        v27 = v37;
        v32 = a5;
        v33 = a6;
        vmm::builder::build_and_boot_microvm(&v13, a4, &v26, a2, a1);
        v38 = v13;
        if (v38 == 27)
        {
            v39 = *((long long *)&v15);
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) >= 3)
            {
                *((char **)&v13) = &g_7a4138;
                v15 = 1;
                v17 = 8;
                *((uint128_t *)&v18) = 0;
                v8 = "firecracker";
                v9 = 11;
                v10 = "firecracker";
                v11 = 11;
                v12 = log::__private_api::loc(&g_7a4148);
                log::__private_api::log_impl(&v13, 3, &v8);
            }
            memcpy(a0, &v26, 376);
            *((unsigned long long *)&a0[376]) = v39;
        }
        else
        {
            v40 = *((int *)&(&v13)[1]);
            *((unsigned int *)&a0[12]) = v14;
            *((unsigned int *)&a0[9]) = v40;
            v41 = *((long long *)&v15);
            *((int128_t *)&a0[40]) = *((int128_t *)&v20);
            *((int128_t *)&a0[56]) = (int128_t)v23;
            *((int128_t *)&a0[24]) = *((int128_t *)&v17);
            *((char *)&a0[8]) = v38;
            *((unsigned long long *)&a0[16]) = v41;
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<vmm::resources::VmResources>(&v26);
        }
    }
    core::ptr::drop_in_place<vmm::vmm_config::instance_info::InstanceInfo>(a4);
    core::ptr::drop_in_place<alloc::string::String>(a3);
    return;
}
