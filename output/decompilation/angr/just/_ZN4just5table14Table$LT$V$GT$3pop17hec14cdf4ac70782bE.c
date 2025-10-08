long long just::table::Table<V>::pop(unsigned long long *a0, unsigned long long a1[3])
{
    unsigned long long v0;  // [bp-0x58]
    void* v1;  // [bp-0x50]
    unsigned long v2;  // [bp-0x48]
    unsigned long v3;  // [bp-0x40]
    unsigned long long v4;  // [bp-0x38]
    void* v5;  // [bp-0x30]
    unsigned long v6;  // [bp-0x28]
    unsigned long v7;  // [bp-0x20]
    unsigned long v8;  // [bp-0x18]
    unsigned long v10;  // rax
    unsigned long v11;  // rdx
    unsigned long v12;  // rax
    unsigned long long v14[2];  // rax

    v10 = a1[0];
    v11 = v10;
    v12 = v10;
    if (v12)
        v12 = a1[2];
    v0 = v10;
    v1 = 0;
    v2 = v10;
    v3 = a1[1];
    v4 = v0;
    v5 = 0;
    v6 = v10;
    v7 = a1[1];
    v8 = v12;
    v14 = v0.next();
    if (!v14)
    {
        *(a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    return a0.remove(a1, v14[0], v14[1]);
}
