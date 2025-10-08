long long zoxide::util::path_to_str(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x20]
    unsigned long long v3;  // rax
    void* v4;  // rsi
    unsigned long long v5;  // rdx

    v3 = a1.as_ref(a2);
    core::str::converts::from_utf8(&v0, v3, a2);
    if (v0)
        v4 = 0;
    return a0.with_context(v4, *((long long *)&v1), v3, v5);
}
