long long uu_who::platform::unix::idle_string::NOW::__init(unsigned long long a0)
{
    char v0;  // [bp-0x20]

    v0.now_local();
    return a0.unwrap(&v0);
}
