char fish::builtins::test::test_expressions::binary_primary_evaluate(char a0, unsigned int a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    unsigned long long v0[2][2];  // [bp-0x98]
    char v1;  // [bp-0x70]
    unsigned long long v2[2][2];  // [bp-0x58]
    char v3;  // [bp-0x30]
    unsigned long v4;  // rbx
    char v5;  // al
    unsigned long long v6;  // cc_dep1
    unsigned long long v7;  // cc_dep2

    v4 = a1;
    if (!a0)
    {
        fish::wutil::fileid::file_id_for_path(&(char)v0, a2, a3);
        fish::wutil::fileid::file_id_for_path(&(char)v2, a4, a5);
        if ((char)v4)
        {
            if ((unsigned int)v4 == 1)
            {
                v6 = *((long long *)&v1);
                v7 = *((long long *)&v3);
LABEL_13848b8:
            }
            else
            {
                (char)v0.eq(&(char)v2);
            }
        }
        else
        {
            v6 = *((long long *)&v3);
            v7 = *((long long *)&v1);
            goto LABEL_13848b8;
        }
    }
    else if (a0 == 1)
    {
        v5 = (char)a2.equal(a3, a4, a5) ^ (char)v4;
    }
    else
    {
        *((uint128_t *)&v0[0]) = 0;
        *((uint128_t *)&v2[0]) = 0;
        if ((char)fish::builtins::test::test_expressions::parse_number(a2, a3, &v0, a6) && (char)fish::builtins::test::test_expressions::parse_number(a4, a5, &v2, a6))
            goto (long long)(g_9f3930[v4 & 4294967295] + (char *)&g_9f3930[0]);
    }
    return v5 & 1;
}
