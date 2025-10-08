long long uu_df::Options::from(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0x1bb]
    char v1;  // [bp-0x1ba]
    char v2;  // [bp-0x1b9]
    int v3;  // [bp-0x1b8], Other Possible Types: unsigned long
    unsigned long long v4;  // [bp-0x1b8]
    unsigned long long v5;  // [bp-0x1b0]
    unsigned long long v6;  // [bp-0x1a8]
    unsigned long long v8;  // [bp-0x198]
    unsigned long long v9;  // [bp-0x190]
    unsigned long long v10;  // [bp-0x188]
    unsigned long long v11;  // [bp-0x180]
    int v12;  // [bp-0x178], Other Possible Types: char
    unsigned long long v13;  // [bp-0x168]
    int v14;  // [bp-0x158], Other Possible Types: char
    unsigned long long v15;  // [bp-0x148]
    char v16;  // [bp-0x140], Other Possible Types: unsigned long
    unsigned long long v17;  // [bp-0x138]
    unsigned long long v18;  // [bp-0x130]
    int v19;  // [bp-0x128], Other Possible Types: char
    unsigned long long v20;  // [bp-0x118]
    char v21;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v22;  // [bp-0x100]
    char v23;  // [bp-0xf8]
    unsigned long long v24;  // [bp-0xf0]
    char v25;  // [bp-0xe8]
    char v26;  // [bp-0xe0]
    char v27;  // [bp-0xc8]
    char v28;  // [bp-0x88]
    char v30;  // r12b
    char v31;  // r13b
    char v32;  // al

    v14.try_get_many(a1, "typeCyan    TYPE\"`$\\EADVlofs", 4);
    v27.unwrap("typeCyan    TYPE\"`$\\EADVlofs", 4, &v14);
    if (*((long long *)&v27))
        (char)v8.collect(&v27);
    else
        v8 = 0x8000000000000000;
    v14.try_get_many(a1, "exclude-typesrc/uu/df/src/df.rs", 12);
    v28.unwrap("exclude-typesrc/uu/df/src/df.rs", 12, &v14);
    if (*((long long *)&v28))
    {
        v14.collect(&v28);
        v6 = v15;
        v3 = v14;
        if (v8 != 0x8000000000000000 && v3 != 0x8000000000000000)
        {
            v14.get_intersected_types(v9, v10, v5, v6);
            if ((long long)v14 != 0x8000000000000000)
            {
                *((unsigned long long *)&a0[32]) = v15;
                a0[16] = v14;
                *((unsigned long long *)&a0[8]) = 4;
                *((long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&(char)v4);
                core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&(char)v8);
                return a0;
            }
            core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&v14);
        }
    }
    else
    {
        v4 = 0x8000000000000000;
    }
    v2 = a1.get_flag("localno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 5);
    v1 = a1.get_flag("allblocksizehuman-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 3);
    v0 = a1.get_flag("synctypeCyan    TYPE\"`$\\EADVlofs", 4);
    uu_df::blocks::read_block_size(&v25, a1);
    if (*((int *)&v25) == 4)
    {
        v11 = *((long long *)&v26);
    }
    else
    {
        uu_df::Options::from::{{closure}}(&v21, a1, &v25);
        memcpy(&v12, &v23, 16);
        if (v21 != 5)
        {
            a0[24] = v12;
            *((unsigned long long *)&a0[8]) = v21;
            *((unsigned long long *)&a0[16]) = v22;
            *((long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&(char)v4);
            core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&(char)v8);
            return a0;
        }
        v11 = v22;
    }
    v30 = 1;
    if (!(char)a1.get_flag("human-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 21) && !(char)a1.get_flag("human-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 22))
    {
        v30 = 2;
        if (!(char)a1.get_flag("portabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 11))
            a1.value_source("outputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 6);
    }
    v31 = 1;
    if (!(char)a1.get_flag("human-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 21))
        v31 = ((char)a1.get_flag("human-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 22) ^ 1) * 2;
    v32 = a1.get_flag("total%", 5);
    v21.from_matches(a1);
    memcpy(&v12, &v22, 16);
    v13 = v24;
    if ((int)v21 != 1)
    {
        v15 = v13;
        v14 = v12;
        v18 = v10;
        memcpy(&v16, &(char)v8, 16);
        v20 = v6;
        memcpy(&v19, &v4, 16);
        *(a0) = v12;
        *((unsigned long long *)&a0[64]) = v6;
        a0[48] = v19;
        *((unsigned long long *)&a0[16]) = v15;
        *((unsigned long *)&a0[24]) = v16;
        *((unsigned long long *)&a0[32]) = v17;
        *((unsigned long long *)&a0[40]) = v18;
        *((unsigned long long *)&a0[72]) = v11;
        *((char *)&a0[80]) = v2;
        *((char *)&a0[81]) = v1;
        *((char *)&a0[82]) = v0;
        *((char *)&a0[83]) = v32;
        *((char *)&a0[84]) = v31;
        *((char *)&a0[85]) = v30;
        return a0;
    }
    *((unsigned long long *)&a0[32]) = v13;
    a0[16] = v12;
    *((unsigned long long *)&a0[8]) = 3;
    *((long long *)a0) = 0x8000000000000000;
    core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&(char)v4);
    core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&(char)v8);
    return a0;
}
