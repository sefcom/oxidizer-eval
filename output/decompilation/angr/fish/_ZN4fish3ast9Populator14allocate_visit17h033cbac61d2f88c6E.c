double fish::ast::Populator::allocate_visit(long long a0, long long a1)
{
    int v0;  // [bp-0x68], Other Possible Types: char
    int v1;  // [bp-0x58]
    int v2;  // [bp-0x48]
    char v3;  // [bp-0x38]

    v0.default();
    v3.visit_mut(a1, &v0);
    *((void*)&a0[2]) = v2;
    *((void*)&a0[1]) = v1;
    *((void*)&a0[0]) = v0;
    return (unsigned long long)v0;
}
