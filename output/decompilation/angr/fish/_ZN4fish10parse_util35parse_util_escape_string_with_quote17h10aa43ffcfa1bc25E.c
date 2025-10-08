long long fish::parse_util::parse_util_escape_string_with_quote(unsigned int a0, unsigned long a1, unsigned long a2, unsigned int a3)
{
    void* v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    unsigned int v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x6c]
    unsigned int v4;  // [bp-0x64]
    void* v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    void* v7;  // [bp-0x50]
    struct_0 *v8;  // [bp-0x48]
    unsigned long v9;  // [bp-0x40]
    unsigned long long v10;  // [bp-0x38]
    unsigned int v12;  // eax
    unsigned int v13;  // edx
    unsigned int v14;  // ebx
    unsigned int v15;  // ebx
    unsigned int v16;  // eax
    unsigned int v17;  // eax
    unsigned int v18;  // eax
    unsigned int v19;  // eax

    if (a3 == 0x110000)
    {
        fish::common::escape_string(a0, a1, a2, 0);
        return a0;
    }
    v5 = 0;
    v6 = 4;
    v7 = 0;
    v5.reserve(a2);
    v9 = a1;
    v10 = a1 + a2 * 4;
    if ((int)v9.next() != 2)
    {
        do
        {
            v15 = v14;
            v12.unwrap(v15, &g_14bd1b0);
            switch (v15)
            {
            case 8:
                v0 = 0;
                v1 = 4;
                v2 = a3;
                v3 = 420906795100;
                v4 = a3;
                while (true)
                {
                    v16 = v0.next();
                    if (v16 == 0x110000)
                        break;
                    v5.push(v16);
                }
            case 9:
                v0 = 0;
                v1 = 4;
                v2 = a3;
                v3 = 498216206428;
                v4 = a3;
                while (true)
                {
                    v18 = v0.next();
                    if (v18 == 0x110000)
                        break;
                    v5.push(v18);
                }
            case 10:
                v0 = 0;
                v1 = 4;
                v2 = a3;
                v3 = 472446402652;
                v4 = a3;
                while (true)
                {
                    v17 = v0.next();
                    if (v17 == 0x110000)
                        break;
                    v5.push(v17);
                }
            case 11: case 12: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 35:
                if (v15 == a3)
                {
                    v5.push(92);
                    break;
                }
                break;
            case 13:
                v0 = 0;
                v1 = 4;
                v2 = a3;
                v3 = 489626271836;
                v4 = a3;
                while (true)
                {
                    v19 = v0.next();
                    if (v19 == 0x110000)
                        break;
                    v5.push(v19);
                }
            case 36:
                v15 = 36;
                if (a3 == 34)
                {
                    v5.push(92);
                    break;
                }
                break;
            default:
                if (v15 == 92)
                {
                    v5.extend("\\\\- cmd- when:%---...- cmd: - cmd: - cmd:    when:ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.", "- cmd- when:%---...- cmd: - cmd: - cmd:    when:ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.");
                    continue;
                }
            }
            v5.push(v15);
            v12 = v9.next();
            v13 = v13;
        } while (v12 != 2);
    }
    v8->field_10 = 0;
    v8->field_0 = *((int128_t *)&v5);
    return a0;
}
