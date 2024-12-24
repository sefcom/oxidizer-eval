long long uu_ls::classify_file::h9b12b3ace49cae86(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // [sp-0x18]
    unsigned long v2;  // rax
    unsigned int *v3;  // rcx
    struct_0 *v6;  // rax

    v0 = v2;
    v3 = uu_ls::PathData::file_type::hb547643d6142fc80(a0, a1);
    if (!v3)
        return 0x110000;
    switch ((unsigned int)((0xf000 & *(v3)) - 0x1000 >> 12))
    {
    case 0:
        return 124;
    case 3:
        return 47;
    case 7:
        v6 = uu_ls::PathData::get_metadata::h8d9c1f19e7e4c4d2(a0, a1);
        if (v6 && (char)core::ops::function::FnOnce::call_once::he40693676f03865a(v6->field_38))
            return 42;
    case 9:
        return 64;
    case 11:
        return 61;
    default:
        return 0x110000;
    }
}
