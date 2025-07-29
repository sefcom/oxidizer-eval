long long uu_uname::UNameOutput::display(struct_0 *a0, unsigned long long a1[22])
{
    char v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    int v3;  // [bp-0x98], Other Possible Types: char
    unsigned long v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x80]
    unsigned long long v6[22];  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]
    unsigned long v10;  // [bp-0x58]
    unsigned long v11;  // [bp-0x50]
    unsigned long v12;  // [bp-0x48]
    unsigned long v13;  // [bp-0x40]
    void* v14;  // [bp-0x38]
    unsigned long long v15;  // [bp-0x30]
    void* v16;  // [bp-0x28]
    void* v17;  // [bp-0x18]
    unsigned long long v20[22];  // rcx
    unsigned long long v21[22];  // rcx
    unsigned long v22;  // rdx
    unsigned long v23;  // r8
    unsigned long v24;  // r9
    unsigned long v25;  // r10
    unsigned long v26;  // r11
    unsigned long v27;  // rdi
    unsigned long v28;  // rsi

    if ((char)(((0 ^ a1[0]) & (0 ^ -(a1[0]))) >> 63))
        v20 = 0;
    else
        v20 = a1;
    v21 = v20;
    v22 = &a1[3];
    if ((char)(((0 ^ a1[3]) & (0 ^ -(a1[3]))) >> 63))
        v22 = 0;
    v23 = &a1[6];
    if ((char)(((0 ^ a1[6]) & (0 ^ -(a1[6]))) >> 63))
        v23 = 0;
    v24 = &a1[9];
    if ((char)(((0 ^ a1[9]) & (0 ^ -(a1[9]))) >> 63))
        v24 = 0;
    v25 = &a1[12];
    if ((char)(((0 ^ a1[12]) & (0 ^ -(a1[12]))) >> 63))
        v25 = 0;
    v26 = &a1[18];
    if ((char)(((0 ^ a1[18]) & (0 ^ -(a1[18]))) >> 63))
        v26 = 0;
    v27 = &a1[21];
    if ((char)(((0 ^ a1[21]) & (0 ^ -(a1[21]))) >> 63))
        v27 = 0;
    v28 = &a1[15];
    if ((char)(((0 ^ a1[15]) & (0 ^ -(a1[15]))) >> 63))
        v28 = 0;
    v5 = 1;
    v6[0] = v21;
    v7 = v22;
    v8 = v23;
    v9 = v24;
    v10 = v25;
    v11 = v26;
    v12 = v27;
    v13 = v28;
    v14 = 0;
    v15 = 8;
    v16 = 0;
    v17 = 0;
    v0.from_iter(&v5, &g_5624b8);
    alloc::str::join_generic_copy(&v3, v1, v2, " /root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1);
    a0->field_10 = v4;
    *((void*)&a0->field_0) = v3;
    ::0x491370::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v0);
    return a0;
}
