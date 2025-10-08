long long fish::tokenizer::iswspace_not_nl(unsigned int a0)
{
    unsigned int v0;  // [bp-0x120]
    unsigned long v2;  // rcx
    unsigned long v3;  // rax

    v2 = a0 - 9;
    if ((unsigned int)v2 <= 23)
    {
        v3 = "rate'\ncomplete -x -c pv -l buffer-size -s B -d 'Use transfer buffer size (in bytes)'\ncomplete -c pv -l no-splice -s C -d 'Don\\'t use slice'\ncomplete -c pv -l skip-errors -s E -d 'Ignore read errors'\ncomplete -c pv -l stop-at-size -s S -d 'Stop transfer aft";
        *((char **)&v0) = &g_800013;
        if ((*((char *)&v0 + ((v2 & 4294967295 & 31) >> 3)) >> ((char)v2 & 31 & 7) & 1))
            return "r rate'\ncomplete -x -c pv -l buffer-size -s B -d 'Use transfer buffer size (in bytes)'\ncomplete -c pv -l no-splice -s C -d 'Don\\'t use slice'\ncomplete -c pv -l skip-errors -s E -d 'Ignore read errors'\ncomplete -c pv -l stop-at-size -s S -d 'Stop transfer a" >> ((char)v2 & 31) & 4294967295 & 0xffffff00 | (char)("r rate'\ncomplete -x -c pv -l buffer-size -s B -d 'Use transfer buffer size (in bytes)'\ncomplete -c pv -l no-splice -s C -d 'Don\\'t use slice'\ncomplete -c pv -l skip-errors -s E -d 'Ignore read errors'\ncomplete -c pv -l stop-at-size -s S -d 'Stop transfer a" >> ((char)v2 & 31)) & 1;
    }
    if ((unsigned int)v2 < 5)
    {
        return (v3 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
    }
    else if (a0 >= 128)
    {
        return ::0x12b00d0::core::unicode::unicode_data::white_space::lookup(a0);
    }
    else
    {
        return 0;
    }
}
