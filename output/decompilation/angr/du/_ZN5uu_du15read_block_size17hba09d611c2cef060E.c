long long uu_du::read_block_size(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xd0]
    unsigned long long v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xc0]
    unsigned long long v3;  // [bp-0xb8]
    void* v4;  // [bp-0xb0]
    unsigned long long v5;  // [bp-0xa8]
    unsigned long long v6;  // [bp-0xa0]
    unsigned long long v7;  // [bp-0x98]
    unsigned long long v8;  // [bp-0x90]
    unsigned long long v9;  // [bp-0x88]
    unsigned long long v10;  // [bp-0x80]
    unsigned long long v11;  // [bp-0x78]
    char v12;  // [bp-0x70]
    char v13;  // [bp-0x68]
    unsigned long long v14;  // [bp-0x50]
    char v15;  // [bp-0x48]
    unsigned long long v17;  // rcx
    void* v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx

    if (a1)
    {
        uucore::features::parser::parse_size::parse_size_u64(&v12, a1, a2);
        if (*((int *)&v12) == 4)
        {
            v17 = *((long long *)&v13);
            v18 = 0;
        }
        else
        {
            v18 = uu_du::read_block_size::{{closure}}(a1, a2, &v12);
            v17 = &g_545bc0;
        }
        a0->field_8 = v17;
        a0->field_0 = v18;
        return a0;
    }
    else
    {
        v4 = 0;
        v5 = 3;
        v6 = "DU_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEPOSIXLY_CORRECTblock-size ignored\nsrc/uu/du/src/du.rscannot read directory cannot access ";
        v7 = 13;
        v8 = "BLOCK_SIZEBLOCKSIZEPOSIXLY_CORRECTblock-size ignored\nsrc/uu/du/src/du.rscannot read directory cannot access ";
        v9 = 10;
        v10 = "BLOCKSIZEPOSIXLY_CORRECTblock-size ignored\nsrc/uu/du/src/du.rscannot read directory cannot access ";
        v11 = 9;
        if (v4.next())
        {
            while (true)
            {
                std::env::var(&v0, v19, v20);
                if (v0)
                {
                    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
                    v19 = v4.next();
                    if (!v19)
                        break;
                }
                else
                {
                    uucore::features::parser::parse_size::parse_size_u64(&v14, v2, v3);
                    if ((int)v14 == 4)
                    {
                        a0->field_8 = *((long long *)&v15);
                        a0->field_0 = 0;
                        core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v14);
                        core::ptr::drop_in_place<alloc::string::String>(&v1);
                        return a0;
                    }
                    core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v14);
                    core::ptr::drop_in_place<alloc::string::String>(&v1);
                    v19 = v4.next();
                    if (!v19)
                        break;
                }
            }
        }
        std::env::var(&v4, "POSIXLY_CORRECTblock-size ignored\nsrc/uu/du/src/du.rscannot read directory cannot access ", 15);
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v4);
        if (!((char)v4 & 1))
        {
            a0->field_8 = 0x200;
            a0->field_0 = 0;
            return a0;
        }
        a0->field_8 = 0x400;
        a0->field_0 = 0;
        return a0;
    }
}
