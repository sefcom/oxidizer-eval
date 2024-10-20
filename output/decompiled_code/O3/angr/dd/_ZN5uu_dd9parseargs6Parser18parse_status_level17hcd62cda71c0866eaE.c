long long uu_dd::parseargs::Parser::parse_status_level::hcd62cda71c0866ea(struct_0 *a0, unsigned int *a1, unsigned long a2)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // r15

    switch (a2)
    {
    case 0:
        memcpy(v2, a1, a2);
        a0->field_0 = 10;
        *((unsigned long *)&a0->field_8) = a2;
        a0->field_10 = 1;
        a0->field_18 = a2;
        return v1;
    case 4:
        if (!(*(a1) == 1701736302))
            goto LABEL_49712a;
        a0->field_8 = 2;
        break;
    case 6:
        v1 = 1719168878 ^ *(a1);
        if (!(!((unsigned short)a1[1] ^ 29285)) || !(!(unsigned int)v1))
            goto LABEL_49712a;
        a0->field_8 = 1;
        break;
    case 8:
        v1 = 8319104478719472240;
        if (!(*((long long *)&a1) == 8319104478719472240))
            goto LABEL_49712a;
        a0->field_8 = 0;
        break;
    default:
        if (a2 < 0)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
LABEL_49712a:
        v2 = __rust_alloc(a2, 1);
        if (v2)
        {
            v1 = memcpy(v2, a1, a2);
            a0->field_0 = 10;
            *((unsigned long *)&a0->field_8) = a2;
            a0->field_10 = v2;
            a0->field_18 = a2;
            return v1;
        }
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
    a0->field_0 = 14;
    return v1;
}
