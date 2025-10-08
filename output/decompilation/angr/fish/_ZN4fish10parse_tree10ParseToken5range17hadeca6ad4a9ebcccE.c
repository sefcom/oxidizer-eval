long long fish::parse_tree::ParseToken::range(void* a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long v3;  // rax

    v0 = v2;
    v3 = a0.source_start();
    return v3.new(a0.source_length());
}
