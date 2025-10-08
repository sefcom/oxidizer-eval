long long ruff_python_formatter::pattern::pattern_match_sequence::SequenceType::from_pattern(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0xbc]
    unsigned long long v1;  // [bp-0xb8]
    unsigned long long v2;  // [bp-0xb0]
    unsigned long long v3;  // [bp-0xa0]
    char v4;  // [bp-0x98]
    char v5;  // [bp-0x68]
    char v6;  // [bp-0x60]
    unsigned int v8;  // ebp
    unsigned long v9;  // r13
    unsigned long long v10;  // rcx
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdx
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long *v17;  // r14
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // r12
    unsigned long long v21;  // rax

    v8 = (int)a0[24];
    v9 = a0 + 28;
    if ((long long)a0[16])
    {
        v10 = *((long long *)(long long)a0[8]) ^ 0x8000000000000000;
        if (v10 >= 8)
            v10 = 3;
        goto (long long)(g_487888[v10] + (char *)&g_487888[0]);
    }
    else if (v8 <= *((int *)v9))
    {
        v11 = v8.from(*((int *)v9));
        v3 = v11.get(v12, a1, a2);
        if (!v3)
        {
            core::str::slice_error_fail(a1, a2, v11, v12, &g_97e730); /* do not return */
        }
        else if (v8 <= *((int *)v9))
        {
            v14 = v8.from(*((int *)v9));
            v15 = v14.get(v12, a1, a2);
            if (!v15)
                core::str::slice_error_fail(a1, a2, v14, v12, &g_97e760); /* do not return */
            v0 = 0;
            if ((char)core::slice::<impl [T]>::starts_with(v3, v12, ::0x6e6590::core::char::methods::encode_utf8_raw(91, &v0), v12))
            {
                v0 = 0;
                if (!(char)core::slice::<impl [T]>::ends_with(v15, v12, ::0x6e6590::core::char::methods::encode_utf8_raw(44, &v0), v12))
                    return 0;
            }
            v0 = 0;
            v16 = core::slice::<impl [T]>::starts_with(v3, v12, ::0x6e6590::core::char::methods::encode_utf8_raw(40, &v0), v12);
            if (!(char)v16)
            {
                return v16 & 0xffffffffffffff00 | 2;
            }
            else if ((long long)a0[16])
            {
                v17 = (long long)a0[8];
                v18 = *(v17) ^ 0x8000000000000000;
                if (8 <= v18)
                    v18 = 3;
                if ((int)a0[24] > *((int *)((char *)v17 + g_48d5d0[v18])))
                    core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97e778); /* do not return */
                v6.new(v1, v2, (int)a0[24], *((int *)((char *)v17 + g_48d5d0[v18])));
                v19 = v6.fold();
                v20 = 0x8000000000000000 ^ *(v17);
                if (v20 >= 8)
                    v20 = 3;
                v4.new(v1, v2, *((int *)((char *)v17 + g_48d590[v20])), *((int *)((char *)v17 + g_48d590[v20])));
                v5 = 0;
                v21 = v4.fold();
                return v21 & 0xffffffffffffff00 | 2 - (v21 < v19);
            }
            else
            {
                return (v16 & 0xffffffffffffff00 | 2) & 0xffffffffffffff00 | 1;
            }
        }
        else
        {
            core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97e748); /* do not return */
        }
    }
    else
    {
        core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97e718); /* do not return */
    }
}
