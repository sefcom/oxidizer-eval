double fish::ast::Populator::visit_statement(long long a0, long long a1)
{
    int v0;  // [bp-0x38], Other Possible Types: char
    int v1;  // [bp-0x28]
    char v2;  // [bp-0x18]

    v0.allocate_populate_statement(a0);
    core::ptr::drop_in_place<fish::ast::Statement>(a1);
    a1[2] = *((int128_t *)&v2);
    *((void*)&a1[1]) = v1;
    *((void*)&a1[0]) = v0;
    return (unsigned long long)v0;
}
