long long fish_printf::printf_impl::get_prefix(unsigned long long a0)
{
    unsigned long long v1;  // r15
    unsigned int v2;  // r14d

    v1 = 0;
    a0.at(0);
    v2 = 0;
    switch ((int)a0.at(0))
    {
    case 76:
        v2 = 8;
        goto LABEL_1257622;
    case 104:
        v2 = 2;
        if ((int)a0.at(1) == 104)
        {
            v2 = 1;
            v1 = 2;
            break;
        }
        break;
    case 106:
        v2 = 5;
        goto LABEL_1257622;
    case 108:
        v2 = 3;
        if ((int)a0.at(1) == 108)
        {
            v2 = 4;
            v1 = 2;
            break;
        }
        break;
    case 116:
        v2 = 6;
LABEL_1257622:
        v1 = 1;
        break;
    case 122:
        v2 = 7;
        goto LABEL_1257622;
    }
    a0.advance_by(v1);
    return v2;
}
