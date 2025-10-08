long long uu_basename::basename(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x98]
    char v2;  // [bp-0x90]
    char v3;  // [bp-0x60]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rax

    v5 = core::str::<impl str>::trim_end_matches(a1, a2);
    if (!v6)
    {
        v7 = a2;
        if (!v6)
            goto LABEL_456e83;
LABEL_456e82:
        v8 = v5;
    }
    else
    {
        v7 = v6;
        if (v6)
            goto LABEL_456e82;
LABEL_456e83:
        v8 = a1;
    }
    v0.to_vec(v8, v7);
    v0.components(v1, *((long long *)&v2));
    v3.next_back(&v0);
    a0.map_or_else(&v3, a3, a4);
    core::ptr::drop_in_place<std::path::PathBuf>(v0, v1);
    return a0;
}
