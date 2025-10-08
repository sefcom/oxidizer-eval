long long fish::wildcard::expander::WildCardExpander::expand_intermediate_segment(void* a0, unsigned long long a1, unsigned long long a2, void* a3, unsigned long long a4, unsigned long long a5, unsigned int *a6, unsigned long long a7, unsigned long long a8, unsigned long long a9, char a10)
{
    unsigned int v0;  // [bp-0xb4]
    unsigned long long v1;  // [bp-0xb0]
    unsigned int v2;  // [bp-0xb0]
    unsigned long long v3;  // [bp-0xa0]
    int v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x90]
    unsigned long long v6;  // [bp-0x88]
    unsigned long v7;  // [bp-0x80]
    unsigned long v8;  // [bp-0x78]
    char v9;  // [bp-0x60]
    unsigned long long v10;  // [bp-0x58]
    unsigned long long v11;  // [bp-0x50]
    char *v12;  // [bp-0x48]
    unsigned long long v13;  // [bp-0x38]
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    struct_0 *v17;  // rdx
    unsigned long long v18;  // rax

    if (a7)
    {
        v0 = 0;
        v14 = a0.interrupted_or_overflowed();
        if ((char)v14)
            return v14;
    }
    else
    {
        v2 = 64994;
        v15 = v2.slice_contains(a4, a5);
        v0 = (unsigned int)v15 & 0xffffff00 | (char)v15 ^ 1;
        v16 = a0.interrupted_or_overflowed();
        if ((char)v16)
            return v16;
    }
    v8 = a0 + 48;
    v12 = &v9;
    v7 = a10;
    while (true)
    {
        v1 = a3.next();
        if (v1 == 2 || ((char)v1 & 1))
            break;
        core::ptr::drop_in_place<core::option::Option<core::result::Result<&fish::wutil::dir_iter::DirEntry,std::io::error::Error>>>(&v1);
        if ((char)fish::wildcard::wildcard_match(v17, a4, a5) && v17.is_dir())
        {
            if (!(char)v0 || v17->field_40 == 2 || (v17->field_40 & 1))
            {
                v1.dev_inode(v17);
                if (((char)v1 & 1))
                {
                    v13 = v3;
                    if (!(char)v8.insert(v17, v13))
                    {
                        v1.to_vec(a1, a2);
                        (char)v4.add(&v1, v17->field_8, v17->field_10);
                        v9.add(&(char)v4, "/", 1);
                        v1.to_vec(a8, a9);
                        v6 = v3;
                        *((int128_t *)&v4) = *((int128_t *)&v1);
                        v1.add(&(char)v4, a4, a5);
                        (char)v4.add(&v1, "/", 1);
                        a0.expand(v10, v11, a6, a7, v5, v6, v7);
                        v8.remove(&v17);
                        goto LABEL_1427490;
                    }
                }
            }
            else
            {
                v1.to_vec(a1, a2);
                (char)v4.add(&v1, v17->field_8, v17->field_10);
                v9.add(&(char)v4, "/", 1);
                v1.to_vec(a8, a9);
                v6 = v3;
                *((int128_t *)&v4) = *((int128_t *)&v1);
                v1.add(&(char)v4, a4, a5);
                (char)v4.add(&v1, "/", 1);
                a0.expand(v10, v11, a6, a7, v5, v6, v7);
LABEL_1427490:
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v4);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
            }
        }
        v18 = a0.interrupted_or_overflowed();
        if ((char)v18)
            return v18;
    }
    return (unsigned long long)core::ptr::drop_in_place<core::option::Option<core::result::Result<&fish::wutil::dir_iter::DirEntry,std::io::error::Error>>>(&v1);
}
