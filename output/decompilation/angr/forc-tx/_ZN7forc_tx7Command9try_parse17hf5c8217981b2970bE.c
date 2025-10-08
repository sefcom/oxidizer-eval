long long forc_tx::Command::try_parse(unsigned long long a0)
{
    char v0;  // [bp-0x30]

    std::env::args(&v0);
    a0.try_parse_from_args(&v0);
    return a0;
}
