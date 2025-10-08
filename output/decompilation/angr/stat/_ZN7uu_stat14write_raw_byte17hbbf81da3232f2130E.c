void uu_stat::write_raw_byte(char a0)
{
    char v0;  // [bp-0x11]
    unsigned long long v1;  // [bp-0x10]

    v1 = std::io::stdio::stdout();
    v0 = a0;
    v1.write_all(&v0, 1).unwrap();
    return;
}
