long long fish::pager::Pager::set_completions(struct_0 *a0, unsigned long long a1, unsigned long long a2, char a3)
{
    int v0;  // [bp-0x30], Other Possible Types: char
    char v1;  // [bp-0x20]
    unsigned long v3;  // r14
    unsigned long long v4;  // rax

    a0->field_0 = 0;
    fish::pager::process_completions_into_infos(&v0, a1, a2);
    v3 = &a0->field_a8;
    core::ptr::drop_in_place<alloc::vec::Vec<fish::pager::PagerComp>>(v3);
    a0->field_b0[1] = *((long long *)&v1);
    *((void*)&a0->field_a8) = v0;
    if (a0->field_c0.eq(a0->padding_c8, "-/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '", 1))
        fish::pager::join_completions(v3);
    a0.measure_completion_infos();
    if (a3)
    {
        v4 = a0.refilter_completions();
    }
    else
    {
        v0.clone(a0->field_b0[0], a0->field_b0[1]);
        core::ptr::drop_in_place<alloc::vec::Vec<fish::pager::PagerComp>>(&(&a0->padding_8)[1]);
        v4 = *((long long *)&v1);
        *((unsigned long long *)((char *)&a0->field_98 + 8)) = v4;
        *((void*)&(&a0->padding_8)[1]) = v0;
    }
    a0->padding_e0[34] = 1;
    return v4;
}
