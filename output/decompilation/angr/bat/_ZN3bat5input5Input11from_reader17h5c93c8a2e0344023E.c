long long bat::input::Input::from_reader(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0[3];  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2[10];  // [bp-0x70]
    int v3;  // [bp-0x60]
    int v4;  // [bp-0x50]
    int v5;  // [bp-0x40]
    int v6;  // [bp-0x30]
    char v7;  // [bp-0x20]

    v1 = a1;
    *(v0) = 9223372036854775809;
    v2.description(&v0);
    *((unsigned long *)((char *)&a0->field_88 + 8)) = a2;
    *((int128_t *)((char *)&a0->field_78 + 8)) = *((int128_t *)&v0[0]);
    a0->field_0 = 0;
    a0->field_10 = 0x8000000000000000;
    *((unsigned long long [10])&(&a0->padding_18)[1]) = v2;
    *((void*)((char *)&a0->field_28 + 8)) = v3;
    *((void*)((char *)&a0->field_38 + 8)) = v4;
    *((void*)((char *)&a0->field_48 + 8)) = v5;
    *((void*)((char *)&a0->field_58 + 8)) = v6;
    *((int128_t *)((char *)&a0->field_68 + 8)) = *((int128_t *)&v7);
    return a0;
}
