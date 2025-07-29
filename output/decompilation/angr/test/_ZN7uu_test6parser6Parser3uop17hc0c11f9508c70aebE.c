long long uu_test::parser::Parser::uop(void* a0, struct_0 *a1)
{
    unsigned long long v0[2];  // [bp-0xb8]
    int v1;  // [bp-0xa8]
    unsigned long v2;  // [bp-0x98]
    int v3;  // [bp-0x90], Other Possible Types: char
    int v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x70]
    unsigned long long v6[2];  // [bp-0x68]
    int v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x48]
    char v9;  // [bp-0x38]

    v3.next_token(a0);
    if (*((int *)&v3) != 6)
    {
        v8 = v5;
        v7 = v4;
        *((void*)v6) = v3;
        (char)v0.into_literal(&v6);
        a0.push(&(char)v0, &g_56ed50);
        v2 = a1->field_20;
        *((uint128_t *)&v1) = a1->field_10;
        *((uint128_t *)&v0[0]) = a1->field_0;
        return a0.push(&v0, &g_56ed68);
    }
    v2 = a1->field_20;
    *((uint128_t *)&v1) = a1->field_10;
    *((uint128_t *)&v0[0]) = a1->field_0;
    v9.into_literal(&v0);
    a0.push(&v9, &g_56ed38);
    return ::0x49ab70::core::ptr::drop_in_place<uu_test::parser::Symbol>(&v3);
}
