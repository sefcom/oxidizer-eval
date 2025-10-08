long long fish::ast::Populator::peek_type(unsigned int a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return *((char *)(a0.peek_token(a1) + 9));
}
