long long uu_tail::tail_stdin(char a0[77], unsigned long long a1, unsigned long long a2[3], char a3[143])
{
    int v0;  // [bp-0xd8], Other Possible Types: char
    char v1;  // [sp-0xc8]
    char v2;  // [bp-0xc4]
    char v3;  // [bp-0xb8]
    struct struct_0 v4[16];  // [bp-0xa8]
    unsigned long long v5;  // [bp-0xa0]
    unsigned long long v6;  // [bp-0x98]
    unsigned long long v7;  // [bp-0x88]
    unsigned long long v8;  // [bp-0x80]
    int v9;  // [bp-0x78]
    char v10;  // [bp-0x68], Other Possible Types: unsigned long long
    char v11;  // [bp-0x58]
    int v12;  // [bp-0x40], Other Possible Types: char
    char v13;  // [bp-0x30]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rbx
    unsigned long long v18;  // rax
    void* v19;  // r13
    char *v20;  // rdi

    v12.resolve(a2);
    if ((char)(((0 ^ *((long long *)&v12)) & (0 ^ -(*((long long *)&v12)))) >> 63))
    {
        a1.print_input(a2);
        v0.with_capacity(0x2000, std::io::stdio::stdin());
        v16 = (unsigned long long)uu_tail::unbounded_tail(&v0, a0);
        if (v16)
        {
            v17 = v16;
            core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(&v0);
        }
        else
        {
            memcpy(&v11, &v3, 16);
            memcpy(&v10, &v1, 16);
            v9 = v0;
            v18 = a3.add_stdin(a2[1], a2[2], v9.new(), &g_636540, 1);
            if (v18)
                return v18;
            goto LABEL_4f463a;
        }
    }
    else
    {
        v6 = *((long long *)&v13);
        *((void*)&v4->field_0) = v12;
        v0.stdin();
        if (v2 == 2)
        {
            ::0x4f2cd0::core::ptr::drop_in_place<core::result::Result<same_file::Handle,std::io::error::Error>>(&v0);
            v19 = 0;
        }
        else
        {
            v10 = *((long long *)&v1);
            v9 = v0;
            v7 = v9.as_file_mut().seek(2, 0);
            v8 = v19;
            if (v7)
            {
                ::0x4f2c80::core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v7);
                v19 = 0;
            }
            else
            {
                ::0x4f2c80::core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v7);
            }
            ::0x4f2880::core::ptr::drop_in_place<same_file::Handle>(&v9);
            if (v2 == 2)
                ::0x4f2cd0::core::ptr::drop_in_place<core::result::Result<same_file::Handle,std::io::error::Error>>(&v0);
        }
        v17 = uu_tail::tail_file(a0, a1, a2, v5, v6, a3, v19);
        v20 = &(char)v4;
        if (!v17)
        {
            ::0x4f2890::core::ptr::drop_in_place<std::path::PathBuf>(v20);
LABEL_4f463a:
            return 0;
        }
        ::0x4f2890::core::ptr::drop_in_place<std::path::PathBuf>(v20);
    }
    return v17;
}
