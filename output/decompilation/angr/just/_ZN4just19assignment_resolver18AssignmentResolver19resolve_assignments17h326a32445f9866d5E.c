char just::assignment_resolver::AssignmentResolver::resolve_assignments(struct_0 *a0, unsigned long long a1[3])
{
    void* v0;  // [bp-0xf0]
    unsigned long long v1;  // [bp-0xe8]
    void* v2;  // [bp-0xe0]
    unsigned long long v3[3];  // [bp-0xd8]
    void* v4;  // [bp-0xd0]
    void* v5;  // [bp-0xc0]
    unsigned long long v6;  // [bp-0xb8]
    void* v7;  // [bp-0xb0]
    unsigned long v8;  // [bp-0xa8]
    unsigned long v9;  // [bp-0xa0]
    unsigned long long v10;  // [bp-0x98]
    void* v11;  // [bp-0x90]
    unsigned long v12;  // [bp-0x88]
    unsigned long v13;  // [bp-0x80]
    unsigned long v14;  // [bp-0x78]
    int v15;  // [bp-0x70]
    int v16;  // [bp-0x60]
    int v17;  // [bp-0x50]
    int v18;  // [bp-0x40]
    char v19;  // [bp-0x30]
    char v20;  // [bp-0x28]
    unsigned long v22;  // rax
    unsigned long v23;  // rax
    unsigned long v25;  // rdx
    unsigned long long v26[2];  // rax

    v3[0] = a1;
    v4 = 0;
    v5 = 0;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v22 = a1[0];
    v23 = v22;
    if (v23)
        v23 = a1[2];
    v25 = v22;
    v6 = v22;
    v7 = 0;
    v8 = v22;
    v9 = a1[1];
    v10 = v6;
    v11 = 0;
    v12 = v22;
    v13 = a1[1];
    v14 = v23;
    while (true)
    {
        v26 = v6.next();
        if (!v26)
        {
            a0->field_40[8] = 37;
            return core::ptr::drop_in_place<just::assignment_resolver::AssignmentResolver>(&v0);
        }
        v15.resolve_assignment(&v0, v26[0], v26[1]);
        if (v20 != 37)
        {
            *((int128_t *)&a0->field_40[0]) = *((int128_t *)&v19);
            *((void*)&a0->field_30) = v18;
            *((void*)&a0->field_20) = v17;
            *((void*)&a0->field_10) = v16;
            *((void*)&a0->field_0) = v15;
            return core::ptr::drop_in_place<just::assignment_resolver::AssignmentResolver>(&v0);
        }
    }
}
