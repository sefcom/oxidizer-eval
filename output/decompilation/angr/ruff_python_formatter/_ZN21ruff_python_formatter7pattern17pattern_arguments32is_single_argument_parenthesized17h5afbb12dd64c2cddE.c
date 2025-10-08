long long ruff_python_formatter::pattern::pattern_arguments::is_single_argument_parenthesized(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v2;  // [bp-0x40]
    unsigned long long v4;  // rax

    v4 = 0x8000000000000000 ^ *((long long *)a0);
    if (v4 >= 8)
        v4 = 3;
    if (*((int *)((char *)a0 + g_48d590[v4])) > a1)
        core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97e5f8); /* do not return */
    v2.new(a2, a3, *((int *)((char *)a0 + g_48d590[v4])), a1);
}
