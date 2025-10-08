long long zoxide::util::rename(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    unsigned long long v5;  // rbx
    unsigned long long v6;  // r15
    unsigned long long v7;  // rdx
    void* v8;  // rax
    void* v9;  // r13
    unsigned long long v10;  // rdx

    v5 = a0.as_ref();
    v6 = a1.as_ref(a2);
    v8 = std::fs::rename(v5, v7, v6, v7);
    if (v8)
    {
        v9 = v8;
        if ((char)v8.kind() == 1)
        {
            v0 = v9;
            core::ptr::drop_in_place<std::io::error::Error>(&v0);
            v9 = std::fs::rename(v5, v7, v6, v7);
            if (!v9)
                goto LABEL_4933a3;
            v9.kind();
        }
    }
    else
    {
LABEL_4933a3:
        v9 = 0;
    }
    v0 = v5;
    v1 = v7;
    v2 = v6;
    v3 = v7;
    return v9.with_context(&v0, v10);
}
