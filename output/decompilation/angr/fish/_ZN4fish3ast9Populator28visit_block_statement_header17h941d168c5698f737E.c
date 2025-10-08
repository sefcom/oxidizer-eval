long long fish::ast::Populator::visit_block_statement_header(void* a0, void* a1)
{
    char v0;  // [bp-0xd0]

    v0.allocate_populate_block_header(a0);
    core::ptr::drop_in_place<fish::ast::BlockStatementHeader>(a1);
    return memcpy(a1, &v0, 192);
}
