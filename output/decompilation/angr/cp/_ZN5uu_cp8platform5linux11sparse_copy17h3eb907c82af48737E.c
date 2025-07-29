long long uu_cp::platform::linux::sparse_copy(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0xf8]
    unsigned int v1;  // [bp-0xf4]
    unsigned long long v2;  // [bp-0xf0]
    unsigned long long v3;  // [bp-0xe8]
    char v4;  // [bp-0xe0], Other Possible Types: unsigned int
    unsigned int v5;  // [bp-0xdc]
    unsigned long v6;  // [bp-0xd8], Other Possible Types: unsigned long long
    int v7;  // [bp-0xd0]
    unsigned int v8;  // [bp-0x90]
    char v9;  // [bp-0x88]
    void* v11;  // r15
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rax

    v4.open(a0, a1);
    if ((v4 & 1))
        return v6;
    v0 = v5;
    v4.create(a2, a3);
    if ((v4 & 1))
    {
        ::0x4eb030::core::ptr::drop_in_place<std::fs::File>(v0);
        return v13;
    }
    v1 = v5;
    v4.metadata(&v0);
    if (v4 != 2)
    {
        v8 >> 63.unwrap(&g_5fbdc0);
        if (ftruncate(v1, v8) < 0)
        {
            v13 = (unsigned int)std::sys::pal::unix::os::errno() * 0x100000000 | 2;
            ::0x4eb030::core::ptr::drop_in_place<std::fs::File>(v1);
            ::0x4eb030::core::ptr::drop_in_place<std::fs::File>(v0);
            return v13;
        }
        v4.metadata(&v1);
        if (v4 != 2)
        {
            v4.from_elem(*((long long *)&v9), &g_5fbdd8);
            if (v8)
            {
                v11 = 0;
                do
                {
                    v13 = v12;
                    if (v0.read(v6, (long long)v7))
                    {
LABEL_4ebc35:
                        ::0x4eb060::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v4);
                        ::0x4eb030::core::ptr::drop_in_place<std::fs::File>(v1);
                        ::0x4eb030::core::ptr::drop_in_place<std::fs::File>(v0);
                        return v13;
                    }
                    v2 = v12.index(v6, (long long)v7);
                    v3 = v2 + v12;
                    if (!v2.any())
                        continue;
                    v14 = v1.write_all_at(v2, v12, v11);
                    if (v14)
                    {
                        v13 = v14;
                        goto LABEL_4ebc35;
                    }
                    v11 += v12;
                } while (v11 < v8);
            }
            ::0x4eb060::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v4);
            ::0x4eb030::core::ptr::drop_in_place<std::fs::File>(v1);
            ::0x4eb030::core::ptr::drop_in_place<std::fs::File>(v0);
            return 0;
        }
    }
    ::0x4eb030::core::ptr::drop_in_place<std::fs::File>(v1);
    ::0x4eb030::core::ptr::drop_in_place<std::fs::File>(v0);
    return v13;
}
