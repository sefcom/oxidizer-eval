long long just::function::choose(unsigned long long a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x121]
    void* v1;  // [bp-0x120]
    unsigned int v2;  // [bp-0x118]
    char v3;  // [bp-0x110]
    char *v4;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xf8]
    char *v6;  // [bp-0xf0]
    unsigned long long v7;  // [bp-0xe8]
    char *v8;  // [bp-0xe0], Other Possible Types: unsigned long long
    char *v9;  // [bp-0xd8], Other Possible Types: unsigned long long
    void* v10;  // [bp-0xd0], Other Possible Types: char *
    unsigned long long v11;  // [bp-0xc8]
    void* v12;  // [bp-0xc0]
    unsigned long long v13;  // [bp-0xb0]
    unsigned long long v14;  // [bp-0xa8]
    char v15;  // [bp-0x98]
    char v16;  // [bp-0x97]
    unsigned long long v17;  // [bp-0x90]
    unsigned long long v18;  // [bp-0x88]
    unsigned long long v19;  // [bp-0x80]
    char v20;  // [bp-0x78], Other Possible Types: unsigned long long
    char v21;  // [bp-0x70]
    int v22;  // [bp-0x48], Other Possible Types: char
    char v23;  // [bp-0x38]
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rdx
    int v29;  // xmm0

    v18 = a2;
    v19 = a3;
    v20.with_capacity_and_hasher(a5, std::thread::local::LocalKey<T>::with(), v26);
    v13 = a4;
    v14 = a5 + a4;
    if (((char)core::str::validations::next_code_point(&v13) & 1))
    {
        do
        {
            v2 = v27;
            if ((char)v20.insert(v27 & 4294967295))
            {
                v4 = &v2;
                v5 = <char as core::fmt::Display>::fmt;
                v8 = &g_82fdb0;
                v9 = 2;
                v12 = 0;
                v10 = &v4;
                v11 = 1;
                v22.map_or_else(0, a2, &v8);
                *((long long *)&v1[24]) = *((long long *)&v23);
                v1[8] = v22;
                *((unsigned long long *)v1) = 1;
                core::ptr::drop_in_place<std::collections::hash::set::HashSet<char>>(v20, *((long long *)&v21));
                return a0;
            }
        } while (((char)core::str::validations::next_code_point(&v13) & 1));
    }
    v2.collect(a4, v14);
    ::0x5f2c10::core::num::<impl usize>::from_ascii_radix(&v15, a2, a3);
    if (v15)
    {
        v0 = v16;
        v4 = &v18;
        v5 = <&T as core::fmt::Display>::fmt;
        v6 = &v0;
        v7 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
        v8 = &g_82fdd0;
        v9 = 2;
        v12 = 0;
        v10 = &v4;
        v11 = 2;
        v13.map_or_else(0, a2, &v8);
        if (!((char)(((0 ^ v13) & (0 ^ -(v13))) >> 63)))
        {
            v29 = *((int128_t *)&v14);
            *((unsigned long long *)&v1[8]) = v13;
            v1[16] = v29;
            *((unsigned long long *)v1) = 1;
            core::ptr::drop_in_place<alloc::vec::Vec<u32>>(*((long long *)&v2), *((long long *)&v3));
            core::ptr::drop_in_place<std::collections::hash::set::HashSet<char>>(v20, *((long long *)&v21));
            return a0;
        }
        v14 = v14;
    }
    else
    {
        v14 = v17;
    }
    v4 = rand::rngs::thread::rng();
    v10 = 0;
    v11 = v14;
    v8 = &v2;
    v9 = &v4;
    a0.collect(&v8);
    core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v4);
    core::ptr::drop_in_place<alloc::vec::Vec<u32>>(*((long long *)&v2), *((long long *)&v3));
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<char>>(v20, *((long long *)&v21));
    return a0;
}
