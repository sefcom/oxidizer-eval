long long starship::modules::os::get_symbol(unsigned long long a0, char a1)
{
    unsigned long long v1;  // rdx

    return a0.get_symbol(a1).or_else(v1, a1);
}
