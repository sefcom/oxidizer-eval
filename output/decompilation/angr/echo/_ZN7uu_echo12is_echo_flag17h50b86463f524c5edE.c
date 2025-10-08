long long uu_echo::is_echo_flag(struct_0 *a0, char a1[2])
{
    unsigned long long v1;  // rbx
    char *v2;  // r14
    char v3;  // cl
    unsigned long long v4;  // rdx
    char v5;  // dil

    v1 = a0->field_10;
    if (!v1)
        return 0;
    v2 = a0->field_8;
    if (*(v2) != 45)
    {
        return 0;
    }
    else if ((char)v2.eq(v1))
    {
        return 0;
    }
    else
    {
        v3 = a1[0];
        if (v1 != 1)
        {
            v4 = 1;
            do
            {
                switch (v2[v4])
                {
                case 69:
                    break;
                case 101:
                    v5 = 1;
                    break;
                case 110:
                    v3 = 0;
                    break;
                default:
                    return 0;
                }
                v4 += 1;
            } while (v1 != v4);
        }
        a1[1] = v5 & 1;
        a1[0] = v3 & 1;
        return a1 & 0xffffffffffffff00 | 1;
    }
}
