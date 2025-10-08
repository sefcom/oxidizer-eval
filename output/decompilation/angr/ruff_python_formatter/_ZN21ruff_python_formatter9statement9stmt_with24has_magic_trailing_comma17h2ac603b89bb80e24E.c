long long ruff_python_formatter::statement::stmt_with::has_magic_trailing_comma(struct_0 *a0, void* a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long v2;  // rax

    if (!a0->field_10)
        return 0;
    v2 = *((int *)(a0->field_8 + a0->field_10 * 104 - 20));
    if ((unsigned int)v2 > *((int *)&(&a0->padding_18)[1]))
    {
        v0 = v2;
        core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97f010); /* do not return */
    }
    return ruff_python_formatter::other::commas::has_magic_trailing_comma(v0 & 4294967295, *((int *)&(&a0->padding_18)[1]), a1);
}
