long long fish::reader::Reader::flash(void* a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x138]
    int v1;  // [bp-0x130], Other Possible Types: char
    unsigned long v2;  // [bp-0x120]
    unsigned long long v3;  // [bp-0x118]
    unsigned int v4;  // [bp-0x110]
    char v5;  // [bp-0x108]
    unsigned long long v6;  // [bp-0xb8]
    char v7;  // [bp-0xb0]
    unsigned long long v9;  // rax
    unsigned int v10;  // edx
    unsigned int v11;  // edx
    unsigned long long v12;  // rbp
    unsigned long long v13;  // 4096
    unsigned long long v14;  // rax
    unsigned long v15;  // rdx
    void* v16;  // rcx
    unsigned long v17;  // r15

    v9 = std::time::Instant::now();
    v3 = v9;
    v4 = v10;
    if ((int)a0[2080] != 0x3b9aca00)
    {
        v11 = v10;
        v9 = v9;
        if ((char)fish::reader::Reader::flash::{{closure}}(&v3, (long long)a0[2072], (int)a0[2080]))
        {
            *((unsigned long long *)&a0[2072]) = v9;
            *((unsigned int *)&a0[2080]) = v11;
            return v9;
        }
    }
    if (a2 >= a3 && (char)a0[2119] != 1)
    {
        *((unsigned long long *)&a0[2072]) = v9;
        *((unsigned int *)&a0[2080]) = v11;
        return v9;
    }
    v5.make_layout_data(a0);
    v12 = *((long long *)&v7);
    v1.clone(v6, v12);
    v13 = a3;
    if (v13 > v12)
    {
        a2 = a2.min(v12);
        v13 = v12;
    }
    v14 = a2.index_mut(v13, v6, v12, &g_14e08d8);
    if (v15)
    {
        v16 = 0;
        do
        {
            *((unsigned short *)(2 + v14 + (char *)v16)) = 2056;
            v16 += 4;
        } while (v15 * 4 != v16);
    }
    v17 = a0 + 136;
    core::ptr::drop_in_place<fish::reader::LayoutData>(v17);
    memcpy(v17, &v5, 216);
    a0.paint_layout(v0, "f", 5, 0);
    *((char *)&a0[2119]) = 0;
    std::thread::sleep(0, 0x5f5e100);
    core::ptr::drop_in_place<alloc::vec::Vec<fish::color::Color>>((long long)a0[208], (long long)a0[216]);
    *((unsigned long *)&a0[224]) = v2;
    a0[208] = v1;
    a0.paint_layout(v0, "u", 7, 0);
    v9 = std::time::Instant::now();
    *((unsigned long long *)&a0[2072]) = v9;
    *((unsigned int *)&a0[2080]) = v11;
    return v9;
}
