long long uu_tail::tail_stdin(char a0[77], unsigned long long a1, unsigned long long a2[3], void* a3)
{
    unsigned long long v0;  // [bp-0xc8]
    int v1;  // [bp-0xc0], Other Possible Types: char
    char v2;  // [sp-0xb0]
    char v3;  // [bp-0xac]
    char v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x90]
    int v6;  // [bp-0x88]
    char v7;  // [bp-0x78], Other Possible Types: unsigned long long
    char v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x58]
    void* v10;  // [bp-0x50]
    char v11;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x40]
    char v13;  // [bp-0x38]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    void* v18;  // r14

    v11.resolve(a2);
    if ((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63))
    {
        a1.print_input(a2[1], a2[2]);
        v1.with_capacity(std::io::stdio::stdin());
        v16 = (unsigned long long)uu_tail::unbounded_tail(&v1, a0);
        if (v16)
        {
            core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(&v1);
        }
        else
        {
            memcpy(&v8, &v4, 16);
            memcpy(&v7, &v2, 16);
            v6 = v1;
            v17 = a3.add_stdin(a2[1], a2[2], v6.new());
            if (v17)
                return v17;
            goto LABEL_4a74c0;
        }
    }
    else
    {
        v0 = v12;
        v5 = *((long long *)&v13);
        v1.stdin();
        if (v3 == 2)
        {
            core::ptr::drop_in_place<core::result::Result<same_file::Handle,std::io::error::Error>>(&v1);
            v18 = 0;
        }
        else
        {
            v7 = *((long long *)&v2);
            v6 = v1;
            v9 = v6.as_file_mut().stream_position();
            v10 = v18;
            if (((char)v9 & 1))
                v18 = 0;
            core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v9);
            core::ptr::drop_in_place<same_file::Handle>(&v6);
            if (v3 == 2)
                core::ptr::drop_in_place<core::result::Result<same_file::Handle,std::io::error::Error>>(&v1);
        }
        v16 = uu_tail::tail_file(a0, a1, a2, v0, v5, a3, v18);
        if (!v16)
        {
            core::ptr::drop_in_place<std::path::PathBuf>(v11, v0);
LABEL_4a74c0:
            return 0;
        }
        core::ptr::drop_in_place<std::path::PathBuf>(v11, v0);
    }
    return v16;
}
