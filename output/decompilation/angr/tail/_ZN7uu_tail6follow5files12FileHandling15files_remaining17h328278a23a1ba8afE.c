char uu_tail::follow::files::FileHandling::files_remaining(unsigned long a0)
{
    char v0;  // [bp-0x48]
    unsigned long long v2[3];  // r14

    v0.iter(a0 + 24);
    do
    {
        v2 = v0.next();
    } while (v2 && !(char)v2[1].is_tailable(v2[2]) && !(char)v2[1].is_stdin(v2[2]));
    return v2;
}
