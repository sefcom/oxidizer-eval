long long uu_ls::classify_file::h531def787e741feb(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // [sp-0x18]
    unsigned long v2;  // rax
    unsigned int *v3;  // rcx
    struct_0 *v6;  // rax

    v0 = v2;
    v3 = uu_ls::PathData::file_type::h128ed7d98b354477(a0, a1);
    if (!v3)
        return 0x110000;
    switch ((unsigned int)((0xf000 & *(v3)) - 0x1000 >> 12))
    {
    case 0:
        return 124;
    case 3:
        return 47;
    case 7:
        v6 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(a0, a1);
        if (v6 && (char)core::ops::function::FnOnce::call_once::h37c933d7708fabb0(v6->field_38))
            return 42;
    case 9:
        return 64;
    case 11:
        return 61;
    default:
        return 0x110000;
    }
}
