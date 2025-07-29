long long uu_dd::Input::fill_blocks(unsigned long long *a0, struct_2 *a1, unsigned long long a2[3], char a3)
{
    void* v0;  // [bp-0xd8]
    void* v1;  // [bp-0xd0]
    unsigned int v2;  // [bp-0xbc]
    struct_0 *v3;  // [bp-0xb8]
    int v4;  // [bp-0xb0]
    int v5;  // [bp-0x98]
    char v6;  // [bp-0x78]
    unsigned long v8;  // r13
    unsigned long v9;  // rdi
    void* v10;  // r12
    void* v11;  // rbx
    unsigned long long v12;  // rbp
    unsigned long v13;  // rdx
    unsigned long long v14;  // rdx
    unsigned long long *v15;  // rcx

    v8 = a2[2];
    if (a2[2])
    {
        v9 = a1->field_8->field_70;
        v1 = 0;
        v2 = a3;
        v0 = 0;
        v10 = 0;
        v11 = 0;
        do
        {
            v12 = ::0x4cb980::core::cmp::min_by(v9 + v10, v8);
            if (a1.read(v10.index_mut(v12, a2[1], v8), a2))
            {
                v3->field_8 = v13;
                *(a0) = 1;
                return 1;
            }
            if (!v13)
                break;
            v14 = v12 - v10;
            if (v14 > v13)
            {
                v0 += 1;
                v4.from_elem(v2, v14 - v13, &g_5debb0);
                v5.into_iter(&v4);
                v6.splice(a2, v10 + v13, v12, &v5);
                core::ptr::drop_in_place<alloc::vec::splice::Splice<alloc::vec::into_iter::IntoIter<u8>>>(&v6);
            }
            else
            {
                v1 += 1;
            }
            v11 += v13;
            v9 = a1->field_8->field_70;
            v10 += a1->field_8->field_70;
            v8 = a2[2];
        } while (v10 < a2[2]);
    }
    else
    {
        v11 = 0;
        v10 = 0;
        v0 = 0;
        v1 = 0;
    }
    a2.truncate(v10);
    v15 = a0;
    v3->field_8 = v1;
    v3->field_10 = v0;
    v3->field_18 = v11;
    v3->field_20 = 0;
    *(v15) = 0;
    return 0;
}
