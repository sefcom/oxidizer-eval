long long uu_cut::cut_fields_explicit_out_delim(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5, unsigned int a6, unsigned int a7)
{
    char v0;  // [bp-0xc1]
    unsigned long long v1;  // [bp-0xc0]
    int v2;  // [bp-0xb8]
    unsigned long long v3;  // [bp-0xb8]
    char *v4;  // [bp-0xb0]
    unsigned long long v5;  // [bp-0xa8]
    unsigned int v6;  // [bp-0xa0], Other Possible Types: unsigned long
    char *v7;  // [bp-0x98]
    char v8;  // [bp-0x90]
    unsigned long long v9;  // [bp-0x78]
    unsigned long long v10;  // [bp-0x70]
    int v11;  // [bp-0x68], Other Possible Types: char
    unsigned long long v12;  // [bp-0x58]
    char v13;  // [bp-0x50], Other Possible Types: unsigned long long
    char v14;  // [bp-0x48]
    unsigned long long v15;  // rax
    void* v16;  // rax

    v9 = a3;
    v10 = a4;
    v0 = a5;
    v13.with_capacity(a0);
    v3 = a2;
    v4 = &v0;
    v5 = a1;
    v6 = &vvar_6;
    v7 = &v9;
    memcpy(&v8, &a7, 16);
    v15 = v13.for_byte_record_with_terminator(a6, &v3);
    if (v15)
    {
        v1 = v15;
        v11.spec_to_string(&v1);
        v6 = 1;
        v2 = v11;
        v5 = v12;
        v16 = v3.new();
        core::ptr::drop_in_place<std::io::error::Error>(v1);
    }
    else
    {
        v16 = 0;
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
    }
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(v13, *((long long *)&v14));
    return v16;
}
