long long ruff_python_formatter::verbatim::Indentation::trim_indent(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x4c]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned int v4;  // edx
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rax
    unsigned long v8;  // rax
    unsigned int v9;  // r14d

    v0 = a1.range();
    v5 = v0.from(v4);
    v7 = v5.get(v6, a2, a3);
    if (!v7)
        core::str::slice_error_fail(a2, a3, v5, v6, &g_97fa98); /* do not return */
    v1 = v7;
    v2 = v6 + v7;
    if (a0)
    {
        v8 = a0;
        v9 = 0;
        while (true)
        {
            v8 -= 1;
            if (!((char)core::str::validations::next_code_point(&v1) & 1) || (unsigned int)v6 != 32 && (unsigned int)v6 != 9)
                break;
            v9 += 1;
            if (!v8)
                break;
        }
    }
    else
    {
        v9 = 0;
    }
    if (v9 + v0 > (unsigned int)v6)
        core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97fab0); /* do not return */
    return v9 + v0;
}
