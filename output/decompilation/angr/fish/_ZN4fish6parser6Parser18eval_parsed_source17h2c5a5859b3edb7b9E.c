long long fish::parser::Parser::eval_parsed_source(struct_1 *a0, unsigned long long a1, unsigned long long *a2, unsigned long long a3, unsigned long long a4, unsigned int a5)
{
    unsigned long long v0;  // [bp-0x38]
    struct_0 *v1;  // [bp-0x30]
    struct_0 *v3;  // rdx

    if ((a5 - 7 & 255) >= 2)
        core::panicking::panic("assertion failed: matches!(block_type, BlockType::top | BlockType::subst)Invalid block type", 73, &g_14de558); /* do not return */
    v0 = a2.top_job_list();
    v1 = v3;
    if (v3->field_8)
    {
        a0.eval_node(a1, &v0, a3, a4, a5);
    }
    else
    {
        (unsigned int)a1.get_last_status().from_exit_code();
        a0->field_0 = 1;
        a0->field_4 = (unsigned int)v3;
        a0->field_8 = 0x100;
        a0->field_a = 1;
    }
    core::ptr::drop_in_place<fish::parse_tree::NodeRef<fish::ast::JobList>>(&v0);
    return a0;
}
