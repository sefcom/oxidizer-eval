long long fish::expand::Expander::stage_variables(struct_0 *a0, unsigned long long a1[3], unsigned long long a2)
{
    unsigned long long v0[3];  // [bp-0x68]
    unsigned long long v1[3];  // [bp-0x68]
    unsigned long long v2;  // [sp-0x60]
    void* v3;  // [sp-0x58]
    unsigned long long v5;  // r15
    void* v6;  // rdx
    unsigned long long v7[4];  // rax
    unsigned long long v8;  // rcx
    unsigned long long v9;  // r8
    unsigned int v10;  // ebp
    void* v11;  // r14
    unsigned int *v12;  // r13

    fish::common::unescape_string(&v0, a1[1], a1[2], 0, 3);
    if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
    {
        v5 = 4;
        v1 = 0;
        v6 = 0;
        if ((a0->field_10 & 2))
            goto LABEL_13ae5b3;
LABEL_13ae4e6:
        v2 = v5;
        v3 = v6;
        v7 = a0->field_0;
        if (!v7[0])
        {
            v8 = 472 + v7[1];
            v9 = &g_14c7518;
        }
        else if ((unsigned int)v7[0] == 1)
        {
            v8 = v7[1];
            v9 = v7[2];
        }
        else
        {
            v8 = v7[2];
            v9 = v7[3];
        }
        v10 = fish::expand::expand_variables(&(unsigned long long)v0, a2, v6, v8, v9, a0->field_8);
    }
    else
    {
        v5 = v2;
        v6 = v3;
        if (!(a0->field_10 & 2))
            goto LABEL_13ae4e6;
        if (v6)
        {
            v11 = 0;
            do
            {
                v12 = v5 + v11;
                if (v12.slice_contains(&g_54a618, 2))
                    *(v12) = 36;
                v11 += 4;
            } while (v6 * 4 != v11);
        }
        else
        {
            v6 = 0;
        }
LABEL_13ae5b3:
        *(&v0) = v1;
        v2 = v5;
        v3 = v6;
        v10 = (!a2.add(&v0) ? (int)fish::expand::append_overflow_error(a0->field_8->field_0) : 0);
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a1);
    return v10;
}
