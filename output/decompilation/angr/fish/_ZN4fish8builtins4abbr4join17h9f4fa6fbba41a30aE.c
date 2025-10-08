long long fish::builtins::abbr::join(unsigned long a0, unsigned long long a1[2], unsigned long a2)
{
    void* v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    void* v2;  // [bp-0x40]
    struct_0 *v3;  // [bp-0x38]
    void* v5;  // rbx
    void* v6;  // rbx
    void* v7;  // rbx

    v0 = 0;
    v1 = 4;
    v2 = 0;
    if (a2)
    {
        v0.spec_extend(a1[0], a1[0] + a1[1] * 4);
        v5 = 0;
        while (true)
        {
            v6 = v5;
            if (a2 * 16 - 16 == v6)
                break;
            v0.spec_extend(",", "-");
            v7 = v6 + 16;
            v0.spec_extend(*((long long *)(a1 + v6 + 16)), *((long long *)(a1 + v6 + 16)) + *((long long *)(a1 + v6 + 24)) * 4);
            v5 = v7;
        }
    }
    v3->field_10 = 0;
    v3->field_0 = v0;
    v3->field_8 = 4;
    return 4;
}
