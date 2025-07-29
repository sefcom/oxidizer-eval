long long uu_cut::cut_fields_explicit_out_delim(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5, unsigned int a6, unsigned int a7)
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
    char v10;  // [bp-0x68], Other Possible Types: unsigned long long
    char v11;  // [bp-0x60]
    char v12;  // [bp-0x38]
    char v13;  // [bp-0x28]
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax

    v8 = a3;
    v9 = a4;
    v0 = a5;
    v10.with_capacity(0x2000, a0);
    v2 = a2;
    v3 = &v0;
    v4 = a1;
    v5 = &vvar_6;
    v6 = &v8;
    memcpy(&v7, &vvar_7, 16);
    v14 = v10.for_byte_record_with_terminator(a6, &v2);
    if (!v14)
    {
        ::0x4ac0b0::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
        ::0x4ac220::core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(v10, *((long long *)&v11));
        return 0;
    }
    v1 = v14;
    v12.spec_to_string(&v1);
    v5 = 1;
    memcpy(&v2, &v12, 16);
    v4 = *((long long *)&v13);
    v15 = v2.new();
    ::0x4ab760::core::ptr::drop_in_place<std::io::error::Error>(v1);
    ::0x4ac220::core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(v10, *((long long *)&v11));
    return v15;
}
