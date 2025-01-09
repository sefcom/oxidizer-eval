long long uu_cp::print_verbose_output::h1215961a97776bc3(unsigned long a0, unsigned long long *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [sp-0x29]
    char *v1;  // [sp-0x28]
    unsigned long long v2;  // [sp-0x20]
    unsigned long long v3;  // [sp-0x18]
    unsigned long long v4;  // [sp-0x10]
    unsigned long long v5;  // [sp-0x8]

    v0 = a0;
    if (*(a1))
    {
        v1 = &v0;
        v2 = a2;
        v3 = a3;
        v4 = a4;
        v5 = a5;
        return indicatif::progress_bar::ProgressBar::suspend::h78333758525eb5c8(a1, &v1);
    }
    return uu_cp::print_paths::h93d7a9a3ec668051(a0 & 4294967295, a2, a3, a4, a5);
}
