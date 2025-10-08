long long uu_cp::platform::linux::sparse_copy(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x100]
    unsigned int v1;  // [bp-0xfc]
    unsigned long v2;  // [bp-0xf8]
    unsigned long long v3;  // [bp-0xf0]
    unsigned long long v4;  // [bp-0xe8]
    char v5;  // [bp-0xe0], Other Possible Types: unsigned int
    unsigned int v6;  // [bp-0xdc]
    unsigned long v7;  // [bp-0xd8], Other Possible Types: unsigned long long
    char v8;  // [bp-0xd0]
    unsigned long v9;  // [bp-0x90]
    char v10;  // [bp-0x88]
    void* v12;  // r13
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax

    v5.open(a0, a1);
    if (v5 == 1)
        return v7;
    v0 = v6;
    v5.create(a2, a3);
    if ((v5 & 1))
    {
        core::ptr::drop_in_place<std::fs::File>(v0);
        return v14;
    }
    v1 = v6;
    v5.metadata(&v0);
    if (v5 != 2)
    {
        v2 = v9;
        v9 >> 63.unwrap(&g_55e810);
        if (ftruncate(v1, v2) < 0)
        {
            v14 = *(__errno_location()) * 0x100000000 | 2;
            core::ptr::drop_in_place<std::fs::File>(v1);
            core::ptr::drop_in_place<std::fs::File>(v0);
            return v14;
        }
        v5.metadata(&v1);
        if (v5 != 2)
        {
            v5.from_elem(*((long long *)&v10), &g_55e828);
            if (v2)
            {
                v12 = 0;
                do
                {
                    v14 = v13;
                    if (((char)v0.read(v7, *((long long *)&v8)) & 1))
                    {
LABEL_49b759:
                        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(*((long long *)&v5), v7);
                        core::ptr::drop_in_place<std::fs::File>(v1);
                        core::ptr::drop_in_place<std::fs::File>(v0);
                        return v14;
                    }
                    v3 = 0.index(v13, v7, *((long long *)&v8), &g_55e840);
                    v4 = v3 + v13;
                    if (!v3.any())
                        continue;
                    v15 = v1.write_all_at(v3, v13, v12);
                    if (v15)
                    {
                        v14 = v15;
                        goto LABEL_49b759;
                    }
                    v12 += v13;
                } while (v12 < v2);
            }
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(*((long long *)&v5), v7);
            core::ptr::drop_in_place<std::fs::File>(v1);
            core::ptr::drop_in_place<std::fs::File>(v0);
            return 0;
        }
    }
    core::ptr::drop_in_place<std::fs::File>(v1);
    core::ptr::drop_in_place<std::fs::File>(v0);
    return v14;
}
