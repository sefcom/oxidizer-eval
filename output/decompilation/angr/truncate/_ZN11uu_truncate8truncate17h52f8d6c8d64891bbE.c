long long uu_truncate::truncate(char a0, unsigned long a1, unsigned long long a2[3], unsigned long long a3[3], unsigned long a4, unsigned int a5)
{
    char v1;  // dil
    unsigned long long v2;  // rbx
    unsigned long long v3;  // r15
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rax
    unsigned long long v6;  // r15

    v1 = a0 ^ 1;
    v2 = a2[0];
    v3 = a3[0];
    if (!((char)(((0 ^ a2[0]) & (0 ^ -(a2[0]))) >> 63)))
    {
        v4 = a2[1];
        if (v3 == 0x8000000000000000)
        {
            v5 = uu_truncate::truncate_reference_file_only(v4, a2[2], a4, a5, v1);
        }
        else
        {
            v5 = uu_truncate::truncate_reference_and_size(v4, a2[2], a3[1], a3[2], a4, a5, v1);
            core::ptr::drop_in_place<alloc::string::String>(v3, a3[1]);
        }
        v6 = v2;
    }
    else if (v3 != 0x8000000000000000)
    {
        v4 = a3[1];
        v5 = uu_truncate::truncate_size_only(a3[1], a3[2], a4, a5, v1);
        v6 = v3;
    }
    else
    {
        core::panicking::panic("internal error: entered unreachable code/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 40, &g_4e4118); /* do not return */
    }
    core::ptr::drop_in_place<alloc::string::String>(v6, v4);
    return v5;
}
