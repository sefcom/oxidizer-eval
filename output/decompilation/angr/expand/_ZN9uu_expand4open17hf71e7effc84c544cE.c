long long uu_expand::open(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x40], Other Possible Types: unsigned long
    unsigned long v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx

    if ((char)a1.equal(a2, "-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs--tabs=", 1))
    {
        v4 = std::io::stdio::stdin().new();
        v5 = &g_57b660;
    }
    else
    {
        v2.open(a1, a2);
        v0.map_err_context(&v2, a1, a2);
        if (v0)
        {
            a0->field_8 = v0;
            a0->field_10 = v1;
            a0->field_0 = 0;
            return v0;
        }
        v4 = (unsigned int)v1.new();
        v5 = &g_57b608;
    }
    return a0.with_capacity(0x2000, v4, v5);
}
