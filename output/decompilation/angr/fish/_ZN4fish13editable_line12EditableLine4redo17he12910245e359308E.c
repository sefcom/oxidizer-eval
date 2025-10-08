long long fish::editable_line::EditableLine::redo(unsigned long long a0[14])
{
    unsigned long v0;  // [bp-0x50]
    struct_1 *v1;  // [bp-0x48]
    unsigned long v2;  // [bp-0x40]
    unsigned long v3;  // [bp-0x38]
    unsigned long v5;  // r14
    unsigned long v6;  // r15
    unsigned long v7;  // rbp
    unsigned long long v8;  // r12
    char v9;  // r13b
    unsigned long v10;  // rax
    unsigned long v11;  // r12
    unsigned long long v12;  // rcx
    struct_0 *v13;  // r12

    v2 = a0[12];
    v0 = a0[13];
    if (a0[13] < a0[12])
    {
        v5 = &a0[4];
        v6 = &a0[7];
        v7 = a0[11];
        v8 = v0 * 104;
        v9 = *((long long *)(v7 + v8 + 16));
        v3 = *((long long *)(v7 + v8 + 24));
        a0[13] = v0 + 1;
        v1 = v8 + v7;
        fish::editable_line::apply_edit(v5, v6, v8 + v7);
        if (*((int *)(v7 + v8)) == 1)
            a0.set_position(*((long long *)&v1->field_8));
        for (v10 = a0[13]; v10 < a0[12]; v9 = 1)
        {
            v11 = a0[11];
            v12 = v10 * 104;
            v7 = *((long long *)(v11 + v12 + 16));
            if (v7 != 1 || !(v9 & 1) || *((long long *)(v11 + v12 + 24)) != v3)
                break;
            v13 = v11 + v12;
            a0[13] = v10 + 1;
            fish::editable_line::apply_edit(v5, v6, v13);
            if ((v13->field_0 & 1))
                a0.set_position(*((long long *)&v13->field_8));
            v10 = a0[13];
        }
    }
    a0.end_edit_group();
    return (unsigned int)v7 & 0xffffff00 | v0 < v2;
}
