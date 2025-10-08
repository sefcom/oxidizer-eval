long long uu_seq::split_short_args_with_value(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xd0]
    unsigned long long v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xc0]
    unsigned long long v3;  // [bp-0xc0]
    char v4;  // [bp-0xb8]
    unsigned long long v5;  // [bp-0xa8]
    void* v6;  // [bp-0x90]
    unsigned long long v7;  // [bp-0x88]
    void* v8;  // [bp-0x80]
    unsigned long long v9;  // [bp-0x78]
    unsigned long long v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x68]
    unsigned long long v12;  // [bp-0x60]
    unsigned long long v13;  // [bp-0x58]
    unsigned long long v14;  // [bp-0x50]
    unsigned long long v15;  // [bp-0x48]
    unsigned long long v16;  // [bp-0x40]
    int v17;  // [bp-0x38]

    v6 = 0;
    v7 = 8;
    v8 = 0;
    v9 = a1;
    v10 = a2;
    while (true)
    {
        v11.next(&v9);
        if ((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63))
            break;
        if (v13 <= 2 || !(char)core::slice::<impl [T]>::starts_with(v1, "-f-s-t/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/seq/src/seq.rs") && !(char)core::slice::<impl [T]>::starts_with(v1, "-s-t/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/seq/src/seq.rs") && !(char)core::slice::<impl [T]>::starts_with(v1, "-t/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/seq/src/seq.rs"))
        {
            v0 = v11;
            v1 = v12;
            v3 = v13;
            v6.push(&v0, &g_51a430);
            v2 = v3;
        }
        else
        {
            core::slice::<impl [T]>::split_at_unchecked(&v14, v1, v3);
            v0.to_vec(v14, v15);
            v5 = v2;
            memcpy(&v4, &v0, 16);
            v6.push(&v4, &g_51a448);
            v0.to_vec(v16, (long long)v17);
            v5 = v2;
            memcpy(&v4, &v0, 16);
            v6.push(&v4, &g_51a460);
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v11, v1);
        }
    }
    return a0.into_iter(&v6);
}
