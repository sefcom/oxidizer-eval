long long uu_cut::cut_fields_explicit_out_delim(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5, unsigned int a6, unsigned int a7)
{
    char v0;  // [bp-0xc1]
    unsigned long long v1;  // [bp-0xc0]
    unsigned long long v2;  // [bp-0xb8]
    char *v3;  // [bp-0xb0]
    unsigned long long v4;  // [bp-0xa8]
    unsigned int v5;  // [bp-0xa0], Other Possible Types: unsigned long
    char *v6;  // [bp-0x98]
    char v7;  // [bp-0x90]
    unsigned long long v8;  // [bp-0x78]
    unsigned long long v9;  // [bp-0x70]
    char v10;  // [bp-0x68]
    unsigned long long v11;  // [bp-0x58]
    char v12;  // [bp-0x50]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax

    v8 = a3;
    v9 = a4;
    v0 = a5;
    v12.with_capacity(0x2000, a0);
    v2 = a2;
    v3 = &v0;
    v4 = a1;
    v5 = &vvar_6;
    v6 = &v8;
    memcpy(&v7, &vvar_7, 16);
    v13 = v12.for_byte_record_with_terminator(a6, &v2);
    if (!v13)
    {
        ::0x4ac0b0::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
        ::0x4ac0c0::core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v12);
        return 0;
    }
    v1 = v13;
    v10.spec_to_string(&v1);
    v5 = 1;
    memcpy(&v2, &v10, 16);
    v4 = v11;
    v14 = v2.new();
    ::0x4ab760::core::ptr::drop_in_place<std::io::error::Error>(v1);
    ::0x4ac0c0::core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v12);
    return v14;
}
