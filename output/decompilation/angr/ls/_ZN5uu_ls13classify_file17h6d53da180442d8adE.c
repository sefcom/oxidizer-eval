long long uu_ls::classify_file(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned int *v3;  // rcx
    struct_0 *v4;  // rax

    v0 = v2;
    v3 = a0.file_type(a1);
    if (!v3)
        return 0x110000;
    switch ((0xf000 & *(v3)) - 0x1000 >> 12)
    {
    case 0:
        return 124;
    case 3:
        return 47;
    case 7:
        v4 = a0.get_metadata(a1);
        if (v4 && v4->field_38.call_once())
            return 42;
    case 9:
        return 64;
    case 11:
        return 61;
    default:
        return 0x110000;
    }
}
