void fish::io::OutputStream::appendln(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x30]

    v1.into(a1);
    v0.add(&v1, "\n", 1);
    a0.append(&v0);
    return;
}
