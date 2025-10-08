long long uu_cut::cut_fields_implicit_out_delim(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5, unsigned int a6)
{
    char v0;  // [bp-0xb1]
    unsigned long long v1;  // [bp-0xb0]
    int v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa8]
    char *v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x98]
    unsigned int v6;  // [bp-0x90], Other Possible Types: unsigned long
    char *v7;  // [bp-0x88]
    unsigned long long v8;  // [bp-0x78]
    unsigned long long v9;  // [bp-0x70]
    int v10;  // [bp-0x68], Other Possible Types: char
    unsigned long long v11;  // [bp-0x58]
    char v12;  // [bp-0x50]
    unsigned long long v13;  // rax
    void* v14;  // rax

    v8 = a3;
    v9 = a4;
    v0 = a5;
    v12.with_capacity(a0);
    v3 = a2;
    v4 = &v0;
    v5 = a1;
    v6 = &vvar_6;
    v7 = &v8;
    v13 = v12.for_byte_record_with_terminator(a6, &v3);
    if (v13)
    {
        v1 = v13;
        v10.spec_to_string(&v1);
        v6 = 1;
        v2 = v10;
        v5 = v11;
        v14 = v3.new();
        core::ptr::drop_in_place<std::io::error::Error>(v1);
    }
    else
    {
        v14 = 0;
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
    }
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v12);
    return v14;
}
