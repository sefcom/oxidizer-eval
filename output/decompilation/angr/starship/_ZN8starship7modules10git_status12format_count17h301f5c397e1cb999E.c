long long starship::modules::git_status::format_count(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long a6)
{
    unsigned long v0;  // [bp-0x8], Other Possible Types: unsigned long long
    unsigned long long v1;  // rax

    v0 = v1;
    if (!a6)
    {
        *(a0) = 0x8000000000000000;
        return v0;
    }
    v0 = &vvar_6;
    starship::modules::git_status::format_text(a0, a1, a2, a3, a4, a5);
    return v0;
}
