long long fish::builtins::string::replace::StringReplacer::interpret_escape(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x38]
    void* v2;  // [bp-0x30]
    unsigned long long v4;  // 4096
    unsigned long long v5;  // r14
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rdx

    v0 = a2.with_capacity_in(4, 4, &g_14bd1e0);
    v2 = 0;
    if (a2)
    {
        v4 = a2;
        do
        {
            v5 = v4;
            if ((int)a1.char_at(v5, 0) != 92)
            {
                v0.push((unsigned int)a1.char_at(v5, 0));
                v7 = 1;
            }
            else if (!((char)fish::common::read_unquoted_escape(a1, v5, &v0, 1, 0) & 1))
            {
                a0->field_0 = 0x8000000000000000;
                return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
            }
            a1 = a1.slice_from(v5, v7);
            v4 = v8;
        } while (v4);
    }
    a0->field_10 = 0;
    a0->field_0 = v0;
    a0->field_8 = v1;
    return v8;
}
