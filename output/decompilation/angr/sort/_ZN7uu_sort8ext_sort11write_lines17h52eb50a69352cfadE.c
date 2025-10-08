void uu_sort::ext_sort::write_lines(unsigned long long a0[2], unsigned long a1, unsigned long long a2, char a3)
{
    unsigned long v0;  // [bp-0x38]
    char v1;  // [bp-0x31]
    unsigned long long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    unsigned long long v5;  // [bp-0x18]
    unsigned long long v6;  // [bp-0x10]
    unsigned long long v8;  // r15
    unsigned long long v9;  // r14
    unsigned long long v10;  // r13
    unsigned long long v11;  // r12
    unsigned long long v12;  // rbx
    unsigned long v13;  // rax
    unsigned long long v14[2];  // 4096
    unsigned long long v15[2];  // r15

    if (!a1)
        return;
    v6 = v8;
    v5 = v9;
    v4 = v10;
    v3 = v11;
    v2 = v12;
    v0 = v13;
    v14 = a0;
    do
    {
        v15 = v14;
        a2.write_all(v15[0], v15[1]).unwrap(&g_58c730);
        v1 = a3;
        a2.write_all(&v1, 1).unwrap(&g_58c748);
        v14 = &v15[1 + 1];
    } while (v14 != (char *)a0 + 24 * a1);
    return;
}
