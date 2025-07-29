long long uu_sort::random_shuffle(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x3a]
    char v1;  // [bp-0x39]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned long long v8;  // [bp-0x10]
    unsigned long long v10;  // r15
    unsigned long long v11;  // r14
    unsigned long long v12;  // r13
    unsigned long long v13;  // r12
    unsigned long long v14;  // rbx

    v8 = v10;
    v7 = v11;
    v6 = v12;
    v5 = v13;
    v4 = v14;
    v2 = 14695981039346656037;
    v2.write(a0, a1);
    v0 = 255;
    v2.write(&v0, 1);
    a4.hash(16, &v2);
    v3 = 14695981039346656037;
    v3.write(a2, a3);
    v1 = 255;
    v3.write(&v1, 1);
    a4.hash(16, &v3);
    return (v3 <= v2 ? v2 != v3 : 255);
}
