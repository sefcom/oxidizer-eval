long long uu_more::Pager::new(struct_0 *a0, uint128_t a1[3], unsigned short a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, struct_1 *a7, void* a8)
{
    unsigned long long v0;  // [bp-0xe0]
    unsigned long long v1;  // [bp-0xb8]
    unsigned long long v2;  // [bp-0xb0]
    void* v3;  // [bp-0xa8]
    void* v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x98]
    void* v6;  // [bp-0x90]
    unsigned long long v7[1][2];  // [bp-0x88]
    unsigned long long v8;  // [bp-0x80]
    int v9;  // [bp-0x78]
    int v10;  // [bp-0x68]
    int v11;  // [bp-0x58], Other Possible Types: char
    char v12;  // [bp-0x48]
    char v13;  // [bp-0x40]
    unsigned long v14;  // cc_ndep
    unsigned int v15;  // edx
    unsigned long v16;  // rdi
    unsigned int v17;  // eax
    unsigned long long v18;  // r13
    unsigned long v19;  // rdx
    unsigned long v20;  // r15
    unsigned long long v21;  // rdx
    unsigned long long v22;  // r12
    unsigned long long v23;  // rdx
    unsigned long v24;  // rax
    char v25;  // cl
    int v26;  // xmm0

    v16 = ((char)amd64g_calculate_condition(3, 6, (unsigned long long)a2, 1, v14) ? v15 & 0xffff0000 | a2 - 1 : 0);
    v17 = core::cmp::max_by(((char)amd64g_calculate_condition(3, 6, (unsigned long long)a2, 1, v14) ? v15 & 0xffff0000 | a2 - 1 : 0));
    v7.len(a1);
    v18 = v7[0];
    if (v18 == 2)
    {
        a0->field_8 = v8.from();
        *((unsigned long *)&a0->field_10) = v19;
        a0->field_0 = 2;
        core::ptr::drop_in_place<core::result::Result<bool,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(*((long long *)a8), (long long)a8[8]);
        return core::ptr::drop_in_place<uu_more::InputType>(a1);
    }
    v20 = v17;
    v0 = v8;
    *((uint128_t *)&v10) = a1[2];
    *((uint128_t *)&v9) = a1[1];
    *((uint128_t *)&v7[0]) = a1[0];
    v1 = v20.with_capacity_in(8, 24, &g_5bd268);
    v2 = v21;
    v3 = 0;
    v4 = 0;
    v5 = 8;
    v6 = 0;
    v22 = a7->field_18;
    if ((char)(((0 ^ a7->field_0) & (0 ^ -(a7->field_0))) >> 63))
    {
        v23 = 0x8000000000000000;
    }
    else
    {
        v12.clone(a7);
        v23 = *((long long *)&v12);
        memcpy(&v11, &v13, 16);
    }
    v24 = a7->field_24;
    v25 = a7->field_2a;
    v26 = v7;
    *((void*)((char *)&a0->field_68 + 8)) = v10;
    *((void*)((char *)&a0->field_58 + 8)) = v9;
    *((void*)((char *)&a0->field_48 + 8)) = v26;
    *((int128_t *)&a0->field_10) = *((int128_t *)&v1);
    a0->field_20 = 0;
    *((int128_t *)&(&a0->field_20)[1]) = *((int128_t *)&v4);
    *((unsigned long long *)((char *)&a0->field_28 + 8)) = 0;
    a0->field_0 = v18;
    a0->field_8 = v0;
    a0->field_38 = v23;
    *((void*)&a0->field_40) = v11;
    *((unsigned long long *)((char *)&a0->field_78 + 8)) = v22;
    a0->field_88 = v20;
    a0->field_90 = 0;
    a0->field_98 = a3;
    a0->field_a0 = a4;
    a0->field_a8 = a5;
    a0->field_b0 = a6;
    *((int128_t *)&a0->field_b8) = *((int128_t *)a8);
    *((char *)&a0->field_c0) = 0;
    *((char *)&a0->field_c0 + 1) = v24;
    *((char *)&a0->field_c0 + 2) = v25;
    return v24;
}
