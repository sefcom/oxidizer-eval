long long fish_printf::arg::Arg::as_str(void* a0, void* a1, struct_0 *a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    int v3;  // xmm0
    unsigned long v4;  // rax
    unsigned long v5;  // rcx

    v0 = v2;
    switch (*((char *)a1))
    {
    case 0:
        v3 = (int128_t)a1[8];
        break;
    case 1:
        a2->field_8[1] = 0;
        v4 = (long long)a1[8];
        v5 = (long long)a1[16];
LABEL_144001e:
        a2.extend(v4, v4 + v5 * 4);
        v3 = a2->field_8;
        break;
    case 2:
        v3 = (int128_t)a1[16];
        break;
    case 3:
        a2->field_8[1] = 0;
        v4 = (long long)a1[16];
        v5 = (long long)a1[24];
        goto LABEL_144001e;
    default:
        *((char *)&a0[8]) = 3;
        *((unsigned long long *)a0) = 0;
        return a0;
    }
    *(a0) = v3;
    return a0;
}
