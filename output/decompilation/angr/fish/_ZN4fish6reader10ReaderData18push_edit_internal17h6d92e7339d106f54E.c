long long fish::reader::ReaderData::push_edit_internal(unsigned long long a0[252], unsigned int a1, struct_0 *a2, unsigned int a3)
{
    unsigned long v0;  // [bp-0xb8]
    unsigned long v1;  // [bp-0xb0]
    unsigned long v2;  // [bp-0xa8]
    unsigned long v3;  // [bp-0xa0]
    int v4;  // [bp-0x98]
    int v5;  // [bp-0x88]
    int v6;  // [bp-0x78]
    int v7;  // [bp-0x68]
    int v8;  // [bp-0x58]
    int v9;  // [bp-0x48]
    unsigned long v10;  // [bp-0x38]
    char v12;  // r12b
    unsigned long long v13;  // rdi

    v12 = 1;
    v13 = 368;
    if (!a1)
    {
        if ((char)a0.try_apply_edit_to_autosuggestion(a2))
        {
            v13 = 0;
        }
        else
        {
            if (a0[162] && a2->field_50[0] == a0[164] && a2->field_50[0] >= a2->field_50[1] && a2->field_40[1])
            {
                v12 = 2;
            }
            else if (!((char)(((0 ^ a0[247]) & (0 ^ -(a0[247]))) >> 63)))
            {
                v0 = (char *)&a0[158] + 7;
                v1 = &a0[189];
                v2 = &a2->field_50;
                v3 = (char *)&a2->field_30 + 8;
                v12 = (char)fish::reader::ReaderData::push_edit_internal::{{closure}}(&v0, a0[251]) * 2 + 1;
            }
            else
            {
                v13 = 0;
                v10 = a2->field_50[1];
                *((int128_t *)&v9) = *((int128_t *)&a2->field_48);
                *((unsigned long long [2])&v8) = a2->field_40;
                *((uint128_t *)&v7) = a2->field_30;
                *((uint128_t *)&v6) = a2->field_20;
                *((uint128_t *)&v5) = a2->field_10;
                *((uint128_t *)&v4) = a2->field_0;
                a0.push_edit(&v4, a3);
                return a0.command_line_changed(a1, 1);
            }
            v13 = 0;
        }
    }
    v10 = a2->field_50[1];
    *((int128_t *)&v9) = *((int128_t *)&a2->field_48);
    *((unsigned long long [2])&v8) = a2->field_40;
    *((uint128_t *)&v7) = a2->field_30;
    *((uint128_t *)&v6) = a2->field_20;
    *((uint128_t *)&v5) = a2->field_10;
    *((uint128_t *)&v4) = a2->field_0;
    v13 + (char *)a0.push_edit(&v4, a3);
    return a0.command_line_changed(a1, v12);
}
