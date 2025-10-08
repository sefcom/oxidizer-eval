long long fish::expand::expand_escape_variable(unsigned long a0, struct_0 *a1)
{
    void* v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    void* v2;  // [bp-0x58]
    unsigned int v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long v5;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v6[3];  // [bp-0x38]
    unsigned long long v8;  // rax
    unsigned long long v9[5];  // rbp
    void* v10;  // r12

    v0 = 0;
    v1 = 4;
    v2 = 0;
    v8 = a1->field_8;
    if (v8)
    {
        v9 = a1->field_0;
        if (v8 == 1)
        {
            v3 = 32;
            if (v3.slice_contains(v9[3], v9[4]) && fish::expand::is_quotable(v9[3], v9[4]))
            {
                v0.push(39);
                v0.spec_extend(v9[3], v9[3] + v9[4] * 4);
                v0.push(39);
            }
            else
            {
                fish::common::escape(&v3, v9[3], v9[4]);
                v0.spec_extend(v4, v4 + v5 * 4);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
            }
        }
        else
        {
            v10 = 0;
            do
            {
                if (v2)
                    v0.extend("  $", "$");
                if (fish::expand::is_quotable(*((long long *)(v9 + v10 + 24)), *((long long *)(v9 + v10 + 32))))
                {
                    v0.push(39);
                    v0.spec_extend(*((long long *)(v9 + v10 + 24)), *((long long *)(v9 + v10 + 24)) + *((long long *)(v9 + v10 + 32)) * 4);
                    v0.push(39);
                }
                else
                {
                    fish::common::escape(&v3, *((long long *)(v9 + v10 + 24)), *((long long *)(v9 + v10 + 32)));
                    v0.spec_extend(v4, v4 + v5 * 4);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
                }
                v10 += 24;
            } while (v8 * 24 != v10);
        }
    }
    v6[2] = v2;
    v6[0] = v0;
    v6[1] = 4;
    return v6;
}
