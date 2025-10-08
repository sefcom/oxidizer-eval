long long uu_chown::parse_gid_uid_and_filter(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0[3];  // [bp-0x268]
    unsigned int v1;  // [bp-0x260]
    unsigned int v2;  // [bp-0x25c]
    unsigned long long v4;  // [bp-0x258]
    unsigned long long v5[3];  // [bp-0x250]
    unsigned long long v6;  // [bp-0x248]
    char v7;  // [bp-0x240]
    unsigned long long v8;  // [bp-0x240]
    unsigned long long v9[3];  // [bp-0x238]
    unsigned long long v10;  // [bp-0x230]
    char v11;  // [bp-0x228], Other Possible Types: unsigned long
    char v12;  // [bp-0x224], Other Possible Types: unsigned int
    unsigned long long v13[3];  // [bp-0x220], Other Possible Types: char, unsigned long long
    char *v14;  // [bp-0x218], Other Possible Types: char
    unsigned long long v15;  // [bp-0x218]
    unsigned long long v16;  // [bp-0x210]
    void* v17;  // [bp-0x208]
    char v18;  // [bp-0x178]
    unsigned long long v19[3];  // [bp-0x170]
    unsigned long long v20;  // [bp-0x168]
    char *v21;  // [bp-0x160], Other Possible Types: char
    char v22;  // [bp-0x158], Other Possible Types: unsigned long long
    char *v23;  // [bp-0x150]
    unsigned long long v24;  // [bp-0x148]
    unsigned int v25;  // [bp-0x124]
    char v26;  // [bp-0x120]
    char v27;  // [bp-0xb0], Other Possible Types: unsigned long
    char v28;  // [bp-0xa8]
    unsigned long long v30[3];  // rax
    unsigned long long v31[3];  // rcx
    unsigned int v32;  // ebp
    unsigned int v33;  // ebp
    unsigned long long v34[3];  // rax
    unsigned long long v35[3];  // r14
    unsigned int v36;  // r13d
    unsigned long long v37[3];  // rdx
    unsigned int v38;  // eax
    unsigned int v39;  // ecx
    unsigned long long v40;  // rax
    unsigned long long v41;  // r12

    v11.try_get_one(a1, "fromkindAuto/", 4);
    v30 = "fromkindAuto/".unwrap(4, &v11);
    if (v30)
    {
        uu_chown::parse_spec(&v11, v30[1], v30[2], 58);
        if (*((int *)&v11) == 1)
        {
            *((int128_t *)&a0->field_8) = *((int128_t *)&v13);
            a0->field_0 = 0x8000000000000000;
            return a0;
        }
        v31 = v13;
        v30 = *((int *)&v14);
        v32 = v31 >> 32;
        v2 = (unsigned int)v30;
        if ((v12 & 1))
        {
            v0[0] = v31;
            v33 = (v32 & 1) * 2 + 1;
        }
        else
        {
            v33 = (v32 & 1) * 2;
LABEL_4608f5:
            v0[0] = v30;
        }
        v11.try_get_one(a1, "referenceOWNERsrc/uu/chown/src/chown.rsfailed to get attributes of ", 9);
        v34 = "referenceOWNERsrc/uu/chown/src/chown.rsfailed to get attributes of ".unwrap(9, &v11);
        if (v34)
        {
            std::fs::metadata(&v11, v34);
            v21.map_err_context(&v11, v34[1], v34[2]);
            if (*((int *)&v21) == 2)
            {
                *((int128_t *)&a0->field_8) = *((int128_t *)&v22);
                a0->field_0 = 0x8000000000000000;
                return a0;
            }
            v35 = v25;
            v36 = *((int *)&v26);
            v27.locate(v35 & 4294967295);
            if (v27 == 0x8000000000000000)
            {
                v37 = *((long long *)&v28);
LABEL_460a8d:
                uu_chown::parse_gid_uid_and_filter::{{closure}}(&(char)v4, v35 & 4294967295, v37);
            }
            else
            {
                uucore::features::entries::uid2usr::{{closure}}(&v11, &v27);
                v37 = v13;
                if (*((long long *)&v11) == 0x8000000000000000)
                    goto LABEL_460a8d;
                v4 = *((long long *)&v11);
                v5[0] = v37;
                v6 = v15;
            }
            v11.locate(v36);
            if (*((long long *)&v11) == 0x8000000000000000)
            {
                uu_chown::parse_gid_uid_and_filter::{{closure}}(&v7, v36, v13);
            }
            else
            {
                v8 = *((long long *)&v11);
                v9[0] = v13;
                v10 = v15;
            }
            v1 = v36;
            v21 = &(char)v4;
            v22 = <alloc::string::String as core::fmt::Display>::fmt;
            v23 = &v7;
            v24 = <alloc::string::String as core::fmt::Display>::fmt;
            v11 = &g_4f5ec0;
            v13 = 2;
            v17 = 0;
            v14 = &v21;
            v16 = 2;
            v18.map_or_else(&v11);
            core::ptr::drop_in_place<alloc::string::String>(v8, v9);
            core::ptr::drop_in_place<alloc::string::String>(v4, v5);
            v38 = 1;
            v39 = 1;
        }
        else
        {
            v11.try_get_one(a1, "OWNERsrc/uu/chown/src/chown.rsfailed to get attributes of ", 5);
            v40 = "OWNERsrc/uu/chown/src/chown.rsfailed to get attributes of ".unwrap(5, &v11);
            if (!v40)
                core::option::unwrap_failed(&g_4f5ee0); /* do not return */
            v11.clone(v40);
            v41 = *((long long *)&v11);
            uu_chown::parse_spec(&v11, v13, v15, 58);
            if ((v11 & 1))
            {
                *((int128_t *)&a0->field_8) = *((int128_t *)&v13);
                a0->field_0 = 0x8000000000000000;
                core::ptr::drop_in_place<alloc::string::String>(v41, v13);
                return a0;
            }
            v39 = v12;
            v35 = v13;
            v1 = v15;
            v38 = v35 >> 32;
            v19[0] = v13;
            v20 = v15;
        }
        a0->field_0 = v41;
        a0->field_8 = v19;
        a0->field_10 = v20;
        a0->field_18 = v38;
        a0->field_1c = v1;
        a0->field_20 = v39;
        a0->field_24 = (unsigned int)v35;
        a0->field_28 = v33;
        a0->field_2c = (unsigned int)v0;
        a0->field_30 = v2;
        return a0;
    }
    v33 = 0;
    goto LABEL_4608f5;
}
