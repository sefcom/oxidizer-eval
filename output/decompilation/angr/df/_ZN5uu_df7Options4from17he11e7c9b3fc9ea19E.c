long long uu_df::Options::from(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x19d]
    unsigned int v1;  // [bp-0x19c]
    int v2;  // [bp-0x198], Other Possible Types: unsigned long
    unsigned long long v3;  // [bp-0x198]
    unsigned long long v4;  // [bp-0x190]
    unsigned long long v5;  // [bp-0x188]
    char v6;  // [bp-0x178]
    unsigned long long v7;  // [bp-0x170]
    char v8;  // [bp-0x168], Other Possible Types: unsigned long long
    int v9;  // [bp-0x158], Other Possible Types: char
    int v10;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x140]
    int v12;  // [bp-0x138]
    unsigned long long v14;  // [bp-0x130]
    int v15;  // [bp-0x128]
    unsigned long long v16;  // [bp-0x118]
    unsigned long long v17;  // [bp-0x108]
    char v18;  // [bp-0x100]
    unsigned long long v19;  // [bp-0x100]
    unsigned long long v20;  // [bp-0xf8]
    unsigned long long v21;  // [bp-0xf0]
    char v22;  // [bp-0xe8]
    unsigned long long v23;  // [bp-0xe8]
    unsigned long long v24;  // [bp-0xe0]
    unsigned long long v25;  // [bp-0xd8]
    unsigned long long v26;  // [bp-0xd0]
    int v27;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v28;  // [bp-0xc0]
    int v29;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v30;  // [bp-0xb0]
    int v31;  // [bp-0xa8]
    int v32;  // [bp-0x98]
    char v33;  // [bp-0x88]
    unsigned long long v34;  // [bp-0x78]
    int v35;  // [bp-0x68], Other Possible Types: char
    unsigned long long v36;  // [bp-0x58]
    int v37;  // [bp-0x48], Other Possible Types: char
    unsigned long long v38;  // [bp-0x38]
    int v40;  // xmm0
    int v41;  // xmm1
    int v42;  // xmm0
    int v43;  // xmm1
    char v44;  // al
    char v45;  // al
    char v46;  // al
    int v47;  // xmm0
    unsigned int v48;  // ecx
    char v49;  // r13b
    char v50;  // al
    unsigned long long v51;  // rax
    char *v52;  // rdi

    v9.try_get_many(a1, "typeCyan    TYPE\"`$\\EADVlofs", 4);
    (char)v27.unwrap("typeCyan    TYPE\"`$\\EADVlofs", 4, &v9);
    if (*((long long *)&v27))
    {
        v40 = *((int128_t *)&v27);
        v41 = *((int128_t *)&v29);
        v15 = v32;
        v12 = v31;
        v10 = v41;
        v9 = v40;
        v18.from_iter(&v9, &g_59caa0);
    }
    else
    {
        v19 = 0x8000000000000000;
    }
    v9.try_get_many(a1, "exclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 12);
    (char)v27.unwrap("exclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 12, &v9);
    if (*((long long *)&v27))
    {
        v42 = *((int128_t *)&v27);
        v43 = *((int128_t *)&v29);
        v15 = v32;
        v12 = v31;
        v10 = v43;
        v9 = v42;
        (char)v23.from_iter(&v9, &g_59caa0);
        *((int128_t *)&v2) = *((int128_t *)&v22);
        v5 = v25;
        if (v19 != 0x8000000000000000 && v2 != 0x8000000000000000)
        {
            v9.get_intersected_types(v20, v21, v4, v5);
            if ((long long)v9 != 0x8000000000000000)
            {
                a0->field_18[1] = v10;
                *((void*)&a0->field_10) = v9;
                *((unsigned long long *)&a0->padding_1[7]) = 4;
                *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
                core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&(char)v2);
                v52 = &v18;
                core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(v52);
                return a0;
            }
            core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&v9);
        }
    }
    else
    {
        v3 = 0x8000000000000000;
    }
    v44 = a1.get_flag("localno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 5);
    v45 = a1.get_flag("allblocksizetotalhuman-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 3);
    v46 = a1.get_flag("synctypeCyan    TYPE\"`$\\EADVlofs", 4);
    uu_df::blocks::read_block_size(&v6, a1);
    if (*((int *)&v6) == 4)
    {
        v17 = v7;
    }
    else
    {
        v47 = *((int128_t *)&v6);
        *((int128_t *)&v29) = *((int128_t *)&v8);
        v27 = v47;
        uu_df::Options::from::{{closure}}(&(char)v23, a1, &(char)v27);
        memcpy(&v37, &v25, 16);
        if (v23 != 5)
        {
            *((void*)&a0->field_18[0]) = v37;
            *((unsigned long long *)&a0->padding_1[7]) = v23;
            *((unsigned long long *)&a0->field_10) = v24;
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
            core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&(char)v2);
            core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(v52);
            return a0;
        }
        v17 = v24;
    }
    v1 = v48 & 0xffffff00 | 1;
    if (!(char)a1.get_flag("human-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 21) && !(char)a1.get_flag("human-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 22))
    {
        v1 = v48 & 0xffffff00 | 2;
        if (!(char)a1.get_flag("portabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 11))
            v1 = ((char)a1.value_source("outputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 6) == 2) * 3;
    }
    v49 = 1;
    if (!(char)a1.get_flag("human-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 21))
        v49 = ((char)a1.get_flag("human-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 22) ^ 1) * 2;
    v0 = v46;
    v34 = v21;
    memcpy(&v33, &v19, 16);
    v36 = v5;
    memcpy(&v35, &(char)v2, 16);
    v50 = a1.get_flag("totalhuman-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 5);
    (char)v23.from_matches(a1);
    if (((char)v23 & 1))
    {
        (char)v27.call_once(&v24);
        v51 = (long long)v27;
        memcpy(&v6, &v28, 16);
        v8 = v30;
        if (v51 != 5)
        {
            v38 = v8;
            memcpy(&v37, &v6, 16);
            a0->field_18[1] = v8;
            *((void*)&a0->field_10) = v37;
            *((unsigned long long *)&a0->padding_1[7]) = v51;
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
            core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&v35);
            core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&v33);
            return a0;
        }
    }
    else
    {
        v8 = v26;
        memcpy(&v6, &v24, 16);
    }
    v38 = v8;
    memcpy(&v37, &v6, 16);
    v9 = v37;
    v10 = v38;
    memcpy(&v11, &v33, 16);
    v14 = v34;
    v15 = v35;
    v16 = v36;
    a0->field_40 = v36;
    *((void*)&a0->field_30) = v35;
    a0->field_18[1] = (long long)v12;
    a0->field_28 = v14;
    *((unsigned long long *)&a0->field_10) = v10;
    a0->field_18[0] = v11;
    *((void*)&a0->field_0) = v37;
    a0->field_48 = v17;
    a0->field_50 = v44;
    a0->field_51 = v45;
    a0->field_52 = v0;
    a0->field_53 = v50;
    a0->field_54 = v49;
    a0->field_55 = v1;
    return a0;
}
