long long uu_comm::OrderChecker::verify_order(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x68]
    char *v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    void* v4;  // [bp-0x50]
    char *v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    unsigned long v7;  // [bp-0x30]
    unsigned long long v8;  // [bp-0x28]
    unsigned long v10;  // r14
    unsigned long v11;  // rdi

    if ((long long)a0[16])
    {
        v10 = (long long)a0[8];
        if ((char)a1.chaining_ge(a2, v10, (long long)a0[16]))
        {
            v0.to_vec(a1, a2);
            v11 = *((long long *)a0);
        }
        else
        {
            if ((char)a0[26] != 1)
            {
                *((int *)&v7) = ((char)a0[24] ? "2" : "12");
                v8 = 1;
                v5 = &v7;
                v6 = <&T as core::fmt::Display>::fmt;
                v0 = &g_4e0c58;
                v1 = 2;
                v4 = 0;
                v2 = &v5;
                v3 = 1;
                std::io::stdio::_eprint(&v0);
                *((char *)&a0[26]) = 1;
            }
            v0.to_vec(a1, a2);
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(*((long long *)a0), v10);
            *((char **)&a0[16]) = v2;
            *((int128_t *)a0) = *((int128_t *)&v0);
            return (char)a0[25] ^ 1;
        }
    }
    else
    {
        (char)v0.to_vec(a1, a2);
        v11 = *((long long *)a0);
        v10 = (long long)a0[8];
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v11, v10);
    *((char **)&a0[16]) = v2;
    *((int128_t *)a0) = *((int128_t *)&v0);
    return v2 & 0xffffffffffffff00 | 1;
}
