char fish::wildcard::wildcard_has_internal(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]
    unsigned long v3;  // rdx

    v0 = a0.as_ref();
    v1 = v0 + v3 * 4;
    return v0.try_fold().eq(1);
}
