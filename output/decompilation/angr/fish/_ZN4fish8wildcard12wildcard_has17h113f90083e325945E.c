long long fish::wildcard::wildcard_has(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x38], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x38]
    void* v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    void* v4;  // [bp-0x28]
    unsigned long long v6;  // rbx
    char v7;  // al
    unsigned long long v8;  // rdx
    void* v10;  // rax
    unsigned long long v12;  // cc_ndep
    void* v13;  // rax
    void* v14;  // r15
    unsigned long long v15;  // rcx

    v6 = a0.as_ref(a1);
    v7 = fish::future_feature_flags::test(1);
    v0 = 42;
    if (v0.slice_contains(v6, v8))
    {
LABEL_1428e8b:
        fish::common::unescape_string(&v2, v6, v8, 0, 1);
        if ((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63))
            v10 = 0;
        else
            v10 = v2;
        v13 = v10;
        if ((char)_ccall(1, 8, 0, v2, v12))
        {
            v15 = v3;
            if (!((char)_ccall(1, 8, 0, v2, v12)))
                goto LABEL_1428ec0;
LABEL_1428ebf:
        }
        else
        {
            v15 = 4;
            if ((char)_ccall(1, 8, 0, v2, v12))
                goto LABEL_1428ebf;
LABEL_1428ec0:
            v14 = 0;
        }
        v0 = v13;
        v3 = v15;
        v4 = v14;
        return fish::wildcard::wildcard_has_internal(&v0);
    }
    else
    {
        if (v7)
            return 0;
        v1 = 63;
        if (v1.slice_contains(v6, v8))
            goto LABEL_1428e8b;
        return 0;
    }
}
