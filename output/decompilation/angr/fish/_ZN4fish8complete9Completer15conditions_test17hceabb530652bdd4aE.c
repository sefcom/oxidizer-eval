char fish::complete::Completer::conditions_test(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = a1;
    v1 = a1 + a2 * 24;
    return v0.all(a0);
}
