void bat::pager::get_pager(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xd8]
    unsigned long long v1[3];  // [bp-0xd0]
    unsigned long long v2;  // [bp-0xc8]
    void* v3;  // [bp-0xb8]
    unsigned long long v4;  // [bp-0xb0]
    void* v5;  // [bp-0xa8]
    char v6;  // [bp-0xa0]
    char v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x70]
    unsigned long long v9;  // [bp-0x68]
    int v10;  // [bp-0x60], Other Possible Types: char
    int v11;  // [bp-0x50], Other Possible Types: char
    int v12;  // [bp-0x40]
    char v13;  // [bp-0x30]
    unsigned long long v15;  // 4096
    unsigned long long v16;  // 4096
    char v17;  // bpl
    char v18;  // r12b
    unsigned long long v19;  // rax

    std::env::var(&v6, "BAT_PAGERPAGERsrc/preprocessor.rs", 9);
    std::env::var(&v7, "PAGERsrc/preprocessor.rs", 5);
    v15 = a1;
    v16 = a2;
    if (!v15)
    {
        if (!(v6 & 1))
        {
            v17 = 1;
            goto LABEL_83d83e;
        }
        else if ((v7 & 1))
        {
            v17 = 3;
            v16 = 4;
            v15 = "lessOS: ";
LABEL_83d83e:
        }
        else
        {
            v17 = 2;
            v18 = 1;
            v15 = v8;
            v16 = v9;
        }
    }
    shell_words::split(&v10, v15, v16);
    if ((char)(((0 ^ *((long long *)&v10)) & (0 ^ -(*((long long *)&v10)))) >> 63))
    {
        *((unsigned long long *)a0) = 9223372036854775809;
    }
    else
    {
        v2 = *((long long *)&v11);
        v0 = v10;
        if (v2)
        {
            v19 = v1[1].from_bin(v1[2]);
            if (v18 && (v19 & 255) <= 3 && (unsigned int)v19 != 1)
            {
                v3 = 0;
                v4 = 8;
                v5 = 0;
                v10.new("lessOS: ", 4, 8, 0, 1, 2);
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v3);
            }
            else
            {
                v10.new(v1[1], v1[2], v1 + 1, v2 - 1, v19, v17);
            }
            *((long long *)&a0[48]) = *((long long *)&v13);
            a0[32] = v12;
            a0[16] = v11;
            *(a0) = v10;
        }
        else
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v0);
    }
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v7);
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v6);
    return;
}
