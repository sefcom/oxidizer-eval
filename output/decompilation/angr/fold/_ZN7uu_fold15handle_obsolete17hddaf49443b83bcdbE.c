long long uu_fold::handle_obsolete(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x90]
    unsigned long v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    unsigned long v3;  // [bp-0x80]
    void* v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    void* v7;  // [bp-0x50]
    int v8;  // [bp-0x48], Other Possible Types: char
    char v9;  // [bp-0x38]
    unsigned long long v11;  // rax
    unsigned long long v12[3];  // rdx
    unsigned long long v13[3];  // r12
    unsigned long long v14[3];  // r12
    unsigned long long v15;  // rbx
    unsigned long long v16;  // rax

    v5 = a1;
    v6 = a1 + a2 * 24;
    v7 = 0;
    v11 = v5.next();
    if (v12)
    {
        do
        {
            v14 = v13;
            v0 = 0;
            if ((char)core::slice::<impl [T]>::starts_with(v14[1], v14[2], ::0x459570::core::char::methods::encode_utf8_raw(&v0)))
            {
                v1 = v14[1];
                v2 = v14[2] + v14[1];
                if (!v1.advance_by() && ((char)core::str::validations::next_code_point(&v1) & 1) && (unsigned int)v12 - 48 < 10)
                {
                    v8.to_vec(a1, a2);
                    v1.remove(&v8, v11);
                    core::ptr::drop_in_place<alloc::string::String>(v1, v2);
                    v15 = v14[2];
                    v16 = v14[1].get(v15);
                    if (!v16)
                        core::str::slice_error_fail(v14[1], v15, 1, v15, &g_4e6ac8); /* do not return */
                    v1.to_vec(v16, a2);
                    *((unsigned long *)&v4[40]) = v3;
                    *((int128_t *)&v4[24]) = *((int128_t *)&v1);
                    *((long long *)&v4[16]) = *((long long *)&v9);
                    *(v4) = v8;
                    return a0;
                }
            }
            v11 = v5.next();
            v12 = v12;
        } while (v12);
    }
    v4.to_vec(a1, a2);
    *((unsigned long long *)&v4[24]) = 0x8000000000000000;
    return a0;
}
