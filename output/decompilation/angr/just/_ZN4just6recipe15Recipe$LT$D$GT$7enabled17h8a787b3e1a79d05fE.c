char just::recipe::Recipe<D>::enabled(unsigned long a0)
{
    unsigned long v1;  // r14
    char v2;  // al
    char v3;  // al
    char v4;  // al
    char v5;  // al

    v1 = a0 + 216;
    v2 = v1.contains(6);
    v3 = v1.contains(7);
    v4 = v1.contains(12);
    v5 = v1.contains(17);
    return (v1.contains(18) | v4 | v3) ^ 1 | v5 | v2;
}
