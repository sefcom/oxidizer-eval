char bat::style::StyleComponentList::contains_override(unsigned long long a0[3])
{
    unsigned long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = a0[1];
    v1 = a0[1] + a0[2] * 2;
    return v0.any();
}
