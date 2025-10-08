long long fish::wutil::fish_iswalnum(unsigned int a0)
{
    if (!a0 - 0xe000 < 0x1900 && !a0 - 0xf500 < 0x200 && !a0 - 64976 < 32)
        return core::char::methods::<impl char>::is_alphanumeric(a0);
    return 0;
}
