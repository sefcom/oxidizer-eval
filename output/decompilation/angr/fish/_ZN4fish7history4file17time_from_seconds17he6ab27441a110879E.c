long long fish::history::file::time_from_seconds(unsigned long long a0)
{
    if (a0 < 0)
        return 0.sub(0, -(a0), 0);
    return 0.add(0, a0, 0);
}
