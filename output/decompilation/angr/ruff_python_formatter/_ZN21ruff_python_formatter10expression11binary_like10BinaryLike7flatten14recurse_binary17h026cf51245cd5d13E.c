long long ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_binary(struct_0 *a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long a4, unsigned long long *a5, unsigned long long a6, unsigned long long a7, unsigned long long a8)
{
    void* v0;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x48], Other Possible Types: unsigned long
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x38], Other Possible Types: unsigned long
    char v4;  // [bp-0x37]
    unsigned long long v5;  // r8
    unsigned long long v6;  // rdx

    v5 = a6;
    v1 = a0->field_0;
    v2 = a1;
    v3 = a2;
    v0 = 0;
    ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v0, a5, a6, a7, a8);
    v1 = *(a5).dangling(a0);
    v2 = v6;
    v3 = 0;
    v4 = a0->field_1c;
    v0 = 3;
    a8.push(&v0);
    v1 = a0->field_8;
    v2 = a3;
    v3 = a4;
    v0 = 2;
    return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v0, a5, a6, a7, a8);
}
