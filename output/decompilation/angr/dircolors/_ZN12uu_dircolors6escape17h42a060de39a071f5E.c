long long uu_dircolors::escape(unsigned long a0, unsigned long long a1, unsigned long a2)
{
    void* v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    void* v2;  // [bp-0x50]
    struct_0 *v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned int v7;  // ecx
    unsigned long long v8;  // rdx
    unsigned int v9;  // ecx
    unsigned int v10;  // ebp
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rsi

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v4 = a1;
    v5 = a2 + a1;
    if ((int)::0x4adeb0::core::str::validations::next_code_point(&v4))
    {
        v7 = 32;
        do
        {
            v9 = v7;
            v10 = v8;
            if ((unsigned int)v8 != 39)
            {
                if ((unsigned int)v8 == 58)
                {
                    v11 = 2;
                    v12 = "\\:# Configuration file for dircolors, a utility to help you set the\n# LS_COLORS environment variable used by GNU ls with the --color option.\n# The keywords COLOR, OPTIONS, and EIGHTBIT (honored by the\n# slackware version of dircolors) are recognized but ig";
                    if (!(v9 == 92))
                        goto LABEL_4b0698;
                }
                v0.push(v10);
            }
            else
            {
                v11 = 4;
                v12 = "'\\''.svg.flcleft -> .tar.lzo.swm.mkv.ogv.rej";
LABEL_4b0698:
                v0.append_elements(v12, v11, &g_589d88);
            }
            v7 = v10;
        } while ((int)::0x4adeb0::core::str::validations::next_code_point(&v4));
    }
    v3->field_10 = 0;
    v3->field_0 = *((int128_t *)&v0);
    return v3;
}
