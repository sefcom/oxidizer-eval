long long fish::parse_util::parse_util_escape_wildcards(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    void* v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    struct_0 *v5;  // [bp-0x38]
    unsigned long long v7;  // rdx
    char v8;  // al
    unsigned int v9;  // eax
    unsigned int v10;  // ebp
    unsigned int v11;  // ebp
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rdx
    unsigned int v14;  // ebp
    unsigned long long v15;  // rsi
    unsigned long long v16;  // rdx

    v0 = a2.with_capacity_in(4, 4, &g_14bd1e0);
    v1 = v7;
    v2 = 0;
    v8 = fish::future_feature_flags::test(1);
    v3 = a1;
    v4 = a1 + a2 * 4;
    if ((int)v3.next() != 2)
    {
        if (v8)
        {
            do
            {
                v11 = v10;
                v9.unwrap(v11, &g_14bd1b0);
                if (v11 == 42)
                {
                    v12 = "\\*\\?$";
                    v13 = "\\?$";
                    goto LABEL_13e475e;
                }
                else
                {
                    v12 = "\\\\- cmd- when:%---...- cmd: - cmd: - cmd:    when:ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.";
                    v13 = "- cmd- when:%---...- cmd: - cmd: - cmd:    when:ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.";
                    if (v11 == 92)
                    {
LABEL_13e475e:
                        v0.extend(v12, v13);
                    }
                    else
                    {
                        v0.push(v11);
                    }
                }
                v9 = v3.next();
                v10 = v7;
            } while (v9 != 2);
        }
        else
        {
            do
            {
                v14 = v10;
                v9.unwrap(v14, &g_14bd1b0);
                if (v14 == 92)
                {
                    v15 = "\\\\- cmd- when:%---...- cmd: - cmd: - cmd:    when:ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.";
                    v16 = "- cmd- when:%---...- cmd: - cmd: - cmd:    when:ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.";
                }
                else if (v14 == 63)
                {
                    v15 = "\\?$";
                    v16 = "$";
                }
                else
                {
                    v15 = "\\*\\?$";
                    v16 = "\\?$";
                    if (v14 != 42)
                    {
                        v0.push(v14);
                        continue;
                    }
                }
                v0.extend(v15, v16);
                v9 = v3.next();
                v10 = v7;
            } while (v9 != 2);
        }
    }
    v5->field_10 = 0;
    v5->field_0 = *((int128_t *)&v0);
    return v5;
}
