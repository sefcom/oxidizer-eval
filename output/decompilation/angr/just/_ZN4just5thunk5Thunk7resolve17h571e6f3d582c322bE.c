char just::thunk::Thunk::resolve(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xf8]
    int v1;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xe8]
    int v3;  // [bp-0xe0]
    int v4;  // [bp-0xd0]
    int v5;  // [bp-0xc0]
    char v6;  // [bp-0xb0]
    int v7;  // [bp-0x78], Other Possible Types: char
    int v8;  // [bp-0x68]
    int v9;  // [bp-0x58]
    int v10;  // [bp-0x48]
    char v11;  // [bp-0x38]
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rax

    v14 = just::function::get(a1.lexeme(), v13);
    v1 = a1.lexeme();
    v2 = v13;
    v0 = 9223372036854775874;
    v7.error(a1, &v0);
    v1 = v7;
    v3 = v8;
    v4 = v9;
    v5 = v10;
    memcpy(&v6, &v11, 16);
    v0 = 7;
    a0.map_or(v14, v13, &v0, a2, a1);
    return core::ptr::drop_in_place<alloc::vec::Vec<just::expression::Expression>>(a2);
}
