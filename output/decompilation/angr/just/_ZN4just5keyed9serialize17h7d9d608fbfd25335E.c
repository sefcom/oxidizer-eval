long long just::keyed::serialize(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v1;  // rdx

    return a1.serialize_str(a0.key(), v1);
}
