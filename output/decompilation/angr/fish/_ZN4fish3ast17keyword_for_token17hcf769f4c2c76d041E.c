long long fish::ast::keyword_for_token(char a0, void* a1, unsigned long long a2)
{
    char v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    unsigned int v4;  // eax

    fish::ast::unescape_keyword(&v0, a0, a1, a2);
    v4 = v1.from(*((long long *)&v2));
    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
    return v4;
}
