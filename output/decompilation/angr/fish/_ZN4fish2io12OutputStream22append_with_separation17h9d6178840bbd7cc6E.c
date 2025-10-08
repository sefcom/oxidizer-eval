long long fish::io::OutputStream::append_with_separation(unsigned int *a0, unsigned long long a1, unsigned long long a2, char a3, char a4)
{
    char v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x18]

    if (*(a0) == 3)
    {
        return a0 + 2.append_with_separation(a1, a2, a3);
    }
    else if ((a4 & a3))
    {
        v0.to_vec(a1, a2);
        v0.push(10);
        v3 = v1;
        memcpy(&v2, &v0, 16);
        return (unsigned long long)a0.append(&v2);
    }
    else
    {
        return (unsigned long long)a0.append(a1, a2);
    }
}
