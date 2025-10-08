long long zoxide::util::to_lowercase(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdi
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rdx

    v1 = a1.as_ref(a2);
    v2 = a0;
    v3 = v1;
    v5 = v4;
    if (!(char)core::slice::ascii::is_ascii(v1, v4))
        return alloc::str::<impl str>::to_lowercase(a0, v3, v4);
    return alloc::str::<impl str>::to_ascii_lowercase(a0, v3, v4);
}
