long long uu_cp::handle_no_preserve_mode(char a0, char a1, unsigned int a2)
{
    return ((a0 & 1) ? a2 : (!(a1 & 1) ? a2 & 511 : 438));
}
