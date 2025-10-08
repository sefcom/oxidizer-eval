long long bat::preprocessor::replace_nonprintable(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long long a3, unsigned int a4)
{
    unsigned int v0;  // [bp-0xc4]
    void* v1;  // [bp-0xc0]
    unsigned long long v2;  // [bp-0xb8]
    void* v3;  // [bp-0xb0]
    struct_0 *v16;  // [bp-0x58]
    unsigned long v17;  // [bp-0x50]
    unsigned long long v18;  // [bp-0x48]
    unsigned long long v19;  // [bp-0x40]
    unsigned long v21;  // rax
    void* v22;  // r15
    void* v23;  // r13

    v0 = a4;
    v1 = 0;
    v2 = 1;
    v3 = 0;
    if (!a3)
        a3 = 4;
    v19 = a3;
    if (!a2)
    {
        v16->field_10 = 0;
        v16->field_0 = v1;
        v16->field_8 = 1;
        return 1;
    }
    v21 = (char)v0;
    *((int *)&v18) = ((v21 & 255) ? &g_480d0c : "^J\n\\x");
    v17 = v21 + v18 + 3;
    v22 = 0;
    v23 = 0;
}
