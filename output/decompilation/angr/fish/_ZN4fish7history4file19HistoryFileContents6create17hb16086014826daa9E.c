long long fish::history::file::HistoryFileContents::create(unsigned long long a0[2])
{
    unsigned long long v0;  // [bp-0x50]
    char v1;  // [bp-0x48], Other Possible Types: unsigned int
    unsigned int v2;  // [bp-0x44]
    unsigned long long v3;  // [bp-0x40]
    unsigned long long v4[3];  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    char v6;  // [bp-0x20]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx
    unsigned long v10;  // rdx
    unsigned long long v12;  // rdx

    v8 = vvar_45{reg 64}.seek(1, 0);
    if (((char)v8 & 1))
    {
        a0[1] = v9;
    }
    else if (!v10)
    {
        v8 = 40.new("History file is empty. Cannot create memory mapping with length 0.File should never be empty", 66);
        a0[1] = v8;
    }
    else if (fish::history::file::should_mmap())
    {
        v4.map_file(*((int *)vvar_45{reg 64}), v10);
        if (!((char)v4[0] & 1))
        {
            v12 = *((long long *)&v6);
            return a0.try_from(v3, *((long long *)&v6));
        }
        v0 = v5;
        v8 = std::io::error::repr_bitpacked::decode_repr(&v1, v0);
        if (!v1 && v2 == 19)
        {
            fish::history::file::HistoryFileContents::create::{{closure}}(&v1, vvar_45{reg 64}, v10);
            if (v1 != 1)
            {
                core::ptr::drop_in_place<std::io::error::Error>(&v0);
                v3 = v3;
                v12 = v12;
                return a0.try_from(v3, v12);
            }
            a0[1] = v3;
            a0[0] = 1;
            return (unsigned long long)core::ptr::drop_in_place<std::io::error::Error>(&v0);
        }
        a0[1] = v0;
    }
    else
    {
        v8 = fish::history::file::HistoryFileContents::create::{{closure}}(&v1, vvar_45{reg 64}, v10);
        if (!(v1 & 1))
        {
            v3 = v3;
            v12 = v12;
            return a0.try_from(v3, v12);
        }
        a0[1] = v3;
    }
    a0[0] = 1;
    return v8;
}
