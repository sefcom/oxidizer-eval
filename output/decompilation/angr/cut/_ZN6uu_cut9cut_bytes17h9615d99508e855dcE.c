long long uu_cut::cut_bytes(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_0 *a4)
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
    char v10;  // [bp-0x68], Other Possible Types: unsigned long long
    char v11;  // [bp-0x60]
    char v12;  // [bp-0x38]
    char v13;  // [bp-0x28]
    unsigned long v15;  // rax
    unsigned long v16;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax

    v8 = a2;
    v9 = a3;
    v0 = a4->field_28;
    v10.with_capacity(0x2000, a0);
    v15 = a4->field_0;
    if (v15)
        v16 = v15;
    else
        v16 = "\t/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
    v2 = &v8;
    v3 = a1;
    v4 = v16;
    *((int *)&v5) = (v15 ? a4->field_8 : 1);
    v6 = a4;
    v7 = &v0;
    v18 = v10.for_byte_record(v0, &v2);
    if (!v18)
    {
        ::0x4ac0b0::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
        ::0x4ac220::core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(v10, *((long long *)&v11));
        return 0;
    }
    v1 = v18;
    v12.spec_to_string(&v1);
    v5 = 1;
    memcpy(&v2, &v12, 16);
    v4 = *((long long *)&v13);
    v19 = v2.new();
    ::0x4ab760::core::ptr::drop_in_place<std::io::error::Error>(v1);
    ::0x4ac220::core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(v10, *((long long *)&v11));
    return v19;
}
