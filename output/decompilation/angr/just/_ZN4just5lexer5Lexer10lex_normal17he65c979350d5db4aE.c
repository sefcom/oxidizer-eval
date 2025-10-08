long long just::lexer::Lexer::lex_normal(uint128_t a0[5], void* a1, unsigned int a2)
{
    unsigned long long v0;  // [bp-0x80]
    unsigned int v1;  // [bp-0x78]
    int v2;  // [bp-0x70]
    int v3;  // [bp-0x60]
    int v4;  // [bp-0x50]
    char v5;  // [bp-0x40]
    char v6;  // [bp-0x38]
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rcx
    unsigned long long v10;  // r8
    unsigned long long v11;  // rdx
    char v12;  // dl
    unsigned long long v13;  // rcx
    unsigned long long v14;  // rdx
    unsigned long long v15;  // r8
    unsigned long long v16;  // rdx
    char *v17;  // rdx
    unsigned long long v18;  // rax
    int v19;  // xmm0

    switch (a2)
    {
    case 9: case 32:
        return a0.lex_whitespace(a1);
    case 10: case 13:
        return a0.lex_eol(a1);
    case 11: case 12: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 37: case 45: case 46: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 59: case 60: case 62: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 94: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
LABEL_671a5f:
        if (a2 - 97 >= 26 && (a2 < 65 || !a2 == 95 && !a2 < 91))
        {
            v18 = (char)v0.advance(a1);
            if (v6 != 37)
            {
                a0[4] = *((int128_t *)&v5);
                v19 = *((int128_t *)&v0);
                *((void*)&a0[3]) = v4;
                *((void*)&a0[2]) = v3;
                *((void*)&a0[1]) = v2;
                *((void*)&a0[0]) = v19;
                return v18;
            }
            v1 = a2;
            v0 = 9223372036854775876;
            v17 = &v0;
            return a0.error(a1, &v0);
        }
        return a0.lex_identifier(a1);
    case 33:
        if ((char)core::slice::<impl [T]>::starts_with(a1.rest(), v16, "!includeS", 8))
        {
            v0 = 9223372036854775846;
            v17 = &v0;
            return a0.error(a1, v17);
        }
        v13 = "=";
        v14 = 33;
        v15 = 37;
        return a0.lex_choices(a1, 33, "=", 37);
    case 34: case 39: case 96:
        return a0.lex_string(a1);
    case 35:
        return a0.lex_comment(a1);
    case 36:
        v11 = 18;
        break;
    case 38:
        v8 = 38;
        v9 = 38;
        v10 = 0;
        return a0.lex_digraph(a1, 38, 38, 0);
    case 40:
        v12 = 28;
        return a0.lex_delimiter(a1, 28);
    case 41:
        v12 = 29;
        return a0.lex_delimiter(a1, 29);
    case 42:
        v11 = 1;
        break;
    case 43:
        v11 = 30;
        break;
    case 44:
        v11 = 15;
        break;
    case 47:
        v11 = 32;
        break;
    case 58:
        return a0.lex_colon(a1);
    case 61:
        v13 = "=";
        v14 = 61;
        v15 = 21;
        return a0.lex_choices(a1, 61, "=", 21);
    case 63:
        v11 = 31;
        break;
    case 64:
        v11 = 2;
        break;
    case 91:
        v12 = 9;
        return a0.lex_delimiter(a1, 9);
    case 92:
        return a0.lex_escape(a1);
    case 93:
        v12 = 10;
        return a0.lex_delimiter(a1, 10);
    case 123:
        v12 = 7;
        return a0.lex_delimiter(a1, 7);
    case 124:
        v9 = 124;
        v8 = 124;
        v10 = 6;
        return a0.lex_digraph(a1, 124, 124, 6);
    case 125:
        v12 = 8;
        return a0.lex_delimiter(a1, 8);
    default:
        if (a2 != 65279)
            goto LABEL_671a5f;
        v11 = 11;
        break;
    }
    return a0.lex_single(a1, v11);
}
