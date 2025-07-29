long long uu_cat::get_input_type(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0xe4]
    char *v1;  // [bp-0xe0], Other Possible Types: char
    unsigned long long v2;  // [bp-0xd8]
    unsigned long long v3;  // [bp-0xd0]
    char v4;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xc0]
    char *v6;  // [bp-0xb8]
    unsigned long long v7;  // [bp-0xb0]
    void* v8;  // [bp-0xa8]
    char v9;  // [bp-0x90]

    if ((char)a1.equal(a2, "-$\n^M\t^I^?unknown filetype: ", 1))
    {
        a0->field_8 = 2;
    }
    else
    {
        std::fs::metadata(&v4, a1, a2);
        if (*((int *)&v4) == 2)
        {
            v3 = v5;
            ::0x49b470::std::io::error::repr_bitpacked::decode_repr(&v1, v5);
            goto (long long)(g_42f93c[v1] + (char *)&g_42f93c[0]);
        }
        else
        {
            v0 = *((int *)&v9);
            switch ((v0 & 0xf000) - 0x1000 >> 12)
            {
            case 0:
                a0->field_8 = 6;
                break;
            case 1:
                a0->field_8 = 5;
                break;
            case 3:
                a0->field_8 = 0;
                break;
            case 5:
                a0->field_8 = 4;
                break;
            case 7:
                a0->field_8 = 1;
                break;
            case 9:
                a0->field_8 = 3;
                break;
            case 11:
                a0->field_8 = 7;
                break;
            default:
                v1 = &v0;
                v2 = <std::fs::FileType as core::fmt::Debug>::fmt;
                v4 = &g_42e830;
                v5 = 1;
                v8 = 0;
                v6 = &v1;
                v7 = 1;
                return a0.map_or_else(&v4);
            }
        }
    }
    a0->field_0 = 9223372036854775814;
    return 9223372036854775814;
}
