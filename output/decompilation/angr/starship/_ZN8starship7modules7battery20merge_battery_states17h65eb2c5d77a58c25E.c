long long starship::modules::battery::merge_battery_states(char a0, char a1)
{
    unsigned long v1;  // rax

    if (!(!a1 == 1 && !a0 == 1))
    {
        return v1 & 0xffffffffffffff00 | 1;
    }
    else if (!(a1 != 2 & a0 != 2))
    {
        return (v1 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 2;
    }
    else if (a0 == a1)
    {
        return a0;
    }
    else if (!a0)
    {
        return a1;
    }
    else if (a1)
    {
        return 0;
    }
    else
    {
        return a0;
    }
}
