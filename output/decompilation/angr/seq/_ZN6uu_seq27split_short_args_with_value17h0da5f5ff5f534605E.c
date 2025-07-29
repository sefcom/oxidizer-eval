long long uu_seq::split_short_args_with_value(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xf8]
    unsigned long long v1;  // [bp-0xf0]
    unsigned long long v2;  // [bp-0xe8]
    int v3;  // [bp-0xd8]
    int v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xc8]
    int v6;  // [bp-0xb8]
    unsigned long long v7;  // [bp-0xa8]
    void* v8;  // [bp-0x90]
    unsigned long long v9;  // [bp-0x88]
    void* v10;  // [bp-0x80]
    unsigned long long v11;  // [bp-0x78]
    unsigned long long v12;  // [bp-0x70]
    int v13;  // [bp-0x68]
    unsigned long long v14;  // [bp-0x58]
    unsigned long long v15;  // [bp-0x50]
    unsigned long long v16;  // [bp-0x48]
    unsigned long long v17;  // [bp-0x40]
    int v18;  // [bp-0x38]
    uint256_t v20;  // ymm0
    uint256_t v21;  // ymm0
    int v22;  // xmm0
    int v23;  // xmm0

    v8 = 0;
    v9 = 8;
    v10 = 0;
    v11 = a1;
    v12 = a2;
    while (true)
    {
        v13.next(&v11);
        if ((char)(((0 ^ (long long)v13) & (0 ^ -((long long)v13))) >> 63))
            break;
        v21 = v20 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v13;
        memcpy(&v0, &v13, 16);
        v2 = v14;
        if (v14 <= 2 || !(char)core::slice::<impl [T]>::starts_with(v1, v14, "-f-s-t/mnt/c/Research/Oxidizer/Projects/oxidizer-rustc/projects/coreutils/src/uu/seq/src/seq.rs", 2) && !(char)core::slice::<impl [T]>::starts_with(v1, v14, "-s-t/mnt/c/Research/Oxidizer/Projects/oxidizer-rustc/projects/coreutils/src/uu/seq/src/seq.rs", 2) && !(char)core::slice::<impl [T]>::starts_with(v1, v14, "-t/mnt/c/Research/Oxidizer/Projects/oxidizer-rustc/projects/coreutils/src/uu/seq/src/seq.rs", 2))
        {
            v5 = v2;
            v20 = v21 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v0);
            memcpy(&v3, &v0, 16);
            v8.push(&v3, &g_5b4690);
            v3 = v4;
        }
        else
        {
            core::slice::<impl [T]>::split_at_unchecked(&v15, v1, v14);
            v3.to_vec(v15, v16);
            v7 = v5;
            v22 = v3;
            v6 = v22;
            v8.push(&v6, &g_5b46a8);
            v3.to_vec(v17, (long long)v18);
            v7 = v5;
            v23 = v3;
            v20 = (v21 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v23;
            v6 = v23;
            v8.push(&v6, &g_5b46c0);
            ::0x4b12b0::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v0);
        }
    }
    return a0.into_iter(&v8);
}
