long long uu_install::is_potential_directory_path(unsigned long long a0, unsigned long long a1)
{
    void* v1;  // rax

    v1 = a0 + a1;
    if (!!v1 - 1 && !!a1 && (char)v1[1] == 47)
        return v1 - 1 & 0xffffffffffffff00 | 1;
    return a0.is_dir(a1);
}
