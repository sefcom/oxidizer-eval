long long uu_df::filesystem::Filesystem::new(unsigned long long *a0, struct_1 *a1, struct_0 *a2)
{
    char v0;  // [bp-0x1e0]
    int v1;  // [bp-0x1d0]
    int v2;  // [bp-0x1c0]
    unsigned long long v3;  // [bp-0x1b0]
    char v4;  // [bp-0x1a8]
    char v5;  // [bp-0x190]
    int v6;  // [bp-0x188]
    int v7;  // [bp-0x178]
    int v8;  // [bp-0x168]
    char v9;  // [bp-0x158]
    int v10;  // [bp-0x148]
    char v11;  // [bp-0x138]
    int v12;  // [bp-0x128]
    char v13;  // [bp-0x118]
    int v14;  // [bp-0xf8]
    unsigned long v15;  // [bp-0xe8]
    char v16;  // [bp-0xe0]
    int v17;  // [bp-0xd0]
    int v18;  // [bp-0xc0]
    unsigned long long v19;  // [bp-0xb0]
    int v20;  // [bp-0xa8]
    int v21;  // [bp-0x98]
    int v22;  // [bp-0x88]
    char v23;  // [bp-0x78]
    int v24;  // [bp-0x68]
    char v25;  // [bp-0x58]
    int v26;  // [bp-0x48]
    unsigned long long v27;  // [bp-0x38]
    unsigned long v29;  // rsi
    unsigned long v30;  // rax
    unsigned long v31;  // rax

    v29 = &a1->padding_0[96];
    v30 = &a1->padding_0[24];
    if (!a1->field_70)
        v31 = v30;
    else
        v31 = v29;
    v4.clone(v31);
    uucore::features::fsext::statfs(&v5, &v4);
    if (!(v5 & 1))
    {
        v27 = *((long long *)&v13);
        v26 = v12;
        memcpy(&v25, &v11, 16);
        v24 = v10;
        memcpy(&v23, &v9, 16);
        v22 = v8;
        v21 = v7;
        v20 = v6;
        v0.new(&v20);
        memcpy(&v5, a1, 152);
        *((uint128_t *)&v14) = a2->field_0;
        v15 = a2->field_10;
        memcpy(&v16, &v0, 16);
        v17 = v1;
        v18 = v2;
        v19 = v3;
        return memcpy(a0, &v5, 232);
    }
    core::ptr::drop_in_place<core::result::Result<libc::unix::linux_like::linux::gnu::b64::x86_64::statfs,alloc::string::String>>(&v5);
    *(a0) = 0x8000000000000000;
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(a2);
    return (unsigned long long)core::ptr::drop_in_place<uucore::features::fsext::MountInfo>(a1);
}
