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
        core::panicking::panic("internal error: entered unreachable codemid > len/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/impls.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/buffered/bufwriter.rsfailed to write the buffered data", 40, &g_4f7d18); /* do not return */
    }
}
