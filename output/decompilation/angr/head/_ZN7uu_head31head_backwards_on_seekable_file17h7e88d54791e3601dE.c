long long uu_head::head_backwards_on_seekable_file(unsigned long long a0, struct_0 *a1)
{
    char v0;  // [bp-0xc0]
    char v1;  // [bp-0x70]
    unsigned long long v3;  // rsi

    if (a1->field_0 != 1)
    {
        if ((unsigned int)a1->field_0 == 3)
        {
            v0.metadata(a0);
            if (*((int *)&v0) == 2)
                return 1;
            v3 = *((long long *)&v1) - a1->field_8;
            if (*((long long *)&v1) <= a1->field_8)
                return 0;
        }
        else
        {
            core::panicking::panic("internal error: entered unreachable codemid > len/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/impls.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/buffered/bufwriter.rsfailed to write the buffered data", 40, &g_4f7d30); /* do not return */
        }
    }
    else
    {
        if (((char)uu_head::find_nth_line_from_end(a0, a1->field_8, a1->field_2b) & 1))
            return 1;
    }
    return uu_head::read_n_bytes(a0, v3);
}
