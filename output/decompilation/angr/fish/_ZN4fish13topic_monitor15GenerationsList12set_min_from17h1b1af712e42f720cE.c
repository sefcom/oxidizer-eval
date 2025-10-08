long long fish::topic_monitor::GenerationsList::set_min_from(unsigned long long a0[3], char a1, unsigned long long a2[3])
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    if (!a1)
    {
        v3 = a2[0];
        if (a0[0] <= v3)
            return v3;
        a0[0] = v3;
        return v3;
    }
    else if (a1 == 1)
    {
        v1 = a2[1];
        if (a0[1] <= v1)
            return v1;
        a0[1] = v1;
        return v1;
    }
    else
    {
        v2 = a2[2];
        if (a0[2] <= v2)
            return v2;
        a0[2] = v2;
        return v2;
    }
}
