long long starship::modules::status::status_signal_name(unsigned int a0)
{
    if (a0 - 1 > 21)
        return 0;
    return g_54df08[1 + a0] + (char *)&g_54df08[0];
}
