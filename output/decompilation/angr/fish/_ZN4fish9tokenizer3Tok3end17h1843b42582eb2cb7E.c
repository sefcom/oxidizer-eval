long long fish::tokenizer::Tok::end(void* a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = a0.offset();
    return a0.length() + v3;
}
