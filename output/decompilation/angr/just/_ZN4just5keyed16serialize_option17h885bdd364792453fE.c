long long just::keyed::serialize_option(unsigned long long a0, unsigned long long a1)
{
    if (!a0)
        return a1.serialize_none();
    return just::keyed::serialize(a0, a1);
}
