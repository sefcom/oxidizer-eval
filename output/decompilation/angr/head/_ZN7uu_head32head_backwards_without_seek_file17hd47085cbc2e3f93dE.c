long long uu_head::head_backwards_without_seek_file(unsigned long long a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rax

    v2 = a1->field_0;
    if (v2 == 1)
    {
        return uu_head::read_but_last_n_lines(a0, a1->field_8, a1->field_2b);
    }
    else if ((unsigned int)v2 == 3)
    {
        return uu_head::read_but_last_n_bytes(a0, a1->field_8);
    }
    else
    {
        v0 = v2;
        core::panicking::panic("internal error: entered unreachable codea Display implementation returned an error unexpectedly/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs", 40, &g_593458); /* do not return */
    }
}
