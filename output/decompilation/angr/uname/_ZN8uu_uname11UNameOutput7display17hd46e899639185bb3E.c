long long uu_uname::UNameOutput::display(struct_0 *a0, unsigned long long a1[22])
{
    void* v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    void* v2;  // [bp-0x98]
    unsigned long long v3;  // [bp-0x90]
    void* v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x80]
    unsigned long long v6[22];  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    unsigned long v9;  // [bp-0x60]
    unsigned long v10;  // [bp-0x58]
    unsigned long v11;  // [bp-0x50]
    unsigned long v12;  // [bp-0x48]
    unsigned long v13;  // [bp-0x40]
    void* v14;  // [bp-0x38]
    void* v15;  // [bp-0x28]
    unsigned long long v18[22];  // rax
    unsigned long long v19[22];  // rax
    unsigned long v20;  // rcx
    unsigned long v21;  // rdi
    unsigned long v22;  // r8
    unsigned long v23;  // r9
    unsigned long v24;  // r10
    unsigned long v25;  // r11
    unsigned long v26;  // r14
    unsigned long long v27[3];  // rax

    if ((char)(((0 ^ a1[0]) & (0 ^ -(a1[0]))) >> 63))
        v18 = 0;
    else
        v18 = a1;
    v19 = v18;
    v20 = &a1[3];
    if ((char)(((0 ^ a1[3]) & (0 ^ -(a1[3]))) >> 63))
        v20 = 0;
    v0 = 0;
    v21 = &a1[6];
    if ((char)(((0 ^ a1[6]) & (0 ^ -(a1[6]))) >> 63))
        v21 = 0;
    v22 = &a1[9];
    if ((char)(((0 ^ a1[9]) & (0 ^ -(a1[9]))) >> 63))
        v22 = 0;
    v23 = &a1[12];
    if ((char)(((0 ^ a1[12]) & (0 ^ -(a1[12]))) >> 63))
        v23 = 0;
    v1 = 1;
    v24 = &a1[15];
    if ((char)(((0 ^ a1[15]) & (0 ^ -(a1[15]))) >> 63))
        v24 = 0;
    v25 = &a1[18];
    if ((char)(((0 ^ a1[18]) & (0 ^ -(a1[18]))) >> 63))
        v25 = 0;
    v26 = &a1[21];
    if ((char)(((0 ^ a1[21]) & (0 ^ -(a1[21]))) >> 63))
        v26 = 0;
    v2 = 0;
    v3 = 1;
    v4 = 0;
    v5 = 8;
    v6[0] = v19;
    v7 = v20;
    v8 = v21;
    v9 = v22;
    v10 = v23;
    v11 = v24;
    v12 = v25;
    v13 = v26;
    v14 = 0;
    v15 = 0;
    while (true)
    {
        v27 = v3.next();
        if (!v27)
            break;
        v0.spec_extend(v27[1], v27[2] + v27[1]);
        v0.push();
    }
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v0);
    return a0;
}
