long long uu_basename::basename(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    unsigned long long v2;  // [bp-0xa8]
    char v3;  // [bp-0xa0]
    char v4;  // [bp-0x68]
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rax

    v6 = core::str::<impl str>::trim_end_matches(a1, a2);
    if (!v7)
    {
        v8 = a2;
        if (!(v7))
            goto LABEL_49cb83;
LABEL_49cb82:
        v9 = v6;
    }
    else
    {
        v8 = v7;
        if (v7)
            goto LABEL_49cb82;
LABEL_49cb83:
        v9 = a1;
    }
    v0.to_owned(v9, v8);
    v4.components(v1, v2);
    v3.next_back(&v4);
    a0.map_or_else(&v3, a3, a4);
    core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    return a0;
}
