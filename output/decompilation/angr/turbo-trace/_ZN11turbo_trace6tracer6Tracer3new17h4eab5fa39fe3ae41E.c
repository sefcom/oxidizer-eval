long long turbo_trace::tracer::Tracer::new(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long *a3)
{
    unsigned long long v0;  // [bp-0x218]
    int v1;  // [bp-0x218]
    unsigned long long v2;  // [bp-0x208]
    void* v3;  // [bp-0x200]
    unsigned long long v4;  // [bp-0x1f8]
    void* v5;  // [bp-0x1f0]
    int v6;  // [bp-0x1e8], Other Possible Types: char
    unsigned long v7;  // [bp-0x1d8]
    char v8;  // [bp-0x1d0], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x1c8]
    int v10;  // [bp-0x1c0], Other Possible Types: char
    char v11;  // [bp-0xf0]
    unsigned long long v13;  // rax

    if ((char)(((0 ^ *(a3)) & (0 ^ -(*(a3)))) >> 63))
    {
        v0 = 0x8000000000000000;
    }
    else
    {
        v8.from_unknown(a1->field_0[1], a1->field_8, a3);
        v2 = *((long long *)&v10);
        memcpy(&v0, &v8, 16);
    }
    v8.into_iter(a2);
    v6.collect(&v8);
    v3 = 0;
    v4 = 8;
    v5 = 0;
    v11.default();
    v8 = 1;
    v9 = 1;
    memcpy(&v10, &v11, 208);
    v13 = v8.new();
    a0->field_10 = v7;
    *((void*)&a0->field_0) = v6;
    *((void*)((char *)&a0->field_30 + 8)) = v1;
    (&a0->field_40)[1] = v2;
    *((unsigned long long *)&a0->field_48) = v13;
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = a1->field_8;
    *((unsigned long long [2])&(&a0->field_10)[1]) = a1->field_0;
    *((int128_t *)&a0->field_28) = *((int128_t *)&v3);
    *((unsigned long long *)&a0->field_30) = 0;
    *((char *)&a0->field_48 + 8) = 0;
    return 0;
}
