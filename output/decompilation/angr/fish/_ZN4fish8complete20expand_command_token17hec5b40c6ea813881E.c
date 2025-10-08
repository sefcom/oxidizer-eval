long long fish::complete::expand_command_token(unsigned long long a0, unsigned long long a1)
{
    return fish::expand::expand_one(a1, 5, a0, 0);
}
