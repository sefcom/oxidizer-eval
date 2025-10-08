long long just::string_kind::StringKind::from_string_or_backtick(char a0[73], unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x78]
    char v1;  // [bp-0x70]
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rax

    v4 = a1.lexeme().from_token_start(v3);
    if ((char)v4 != 2)
    {
        a0[0] = (char)v4 & 1;
        a0[1] = v3;
        a0[72] = 37;
        return v4 & 0xffffffffffffff00 | (char)v4 & 1;
    }
    v1.to_vec("StringKind::from_token: Expected String or Backtick", 51);
    v0 = 9223372036854775848;
    return a0.error(a1, &v0);
}
