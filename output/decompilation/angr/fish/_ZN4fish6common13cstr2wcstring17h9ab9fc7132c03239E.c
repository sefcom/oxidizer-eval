long long fish::common::cstr2wcstring(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rdx

    fish::common::str2wcstring(a0, a1.from_bytes_until_nul(a2, a2).unwrap(v1), v1 - 1);
    return a0;
}
