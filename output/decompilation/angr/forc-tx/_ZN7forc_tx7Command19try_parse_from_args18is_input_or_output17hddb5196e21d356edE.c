long long forc_tx::Command::try_parse_from_args::is_input_or_output(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = a0.equal(a1, "input", 5);
    if (!(char)v3)
        return a0.equal(a1, "outputforc-plugins/forc-tx/src/lib.rs", 6);
    return v3 & 0xffffffffffffff00 | 1;
}
