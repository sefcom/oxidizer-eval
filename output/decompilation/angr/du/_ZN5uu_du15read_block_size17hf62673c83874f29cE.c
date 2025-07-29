long long uu_du::read_block_size(void* *a0, unsigned long long a1, unsigned long long a2)
{
    struct_0 *v0;  // [bp-0xd0]
    char v1;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xc0]
    char v3;  // [bp-0xb8]
    int v4;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xa0]
    char v6;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x90]
    unsigned long long v8;  // [bp-0x88]
    unsigned long long v9;  // [bp-0x80]
    void* v10;  // [bp-0x78]
    unsigned long long v11;  // [bp-0x70]
    int v12;  // [bp-0x68]
    unsigned long long v13;  // [bp-0x60]
    unsigned long long v14;  // [bp-0x58]
    unsigned long long v15;  // [bp-0x50]
    int v16;  // [bp-0x48]
    char v17;  // [bp-0x38]
    unsigned long long v19;  // rcx
    void* v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rdx
    void* *v23;  // rax

    if (a1)
    {
        uucore::features::parser::parse_size::parse_size_u64(&v1, a1, a2);
        if (*((int *)&v1) == 4)
        {
            v19 = v2;
            v20 = 0;
        }
        else
        {
            memcpy(&v6, &v3, 16);
            *((int128_t *)&v4) = *((int128_t *)&v1);
            v20 = uu_du::read_block_size::{{closure}}(a1, a2, &(char)v4);
            v19 = &g_5e4938;
        }
        v0->field_8 = v19;
        v0->field_0 = v20;
        return v0;
    }
    else
    {
        v4 = "DU_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEPOSIXLY_CORRECTblock-size\nsrc/uu/du/src/du.rs";
        v5 = 13;
        v6 = "BLOCK_SIZEBLOCKSIZEPOSIXLY_CORRECTblock-size\nsrc/uu/du/src/du.rs";
        v7 = 10;
        v8 = "BLOCKSIZEPOSIXLY_CORRECTblock-size\nsrc/uu/du/src/du.rs";
        v9 = 9;
        v10 = 0;
        v11 = 3;
        while (true)
        {
            v21 = v4.next();
            if (!v21)
                break;
            std::env::var(&v15, v21, a2);
            if (((char)v15 & 1))
            {
                core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v15);
            }
            else
            {
                v22 = *((long long *)&v17);
                v14 = *((long long *)&v17);
                v12 = v16;
                uucore::features::parser::parse_size::parse_size_u64(&v1, v13, v22);
                if ((int)v1 != 4)
                {
                    core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v1);
                    ::0x4d9e40::core::ptr::drop_in_place<alloc::string::String>(&(char)v12);
                    if (((char)v15 & 1))
                        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v15);
                }
                else
                {
                    v0->field_8 = v2;
                    v0->field_0 = 0;
                    core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v1);
                    ::0x4d9e40::core::ptr::drop_in_place<alloc::string::String>(&(char)v12);
                    if (((char)v15 & 1))
                        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v15);
                    core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>();
                    return a0;
                }
            }
        }
        core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>();
        std::env::var(&v4, "POSIXLY_CORRECTblock-size\nsrc/uu/du/src/du.rs", 15);
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v4);
        if (v4)
        {
            v23 = a0;
            v0->field_8 = 0x400;
        }
        else
        {
            v23 = a0;
            v0->field_8 = 0x200;
        }
        *(v23) = 0;
        return v23;
    }
}
