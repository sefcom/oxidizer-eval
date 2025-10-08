long long uu_chcon::fts::FTS::set(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax

    if (!a2)
    {
        a0->field_0 = 16;
        a0->field_8 = "FTS::set()fts_set()verbosereferencerangerecursivefollow-arg-dir-sym-linkfollow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, cha";
        a0->field_10 = 10;
        a0->field_18 = 158913789955;
        return 158913789955;
    }
    v1 = fts_set(a1, a2, a3);
    if ((unsigned int)v1 == -1)
    {
        v2 = *(__errno_location()) * 0x100000000;
        a0->field_0 = 16;
        a0->field_8 = "fts_set()verbosereferencerangerecursivefollow-arg-dir-sym-linkfollow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the se";
        a0->field_10 = 9;
        a0->field_18 = v2 | 2;
        return v2 | 2;
    }
    a0->field_0 = 18;
    return v1;
}
