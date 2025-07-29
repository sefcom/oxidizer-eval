long long uu_dd::Output::new_file_from_stdout(struct_0 *a0, void* a1)
{
    char v0;  // [bp-0x28], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x24]
    char v3;  // [bp-0x20]
    unsigned long v5;  // rdx
    unsigned int v6;  // edx
    unsigned long v7;  // rdx

    std::io::stdio::stdout();
    v0.from();
    if ((v0 & 1))
    {
        a0->field_8 = *((long long *)&v3).from();
        a0->field_10 = v5;
        a0->field_0 = 4;
        return a0;
    }
    if ((int)uu_dd::make_linux_oflags(a1 + 150) == 1)
    {
        v1 = v6;
        v0 = 5;
        if ((unsigned int)nix::fcntl::fcntl(v2, &v0))
        {
            a0->field_8 = v6.from();
            a0->field_10 = v7;
            a0->field_0 = 4;
            ::0x4cc0d0::core::ptr::drop_in_place<std::sys::pal::unix::fd::FileDesc>(v2);
            return a0;
        }
    }
    a0.prepare_file(v2, a1);
    return a0;
}
