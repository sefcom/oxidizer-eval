long long uu_dd::Input::fill_blocks(struct_2 *a0, struct_1 *a1, unsigned long long a2[3], char a3)
{
    void* v0;  // [bp-0xd8]
    unsigned int v1;  // [bp-0xcc]
    struct_3 *v2;  // [bp-0xc8]
    void* v3;  // [bp-0xc0]
    int v4;  // [bp-0xb0]
    int v5;  // [bp-0x98]
    char v6;  // [bp-0x78]
    unsigned long long v8;  // r13
    unsigned long long v9;  // rdi
    void* v10;  // r15
    void* v11;  // rdx
    struct_1 *v12;  // rbp
    unsigned long long v13;  // rbx
    struct_1 *v14;  // r12
    unsigned long v15;  // rdx
    unsigned long long v16;  // rdx
    void* v18;  // rax

    v8 = a2[2];
    if (a2[2])
    {
        v9 = a1->field_8->field_70;
        v0 = 0;
        v1 = a3;
        v3 = 0;
        v10 = 0;
        v11 = 0;
        do
        {
            v12 = a1;
            v13 = v9 + v10.min(v8);
            v14 = v12;
            if (((char)v12.read(v10.index_mut(v13, a2[1], v8), a2) & 1))
            {
                v2->field_8 = v15;
                a0->field_0 = 1;
                return 1;
            }
            if (!v15)
            {
                v8 = a2[2];
                break;
            }
            v16 = v13 - v10;
            if (v16 > v15)
            {
                v3 += 1;
                v4.from_elem(v1, v16 - v15, &g_53ddb0);
                v5.into_iter(&v4);
                v6.splice(a2, v10 + v15, v13, &v5);
                core::ptr::drop_in_place<alloc::vec::splice::Splice<alloc::vec::into_iter::IntoIter<u8>>>(&v6);
            }
            else
            {
                v0 += 1;
            }
            v11 += v15;
            v9 = v14->field_8->field_70;
            v10 += v14->field_8->field_70;
            v8 = a2[2];
            a1 = v14;
        } while (v10 < v8);
        v18 = v3;
        if (v10 > v8)
        {
            a0->field_8 = v0;
            a0->field_10 = v18;
            a0->field_18 = v11;
            a0->field_20 = 0;
            a0->field_0 = 0;
            return 0;
        }
    }
    else
    {
        v0 = 0;
        v18 = 0;
        v10 = 0;
        v11 = 0;
    }
    a2[2] = v10;
    a0->field_8 = v0;
    a0->field_10 = v18;
    a0->field_18 = v11;
    a0->field_20 = 0;
    a0->field_0 = 0;
    return 0;
}
