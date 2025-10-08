long long fish::path::path_apply_working_directory(struct_0 *a0, unsigned long long a1, void* a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x98]
    unsigned long long v3;  // [bp-0x90]
    unsigned long long v4;  // [bp-0x90]
    int v5;  // [bp-0x88]
    unsigned long v6;  // [bp-0x78]
    int v7;  // [bp-0x68], Other Possible Types: char
    char v8;  // [bp-0x58]
    unsigned long long v10;  // r12
    unsigned long long v11;  // r13

    if (!a2)
    {
        a2 = 0;
    }
    else if (a4)
    {
        if ((int)a1.char_at(a2, 0) != 47 && (int)a1.char_at(a2, 0) != 64976)
        {
            v0.to_vec(a1, a2);
            v4 = v3;
            v2 = v1;
            if (v2.starts_with(v4, ".//dirname", 2))
            {
                v7.splice(&v0, 0, 2, 4, 4);
                core::ptr::drop_in_place<alloc::vec::splice::Splice<core::iter::adapters::copied::Copied<core::slice::iter::Iter<u32>>>>(&v7);
                v4 = v3;
                v2 = v1;
            }
            v10 = v2;
            v11 = v4;
            if (v10.starts_with(v11, "/dirname", 1))
            {
                do
                {
                    v7.splice(&v0, 0, 1, 4, 4);
                    core::ptr::drop_in_place<alloc::vec::splice::Splice<core::iter::adapters::copied::Copied<core::slice::iter::Iter<u32>>>>(&v7);
                } while (v1.starts_with(v3, "/dirname", 1));
            }
            v7.to_vec(a3, a4);
            v6 = *((long long *)&v8);
            v5 = v7;
            fish::path::append_path_component(&v5, v1, v3);
            a0->field_10 = v6;
            *((void*)&a0->field_0) = v5;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
            return a0;
        }
        a0.to_vec(a1, a2);
        return a0;
    }
    v7.to_vec(a1, a2);
    a0->field_10 = *((long long *)&v8);
    *((void*)&a0->field_0) = v7;
    return a0;
}
