long long uu_cut::cut_bytes(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_0 *a4)
{
    char v0;  // [bp-0xb1]
    unsigned long long v1;  // [bp-0xb0]
    int v2;  // [bp-0xa8]
    char *v3;  // [bp-0xa8]
    unsigned long long v4;  // [bp-0xa0]
    unsigned long v5;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned int v6;  // [bp-0x90], Other Possible Types: unsigned long
    struct_0 *v7;  // [bp-0x88]
    char *v8;  // [bp-0x80]
    unsigned long long v9;  // [bp-0x78]
    unsigned long long v10;  // [bp-0x70]
    int v11;  // [bp-0x68], Other Possible Types: char
    unsigned long long v12;  // [bp-0x58]
    char v13;  // [bp-0x50]
    unsigned long v15;  // rax
    unsigned long v16;  // rax
    unsigned long long v18;  // rax
    void* v19;  // rax

    v9 = a2;
    v10 = a3;
    v0 = a4->field_28;
    v13.with_capacity(a0);
    v15 = a4->field_0;
    if (v15)
        v16 = v15;
    else
        v16 = "\t-: \n: Is a directory\ninvalid input: Only one of --delimiter (-d) or -w option can be specifiedthe delimiter must be a single characterwhitespace-delimiteddelimiter''";
    v3 = &v9;
    v4 = a1;
    v5 = v16;
    *((int *)&v6) = (v15 ? a4->field_8 : 1);
    v7 = a4;
    v8 = &v0;
    v18 = v13.for_byte_record(v0, &v3);
    if (v18)
    {
        v1 = v18;
        v11.spec_to_string(&v1);
        v6 = 1;
        v2 = v11;
        v5 = v12;
        v19 = v3.new();
        core::ptr::drop_in_place<std::io::error::Error>(v1);
    }
    else
    {
        v19 = 0;
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
    }
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v13);
    return v19;
}
