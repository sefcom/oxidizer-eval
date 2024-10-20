long long uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code::h1eacd878b675f23d(struct_1 *a0, unsigned long long a1[3], unsigned int a2, unsigned long a3, unsigned int a4, unsigned int a5)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    unsigned int *v4;  // rdx
    unsigned int *v5;  // rax
    unsigned long long v6;  // rcx
    struct_0 *v7;  // r15
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rdi

    v4 = a2 - 34;
    switch ((unsigned int)v4)
    {
    case 0:
        v7 = "\"";
        break;
    case 1:
        v7 = "#";
        break;
    case 2:
        v7 = "$";
        break;
    case 61:
        v7 = "_";
        break;
    case 68:
        v7 = "f";
        break;
    case 76:
        v7 = "n";
        break;
    case 80:
        v7 = "r";
        break;
    case 82:
        v7 = "t";
        break;
    case 84:
        v7 = "v";
        break;
    default:
        a0->field_4 = 0;
        a0->field_0 = 8;
        return v5;
    }
    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::hc2165e82d9d51b92(&v0, a1 + 1, v4, v6 + (char *)&g_420a58, a4, a5);
    v9 = *((long long *)&v1);
    switch (v8)
    {
    case 9223372036854775808:
        v5 = v2;
        a0->field_0 = 5;
        a0->field_8 = v9;
        a0->field_10 = v9;
        a0->field_18 = (char)v5;
        return v5;
    case 0:
        v5 = uu_env::string_expander::StringExpander::put_one_char::h37c5e1b22e2da92a(a1, v7->field_4);
        a0->field_4 = 1;
        a0->field_0 = 8;
        return v5;
    default:
        __rust_dealloc(v9);
    }
}
