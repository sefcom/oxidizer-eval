long long uu_ls::display_size(unsigned long long a0, unsigned long long a1, char a2)
{
    return uucore::features::format::human::human_readable(a0, a1, a2);
}
