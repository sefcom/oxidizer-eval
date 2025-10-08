void fish::parser::Parser::job_add(unsigned long long a0, struct_0 *a1)
{
    struct_0 *v0;  // [bp-0x18], Other Possible Types: unsigned long long
    unsigned long long v2;  // rax
    unsigned long long v4;  // rdx

    v0 = v2;
    v0 = a1;
    if (!a1->field_30)
        core::panicking::panic("assertion failed: !job.processes().is_empty()assertion failed: matches!(block_type, BlockType::top | BlockType::subst)Invalid block type", 45, &g_14de510); /* do not return */
    a0.jobs_mut().insert(a1);
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v4);
    return;
}
