long long fish::parse_execution::ExecutionContext::setup_group(struct_1 *a0, struct_4 *a1)
{
    char v0;  // [bp-0x40]
    struct_0 *v2;  // r15
    unsigned long long v3;  // 4096
    unsigned long v4;  // rbx
    unsigned long long v5;  // rax
    char v6;  // bpl
    struct_5 *v7;  // rax
    unsigned long v8;  // r12
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdx

    v2 = a0->field_38;
    if (v2 && (v2->field_78 || !(char)a1.wants_job_id()) && a1->field_49 != 1)
    {
        v3 = atomic_fetch_add(v2);
        if (!((char)_ccall(14, 24, v3 + 1, 0, (unsigned long long)(char)(a1->field_49 < 1))))
        {
            v4 = &a1->field_28;
            v5 = core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::job_group::JobGroup>>>(v4);
            *((struct_0 **)v4) = v2;
            return v5;
        }
        [D] Unsupported jumpkind Ijk_NoDecode at address 20850531()
    }
    if (!a1->field_20)
        core::panicking::panic_bounds_check(0, 0, &g_14dd3d8); /* do not return */
    if (a1->field_18->field_0 - 1 >= 3 && (char)a0.use_job_control())
    {
        a1->field_18->field_d6 = 1;
        v6 = *((char *)(a0.parser() + 89));
        v0.to_vec(a1->field_8, a1->field_10);
        v7 = v0.create_with_job_control(*((char *)(a0.parser() + 89)) ^ 1);
        v8 = &a1->field_28;
        core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::job_group::JobGroup>>>(v8);
    }
    else
    {
        v0.to_vec(a1->field_8, a1->field_10);
        v7 = v0.create(a1.wants_job_id());
        v8 = &a1->field_28;
        core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::job_group::JobGroup>>>(v8);
    }
    *((struct_5 **)v8) = v7;
    v9 = a1.group();
    v9 + 114.store(a1->field_49 ^ 1);
    *((char *)(a1.mut_flags() + 4)) = 1;
    return (unsigned long long)core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v10);
}
