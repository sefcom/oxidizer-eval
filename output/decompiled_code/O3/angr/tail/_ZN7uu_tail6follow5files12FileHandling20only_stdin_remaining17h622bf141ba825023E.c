long long uu_tail::follow::files::FileHandling::only_stdin_remaining::h622bf141ba825023(struct_0 *a0)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax

    if (a0->field_30 == 1)
    {
        v0 = v2;
        v3 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h6bcff2f93c5c4a46(&a0->padding_0[24], "-standard input/dev/stdin/dev/fd/0\n <==\ncannot open '' for reading", 1);
        return v3 | -0x100 | v3;
    }
    return 0;
}
