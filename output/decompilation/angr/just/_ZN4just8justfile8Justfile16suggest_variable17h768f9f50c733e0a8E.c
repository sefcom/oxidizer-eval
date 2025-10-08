long long just::justfile::Justfile::suggest_variable(unsigned long long a0, unsigned long long a1[83], unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x48]
    void* v1;  // [bp-0x40]
    unsigned long v2;  // [bp-0x38]
    unsigned long v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    void* v5;  // [bp-0x20]
    unsigned long v6;  // [bp-0x18]
    unsigned long v7;  // [bp-0x10]
    unsigned long v8;  // [bp-0x8]
    unsigned long v10;  // rax
    unsigned long v11;  // r9
    unsigned long v12;  // rax

    v10 = a1[80];
    v11 = v10;
    v12 = v10;
    if (v12)
        v12 = a1[82];
    v0 = v10;
    v1 = 0;
    v2 = v10;
    v3 = a1[81];
    v4 = v0;
    v5 = 0;
    v6 = v10;
    v7 = a1[81];
    v8 = v12;
    return a0.find_suggestion(a2, a3, &v0);
}
