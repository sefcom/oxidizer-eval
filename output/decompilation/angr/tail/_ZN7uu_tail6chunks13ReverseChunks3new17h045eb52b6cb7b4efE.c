long long uu_tail::chunks::ReverseChunks::new(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    unsigned long long v4;  // [bp-0x8]
    unsigned long long v6;  // r15
    unsigned long long v7;  // r14
    unsigned long long v8;  // r13
    unsigned long long v9;  // r12
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax
    unsigned long long v13;  // r15
    unsigned long v14;  // xmm0lq
    unsigned long v15;  // xmm0lq
    unsigned long long v16;  // rdx

    v4 = v6;
    v3 = v7;
    v2 = v8;
    v1 = v9;
    v0 = v10;
    v12 = a1.seek(2, 0).unwrap(v11, &g_637658);
    v13 = a1.seek(1, 0).unwrap(v11, &g_637670) - v12;
    v14 = MulV(AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, v13) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, v13) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, v13) - 0x45300000000000004330000000000000), 0x3ef0000000000000);
    v15 = v14;
    ceil(v15);
    v16 = (unsigned long long)(SubV(v14, 0x43e0000000000000)) & v15 >> 63 | v15;
    if ((CmpF(v15, 0) & 1))
        v16 = 0;
    if ((((char)(CmpF(v15, 4895412794951729151) & 69) | (char)((CmpF(v15, 4895412794951729151) & 69) >> 6)) & 1) != 1)
        v16 = 18446744073709551615;
    a0->field_0 = a1;
    a0->field_8 = v13;
    a0->field_10 = v16;
    a0->field_18 = 0;
    return a0;
}
