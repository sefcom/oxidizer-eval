long long ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_bool(struct_0 *a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8)
{
    void* v0;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x68], Other Possible Types: unsigned long long
    void* v2;  // [bp-0x60], Other Possible Types: unsigned long long
    char v3;  // [bp-0x58], Other Possible Types: unsigned long
    char v4;  // [bp-0x57]
    unsigned long v5;  // [bp-0x50]
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rax
    unsigned long long v9;  // r15
    unsigned long long v10;  // rbp
    unsigned long long v11;  // r12
    unsigned long long v12;  // rax
    unsigned long long v13;  // r15
    unsigned long v14;  // rbp
    unsigned long long v15;  // rdx
    unsigned long long v16;  // r8
    unsigned long v17;  // r15
    unsigned long v18;  // r15
    unsigned long long v19;  // r12
    unsigned long v20;  // r15

    v6 = a5;
    v8 = smallvec::infallible(a8.try_reserve(a0->field_10 * 2 - 1), v7);
    v9 = a0->field_10;
    if (!v9)
        return v8;
    v10 = a0->field_8;
    v2 = a1;
    v11 = a7;
    v3 = a2;
    v0 = 0;
    ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v0, a5, a6, a7, a8);
    v1 = 4;
    v2 = 0;
    v3 = 2;
    v4 = a0->field_24;
    v0 = 3;
    v12 = a8.push(&v0);
    if (v9 == 1)
        return v12;
    v13 = v9 * 80;
    v5 = v13 + v10 - 80;
    v15 = a6;
    v16 = a8;
    if (v10 + 80 != v5)
    {
        v17 = v13 - 160;
        do
        {
            v18 = v17;
            v1 = v14;
            v14 += 80;
            v0 = 1;
            v19 = v16;
            ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v0, v6, v15, v11, v16);
            v1 = 4;
            v2 = 0;
            v3 = 2;
            v4 = a0->field_24;
            v0 = 3;
            v19.push(&v0);
            v16 = v19;
            v20 = v18 - 80;
            v17 = v20;
        } while (v18 != 80);
    }
    v1 = v5;
    v2 = a3;
    v3 = a4;
    v0 = 2;
    return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v0, v6, v15, v11, v16);
}
