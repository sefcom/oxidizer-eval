long long uu_df::filesystem::Filesystem::new(unsigned long long *a0, struct_1 *a1, struct_0 *a2)
{
    char v0;  // [bp-0x1e8]
    unsigned long long v1;  // [bp-0x1d8]
    char v2;  // [bp-0x1d0]
    unsigned long long v3;  // [bp-0x1c0]
    char v4;  // [bp-0x1b8]
    int v5;  // [bp-0x1a8]
    int v6;  // [bp-0x198]
    unsigned long long v7;  // [bp-0x188]
    char v8;  // [bp-0x180]
    int v9;  // [bp-0x178]
    int v10;  // [bp-0x168]
    int v11;  // [bp-0x158]
    char v12;  // [bp-0x148]
    int v13;  // [bp-0x138]
    int v14;  // [bp-0x128]
    int v15;  // [bp-0x118]
    char v16;  // [bp-0x108]
    int v17;  // [bp-0xe8]
    unsigned long v18;  // [bp-0xd8]
    char v19;  // [bp-0xd0]
    int v20;  // [bp-0xc0]
    int v21;  // [bp-0xb0]
    unsigned long long v22;  // [bp-0xa0]
    int v23;  // [bp-0x98]
    int v24;  // [bp-0x88]
    int v25;  // [bp-0x78]
    char v26;  // [bp-0x68]
    int v27;  // [bp-0x58]
    int v28;  // [bp-0x48]
    int v29;  // [bp-0x38]
    unsigned long long v30;  // [bp-0x28]
    unsigned long v32;  // rsi
    unsigned long v33;  // rax
    unsigned long v34;  // rax

    v32 = &a1->padding_0[96];
    v33 = &a1->padding_0[24];
    if (!a1->field_70)
        v34 = v33;
    else
        v34 = v32;
    v2.clone(v34);
    v1 = v3;
    memcpy(&v0, &v2, 16);
    uucore::features::fsext::statfs(&v8, &v0);
    if (!(v8 & 1))
    {
        v30 = *((long long *)&v16);
        v29 = v15;
        v28 = v14;
        v27 = v13;
        memcpy(&v26, &v12, 16);
        v25 = v11;
        v24 = v10;
        v23 = v9;
        v4.new(&v23);
        v18 = a2->field_10;
        *((uint128_t *)&v17) = a2->field_0;
        memcpy(&v8, a1, 152);
        memcpy(&v19, &v4, 16);
        v20 = v5;
        v21 = v6;
        v22 = v7;
        return memcpy(a0, &v8, 232);
    }
    core::ptr::drop_in_place<core::result::Result<libc::unix::linux_like::linux::gnu::b64::x86_64::statfs,alloc::string::String>>(&v8);
    *(a0) = 0x8000000000000000;
    ::0x4be6b0::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a2);
    return (unsigned long long)::0x4be600::core::ptr::drop_in_place<uucore::features::fsext::MountInfo>(a1);
}
