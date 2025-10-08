long long uu_chcon::fts::FTS::read_next_entry(struct_0 *a0, unsigned long long a1[2])
{
    unsigned long long v0;  // [bp-0x28]
    char v1;  // [bp-0x20]
    char v2;  // [bp-0x1c]
    unsigned long long v4;  // rax

    v4 = fts_read(a1[0]);
    a1[1] = v4;
    if (v4)
    {
        a0->field_4 = 1;
        a0->field_0 = 18;
        return v4;
    }
    v0 = *(__errno_location()) * 0x100000000 | 2;
    std::io::error::repr_bitpacked::decode_repr(&v1, v0);
    if (!v1 && !*((int *)&v2))
    {
        a0->field_4 = 0;
        a0->field_0 = 18;
        return (unsigned long long)core::ptr::drop_in_place<std::io::error::Error>(&v0);
    }
    a0->field_0 = 16;
    a0->field_8 = "fts_read()FTS::set()fts_set()verbosereferencerangerecursivefollow-arg-dir-sym-linkfollow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --refe";
    a0->field_10 = 10;
    a0->field_18 = v0;
    return "fts_read()FTS::set()fts_set()verbosereferencerangerecursivefollow-arg-dir-sym-linkfollow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --refe";
}
