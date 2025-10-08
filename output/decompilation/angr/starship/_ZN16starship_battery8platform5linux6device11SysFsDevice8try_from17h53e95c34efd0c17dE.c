long long starship_battery::platform::linux::device::SysFsDevice::try_from(void* a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x120]
    unsigned long long v1;  // [bp-0x118]
    unsigned long long v2;  // [bp-0x110]
    unsigned long long v3;  // [bp-0x108]
    unsigned long long v4;  // [bp-0x100]
    unsigned long long v5;  // [bp-0xf8]
    char v6;  // [bp-0xf0], Other Possible Types: unsigned long
    char v7;  // [bp-0xe8], Other Possible Types: unsigned long long
    char v8;  // [bp-0xe0], Other Possible Types: unsigned int
    char v9;  // [bp-0xd8], Other Possible Types: unsigned int
    unsigned int v10;  // [bp-0xd0]
    unsigned int v11;  // [bp-0xc8]
    unsigned int v12;  // [bp-0xc0]
    unsigned int v13;  // [bp-0xb8]
    unsigned int v14;  // [bp-0xb0]
    char v15;  // [bp-0xa8]
    unsigned long long v16;  // [bp-0xa0]
    unsigned long long v17;  // [bp-0x98]
    unsigned long long v18;  // [bp-0x90]
    char v19;  // [bp-0x88], Other Possible Types: unsigned int
    char v20;  // [bp-0x84]
    char v21;  // [bp-0x80]
    char v22;  // [bp-0x74]
    char v23;  // [bp-0x70]
    unsigned int v24;  // [bp-0x64]
    unsigned long v25;  // [bp-0x60]
    int v26;  // [bp-0x58]
    int v27;  // [bp-0x54]
    int v28;  // [bp-0x48]
    int v29;  // [bp-0x44]
    unsigned int v30;  // [bp-0x38]
    unsigned long v32;  // r13
    unsigned long long v33;  // rbp
    char v34;  // dl
    int v35;  // xmm0
    int v36;  // xmm1
    int v37;  // xmm0
    int v38;  // xmm1
    unsigned long long v39;  // r15

    v32 = a1->field_0[1];
    v33 = *((long long *)&a1->field_8);
    v6.manufacturer(v32, v33);
    if (v6 == 9223372036854775810)
    {
        v18 = *((long long *)&v9);
        v5 = *((long long *)&v7);
        v0 = *((long long *)&v8);
        v6.model(v32, v33);
        if (v6 == 9223372036854775810)
        {
            v17 = *((long long *)&v9);
            v3 = *((long long *)&v7);
            v4 = *((long long *)&v8);
            v6.serial_number(v32, v33);
            if (v6 == 9223372036854775810)
            {
                v16 = *((long long *)&v9);
                v1 = *((long long *)&v7);
                v2 = *((long long *)&v8);
                v6.technology(v32, v33);
                v34 = v7;
                if (v6 == 9223372036854775810)
                {
                    v6 = v32;
                    v7 = v33;
                    v8 = 0;
                    v9 = 0;
                    v10 = 0;
                    v11 = 0;
                    v12 = 0;
                    v13 = 0;
                    v14 = 0;
                    v15 = 5;
                    v19.collect(&v6);
                    if (v19 != 2)
                    {
                        v30 = v24;
                        v37 = *((int128_t *)&v20);
                        v38 = *((int128_t *)&v22);
                        v28 = v38;
                        v26 = v37;
                        *((unsigned int *)&a0[132]) = v24;
                        a0[116] = v38;
                        a0[100] = v37;
                        *((long long *)&a0[16]) = *((long long *)&a1->field_8);
                        *((unsigned long long [2])a0) = a1->field_0;
                        *((unsigned long long *)&a0[24]) = v5;
                        *((unsigned long long *)&a0[32]) = v0;
                        *((unsigned long long *)&a0[40]) = v18;
                        *((unsigned long long *)&a0[48]) = v3;
                        *((unsigned long long *)&a0[56]) = v4;
                        *((unsigned long long *)&a0[64]) = v17;
                        *((unsigned long long *)&a0[72]) = v1;
                        *((unsigned long long *)&a0[80]) = v2;
                        *((unsigned long long *)&a0[88]) = v16;
                        *((unsigned int *)&a0[96]) = v19;
                        *((unsigned long *)&a0[136]) = v25;
                        *((char *)&a0[144]) = v34;
                        return a0;
                    }
                    v35 = *((int128_t *)&v21);
                    v36 = *((int128_t *)&v23);
                    v29 = v36;
                    v27 = v35;
                    a0[24] = v36;
                    a0[8] = v35;
                }
                else
                {
                    *((long long *)&a0[32]) = *((long long *)&v9);
                    *((int128_t *)&a0[17]) = *((int128_t *)&(&v7)[1]);
                    *((unsigned long *)&a0[8]) = v6;
                    *((char *)&a0[16]) = v34;
                }
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v1, v2);
            }
            else
            {
                *((unsigned long *)&a0[8]) = v6;
                *((unsigned long long *)&a0[16]) = v1;
                *((unsigned long long *)&a0[24]) = v2;
                *((unsigned long long *)&a0[32]) = v16;
                *((unsigned long long *)a0) = 0x8000000000000000;
            }
            v39 = v0;
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v3, v4);
        }
        else
        {
            *((unsigned long *)&a0[8]) = v6;
            *((unsigned long long *)&a0[16]) = v3;
            *((unsigned long long *)&a0[24]) = v4;
            *((unsigned long long *)&a0[32]) = v17;
            *((unsigned long long *)a0) = 0x8000000000000000;
            v39 = v0;
        }
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v5, v39);
    }
    else
    {
        *((unsigned long *)&a0[8]) = v6;
        *((unsigned long long *)&a0[16]) = v5;
        *((unsigned long long *)&a0[24]) = v0;
        *((unsigned long long *)&a0[32]) = v18;
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(a1);
    return a0;
}
