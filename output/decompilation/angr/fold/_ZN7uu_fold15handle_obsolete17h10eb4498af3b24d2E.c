long long uu_fold::handle_obsolete(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    struct_0 *v0;  // [bp-0xa8]
    unsigned int v1;  // [bp-0x90]
    unsigned long v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    unsigned long v4;  // [bp-0x80]
    int v5;  // [bp-0x78], Other Possible Types: char
    unsigned long long v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    void* v9;  // [bp-0x50]
    char v10;  // [bp-0x48]
    char v11;  // [bp-0x38]
    unsigned long long v13;  // rax
    unsigned long long v14[3];  // rdx
    unsigned long long v15[3];  // r14
    unsigned long long v16[3];  // r14
    unsigned long long v17;  // rax
    unsigned long long v18;  // rbx
    unsigned long long v19;  // rax

    v7 = a1;
    v8 = a1 + a2 * 24;
    v9 = 0;
    v13 = v7.next();
    if (v14)
    {
        do
        {
            v16 = v15;
            v1 = 0;
            v17 = ::0x49fc80::core::char::methods::encode_utf8_raw(&v1);
            if ((char)core::slice::<impl [T]>::starts_with(v16[1], v16[2], v17, 1))
            {
                v2 = v16[1];
                v3 = v16[2] + v16[1];
                if (!v2.advance_by() && ((unsigned int)v14 - 48 < 10 & (int)core::str::validations::next_code_point(&v2)))
                {
                    v10.to_vec(a1, a2);
                    v2.remove(&v10, v13, &g_5769f8);
                    ::0x49f1a0::core::ptr::drop_in_place<alloc::string::String>(&v2);
                    v6 = *((long long *)&v11);
                    memcpy(&v5, &v10, 16);
                    v18 = v16[2];
                    v19 = v16[1].get(v18);
                    if (!v19)
                        core::str::slice_error_fail(v16[1], v18, 1, v18, &g_576a10); /* do not return */
                    v2.to_vec(v19, a2);
                    v0->field_28 = v4;
                    *((int128_t *)&v0->field_18) = *((int128_t *)&v2);
                    v0->field_10 = v6;
                    *((void*)&v0->field_0) = v5;
                    return a0;
                }
            }
            v13 = v7.next();
            v14 = v14;
        } while (v14);
    }
    v0.to_vec(a1, a2);
    *((unsigned long long *)&v0->field_18) = 0x8000000000000000;
    return a0;
}
