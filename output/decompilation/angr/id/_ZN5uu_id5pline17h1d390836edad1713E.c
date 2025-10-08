void uu_id::pline(char a0, unsigned long a1)
{
    void* v0;  // [bp-0x1a8]
    unsigned long long v1;  // [bp-0x1a0]
    int v2;  // [bp-0x1a0]
    void* v3;  // [bp-0x198]
    void* v4;  // [bp-0x190]
    int v5;  // [bp-0x188]
    unsigned long long v6;  // [bp-0x188]
    void* v7;  // [bp-0x180]
    void* v8;  // [bp-0x178]
    int v9;  // [bp-0x170], Other Possible Types: unsigned long long
    void* v10;  // [bp-0x168]
    void* v11;  // [bp-0x160]
    int v12;  // [bp-0x158], Other Possible Types: unsigned long long
    void* v13;  // [bp-0x150]
    unsigned long long v14;  // [bp-0x148]
    unsigned long long v15;  // [bp-0x140]
    char *v16;  // [bp-0x138]
    unsigned long long v17;  // [bp-0x130]
    void* v18;  // [bp-0x128]
    char v19;  // [bp-0x118], Other Possible Types: unsigned long long
    char v20;  // [bp-0x110]
    void* v21;  // [bp-0x100]
    int v22;  // [bp-0xf8]
    void* v23;  // [bp-0xe8]
    int v24;  // [bp-0xe0]
    void* v25;  // [bp-0xd0]
    int v26;  // [bp-0xc8]
    void* v27;  // [bp-0xb8]
    int v28;  // [bp-0xb0]
    char v29;  // [bp-0xa0]
    char v30;  // [bp-0x9c]
    char *v31;  // [bp-0x98], Other Possible Types: char
    unsigned long long v32;  // [bp-0x90]
    char *v33;  // [bp-0x88]
    unsigned long long v34;  // [bp-0x80]
    char *v35;  // [bp-0x78]
    unsigned long long v36;  // [bp-0x70]
    char *v37;  // [bp-0x68]
    unsigned long long v38;  // [bp-0x60]
    char *v39;  // [bp-0x58]
    unsigned long long v40;  // [bp-0x50]
    char *v41;  // [bp-0x48]
    unsigned long long v42;  // [bp-0x40]
    char *v43;  // [bp-0x38]
    unsigned long long v44;  // [bp-0x30]
    void* v46;  // rdx
    void* v47;  // rdx

    if (!(a0 & 1))
        a1 = uucore::features::process::getuid();
    v31.locate(a1);
    v19.unwrap(&v31);
    if ((char)(((0 ^ v27) & (0 ^ -(v27))) >> 63))
    {
        v1 = 1;
        v3 = 0;
        v0 = 0;
        if (v21 == 0x8000000000000000)
            goto LABEL_45dc29;
LABEL_45dbdd:
        v5 = v22;
        v4 = v21;
        v46 = v25;
        if (v25 == 0x8000000000000000)
            goto LABEL_45dc4f;
LABEL_45dbfc:
        v9 = v26;
    }
    else
    {
        v2 = v28;
        v0 = v27;
        if (v21 != 0x8000000000000000)
            goto LABEL_45dbdd;
LABEL_45dc29:
        v6 = 1;
        v7 = 0;
        v4 = 0;
        v46 = v25;
        if (v25 != 0x8000000000000000)
            goto LABEL_45dbfc;
LABEL_45dc4f:
        v9 = 1;
        v10 = 0;
        v46 = 0;
    }
    v8 = v46;
    v47 = v23;
    if (v23 == 0x8000000000000000)
    {
        v12 = 1;
        v13 = 0;
        v47 = 0;
    }
    else
    {
        v12 = v24;
    }
    v11 = v47;
    v31 = &v19;
    v32 = <alloc::string::String as core::fmt::Display>::fmt;
    v33 = &v0;
    v34 = <alloc::string::String as core::fmt::Display>::fmt;
    v35 = &v29;
    v36 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
    v37 = &v30;
    v38 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
    v39 = &v4;
    v40 = <alloc::string::String as core::fmt::Display>::fmt;
    v41 = &v8;
    v42 = <alloc::string::String as core::fmt::Display>::fmt;
    v43 = &v11;
    v44 = <alloc::string::String as core::fmt::Display>::fmt;
    v14 = &g_4e8e30;
    v15 = 8;
    v18 = 0;
    v16 = &v31;
    v17 = 7;
    std::io::stdio::_print(&v14);
    core::ptr::drop_in_place<alloc::string::String>(v11, v12);
    core::ptr::drop_in_place<alloc::string::String>(v8, v9);
    core::ptr::drop_in_place<alloc::string::String>(v4, v6);
    core::ptr::drop_in_place<alloc::string::String>(v0, v1);
    core::ptr::drop_in_place<alloc::string::String>(v19, *((long long *)&v20));
    return;
}
