long long fish::path::append_path_component(unsigned long long a0[3], unsigned int *a1, unsigned long a2)
{
    unsigned int v1;  // eax
    unsigned int v2;  // ecx

    if ((a0[2] & a2))
    {
        v1 = a0[1].char_at(a0[2], a0[2] - 1);
        v2 = *(a1);
        if ((*(a1) != 47 & v1 != 47))
        {
            a0.push(47);
        }
        else if (!(v1 ^ 47) && !(*(a1) ^ 47))
        {
            a0.pop();
        }
    }
    return a0.spec_extend(a1, &a1[a2]);
}
