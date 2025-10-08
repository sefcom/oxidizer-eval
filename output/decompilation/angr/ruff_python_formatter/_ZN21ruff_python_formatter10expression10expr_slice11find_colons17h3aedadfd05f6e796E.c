long long ruff_python_formatter::expression::expr_slice::find_colons(void* a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned int a4, unsigned long long a5, unsigned long a6)
{
    unsigned long long v10;  // [bp-0xa8]
    char v11;  // [bp-0xa0]
    char v16;  // [bp-0x68]
    char v17;  // [bp-0x38]
    char *v18;  // rdi
    unsigned int v19;  // eax

    v10 = a5;
    v18 = &v10;
    if (!a5)
        v18 = 0;
    v19 = v18.map_or(a3);
    if (v19 > a4)
        core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97dc18); /* do not return */
    v16.new(a1, a2, v19, a4);
    v17 = 0;
    v11.try_fold(&v16, &v17);
    switch (vvar_260{stack -152}): 3 cases
}
