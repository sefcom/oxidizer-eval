long long uu_ls::extract_files(unsigned long long a0)
{
    unsigned long long v1;  // rax

    if (!(char)a0.get_flag(_ZN5uu_ls7options5files3ALL17h16529103a8eea774E, g_6a0c10))
    {
        v1 = a0.get_flag(_ZN5uu_ls7options5files10ALMOST_ALL17h27f039401448df6dE, g_6a0c20);
        return v1 & 0xffffffffffffff00 | 2 - (char)v1;
    }
    return 0;
}
