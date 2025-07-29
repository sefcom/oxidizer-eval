long long uu_cat::cat_handle(unsigned long long a0, unsigned long long a1, char a2[5], unsigned long long a3)
{
    if (!(!a2[1]))
        goto LABEL_0x49e520;
    if (!(!a2[3]))
        goto LABEL_0x49e520;
    if (!(!a2[2]))
        goto LABEL_0x49e520;
    if (!(!a2[0]))
        goto LABEL_0x49e520;
    if (!a2[4])
        goto LABEL_0x49ddb0;
    return uu_cat::write_lines(a0, a1, a2, a3);
}
