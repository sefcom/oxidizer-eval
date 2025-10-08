long long starship::modules::git_metrics::diff_two_opt(unsigned int *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned int a8, unsigned long long a9, unsigned long long a10)
{
    char v0;  // [bp-0x1f8], Other Possible Types: unsigned long long
    char v1;  // [bp-0x1f0]
    unsigned long long v2;  // [bp-0xe0]
    char v3;  // [bp-0xd8]
    unsigned int v4;  // edx
    unsigned long long v5;  // r10
    unsigned int v6;  // esi
    unsigned int v7;  // esi
    unsigned short v10;  // cx

    if ((unsigned int)a4 == 0x4000 || (unsigned int)a4 == 0xa000 || (unsigned int)a4 == 0xe000 || (unsigned short)a4 < 0)
    {
        v4 = (unsigned int)a4 & 0xf000;
        v5 = (v4 != 0xc000 ? v4 : 0x4000);
        if ((unsigned int)v5 != 0x4000)
        {
            if ((unsigned int)v5 == 0x8000)
            {
                v5 = (v4 == 0xc000 ? 33188 : (!((char)a4 & 64) ? 33188 : 33261));
            }
            else if ((unsigned int)v5 != 0xa000)
            {
                v5 = v5 & 0xffffffffffff0000 | 0xe000;
            }
        }
        v0.set_resource(a9, a3, v5, a1, a2, 0, a10);
        if (*((short *)&v0) == 14)
        {
            a1 = a8;
            if ((unsigned int)a1 == 0x4000 || (unsigned int)a1 == 0xa000 || (unsigned int)a1 == 0xe000 || (unsigned short)a1 < 0)
            {
                v6 = (unsigned int)a1 & 0xf000;
                if (v6 != 0xc000)
                    v7 = v6;
                else
                    v7 = 0x4000;
                switch (v7)
                {
                case 16384: case 40960:
                    break;
                case 32768:
                    if (v6 == 0xc000)
                        break;
                    else
                        break;
                default:
                    v10 = 0xe000;
                    break;
                }
                v0.set_resource(a9, a7, v10, a5, a6, 1, a10);
                if (*((short *)&v0) != 14)
                    goto LABEL_b9934a;
                a1 = v0.prepare_diff(a9);
                if (v0 != 2)
                {
                    memcpy(&v3, &v1, 184);
                    v2 = v0;
                    return starship::modules::git_metrics::count_diff_lines(a0, &v2);
                }
            }
        }
        else
        {
LABEL_b9934a:
            a1 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<(),gix_diff::blob::platform::set_resource::Error>>(&v0);
        }
    }
    *(a0) = 0;
    return a1;
}
