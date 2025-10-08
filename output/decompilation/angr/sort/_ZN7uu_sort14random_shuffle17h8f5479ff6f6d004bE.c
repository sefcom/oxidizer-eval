char uu_sort::random_shuffle(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x49]
    unsigned long long v1;  // [bp-0x48]
    char v2;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x40]
    unsigned long long v4;  // [bp-0x38]

    v1 = 14695981039346656037;
    v1.write(a0, a1);
    v0 = 255;
    v1.write(&v0, 1);
    v4 = 16;
    v1.write(&v4, 8);
    v1.write(a4, 16);
    v3 = 14695981039346656037;
    v3.write(a2, a3);
    v2 = 255;
    v3.write(&v2, 1);
    v2 = 16;
    v3.write(&v2, 8);
    v3.write(a4, 16);
    return (v1 > v3) - 0 - (v1 < v3);
}
