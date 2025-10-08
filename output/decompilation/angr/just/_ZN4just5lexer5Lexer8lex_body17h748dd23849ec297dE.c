long long just::lexer::Lexer::lex_body(unsigned long long a0, unsigned long long a1[24])
{
    struct_0 *v0;  // [bp-0x90]
    int v1;  // [bp-0x88]
    int v2;  // [bp-0x78]
    int v3;  // [bp-0x68]
    int v4;  // [bp-0x58]
    unsigned long v5;  // [bp-0x48]
    char v6;  // [bp-0x40]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rcx

    while (true)
    {
        while ((char)a1.rest_starts_with("{{{{Q", 4))
        {
            v1.skip(a1);
            if (v6 != 37)
            {
                *((int128_t *)&v0->field_40[0]) = *((int128_t *)&v5);
                *((void*)&v0->field_30) = v4;
                *((void*)&v0->field_20) = v3;
                *((void*)&v0->field_10) = v2;
                *((void*)&v0->field_0) = v1;
                return a0;
            }
        }
        if ((char)a1.rest_starts_with("\n", 1))
        {
            if (a1[20] == a1[23])
                return a0.lex_single(a1, 20);
            a1.token(34);
            return a0.lex_single(a1, 20);
        }
        if ((char)a1.rest_starts_with("\r\nsrc/compilation.rsUnterminated stringUnterminated interpolationUnterminated backtickUnpaired carriage returnunterminated unicode escape sequenceunicode escape sequences must not be emptyThe `!include` directive has been stabilized as `import`Recipe line has extra leading whitespaceBackticks may not start with `#!`Attribute `` got  but takes at least ` depends on itself` has circular dependency `Variable `` is defined in terms of itself` depends on its own value: `Dependency `Recipe attribute `` first used on line  is duplicated on line ` has duplicate `[default]` attribute, which may only appear once per module` has duplicate parameter `Setting `` first set on line  is redefined on line ` has multiple definitions` is unexported multiple times` has both `[exit-message]` and `[no-exit-message]` attributes", 2))
        {
            if (a1[20] == a1[23])
                return a0.lex_double(a1, 20);
            a1.token(34);
            return a0.lex_double(a1, 20);
        }
        if ((char)a1.rest_starts_with("{{missing parameter without defaultjust-cmdcmd.exepowershellpowershell.exesrc/executor.rsassert( + if  {  } else {  }/  / ", 2))
        {
            if (a1[20] != a1[23])
                a1.token(34);
            v1.lex_double(a1, 27);
            if (v6 != 37)
            {
                *((int128_t *)&v0->field_40[0]) = *((int128_t *)&v5);
                *((void*)&v0->field_30) = v4;
                *((void*)&v0->field_20) = v3;
                *((void*)&v0->field_10) = v2;
                *((void*)&v0->field_0) = v1;
                return a0;
            }
            if (a1[11] >= 1)
            {
                v8 = a1[10];
                v9 = (a1[11] - 1) * 9;
                v5 = *((long long *)(v8 + v9 * 8 + 64));
                *((int128_t *)&v4) = *((int128_t *)(v8 + v9 * 8 + 48));
                *((int128_t *)&v3) = *((int128_t *)(v8 + v9 * 8 + 32));
                *((int128_t *)&v2) = *((int128_t *)(v8 + v9 * 8 + 16));
                *((int128_t *)&v1) = *((int128_t *)(v8 + v9 * 8));
                a1[3].push(&v1, &g_8304d0);
                break;
            }
            else
            {
                core::panicking::panic_bounds_check(a1[11] - 1, 0, &g_8304b8); /* do not return */
            }
        }
        else if (!a1.at_eof())
        {
            v1.advance(a1);
            if (v6 != 37)
            {
                *((int128_t *)&v0->field_40[0]) = *((int128_t *)&v5);
                *((void*)&v0->field_30) = v4;
                *((void*)&v0->field_20) = v3;
                *((void*)&v0->field_10) = v2;
                *((void*)&v0->field_0) = v1;
                return a0;
            }
        }
        else if (a1[20] != a1[23])
        {
            a1.token(34);
            break;
        }
    }
    v0->field_40[8] = 37;
    return a0;
}
