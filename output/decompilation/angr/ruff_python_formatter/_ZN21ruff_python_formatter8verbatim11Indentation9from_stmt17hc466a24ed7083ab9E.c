long long ruff_python_formatter::verbatim::Indentation::from_stmt(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned int v3;  // ebp
    unsigned int v4;  // eax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rax
    unsigned int v8;  // ebx
    unsigned long long v9;  // rdx
    unsigned int v10;  // ebx

    v3 = a1.line_start(a2, (unsigned int)a0.range());
    v4 = a0.range();
    if (v3 > v4)
        core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97fa68); /* do not return */
    v5 = v3.from(v4);
    v7 = v5.get(v6, a1, a2);
    if (!v7)
        core::str::slice_error_fail(a1, a2, v5, v6, &g_97fa80); /* do not return */
    v0 = v7;
    v1 = v6 + v7;
    if (!((char)core::str::validations::next_code_point(&v0) & 1))
        return 0;
    v8 = 0;
    while (true)
    {
        v10 = v8;
        if ((unsigned int)v9 != 9 && (unsigned int)v9 != 32)
            return v10;
        v8 = v10 + 1;
        if (!((char)core::str::validations::next_code_point(&v0) & 1))
            return v10 + 1;
    }
}
