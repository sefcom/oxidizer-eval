long long uu_cut::cut_bytes(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_0 *a4)
{
    char v0;  // [bp-0xb1]
    unsigned long long v1;  // [bp-0xb0]
    char *v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa0]
    unsigned long v4;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned int v5;  // [bp-0x90], Other Possible Types: unsigned long
    struct_0 *v6;  // [bp-0x88]
    char *v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x78]
    unsigned long long v9;  // [bp-0x70]
    char v10;  // [bp-0x68]
    unsigned long long v11;  // [bp-0x58]
    char v12;  // [bp-0x50]
    unsigned long v14;  // rax
    unsigned long v15;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax

    v8 = a2;
    v9 = a3;
    v0 = a4->field_28;
    v12.with_capacity(0x2000, a0);
    v14 = a4->field_0;
    if (v14)
        v15 = v14;
    else
        v15 = "\t/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
    v2 = &v8;
    v3 = a1;
    v4 = v15;
    *((int *)&v5) = (v14 ? a4->field_8 : 1);
    v6 = a4;
    v7 = &v0;
    v17 = v12.for_byte_record(v0, &v2);
    if (!v17)
    {
        ::0x4ac0b0::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
        ::0x4ac0c0::core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v12);
        return 0;
    }
    v1 = v17;
    v10.spec_to_string(&v1);
    v5 = 1;
    memcpy(&v2, &v10, 16);
    v4 = v11;
    v18 = v2.new();
    ::0x4ab760::core::ptr::drop_in_place<std::io::error::Error>(v1);
    ::0x4ac0c0::core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v12);
    return v18;
}
