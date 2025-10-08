long long ruff_python_formatter::comments::format::strip_comment_prefix(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long long v5;  // r15
    unsigned long long v6;  // r14
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rax

    v3 = v5;
    v2 = v6;
    v1 = v7;
    v0 = 0;
    v9 = ::0x6e6590::core::char::methods::encode_utf8_raw(35, &v0).strip_prefix_of(v8, a1, a2);
    if (v9)
        v10 = v9;
    else
        v10 = "Didn't find expected comment token `#`crates/ruff_python_formatter/src/comments/map.rs";
    v12 = v10;
    if (!v9)
        v13 = 38;
    a0->field_0 = (v9) * 4;
    a0->field_8 = v12;
    a0->field_10 = v13;
    return v13;
}
