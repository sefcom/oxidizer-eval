long long forc_crypto::keys::vanity::validate_hex_string(unsigned long long *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long v3;  // rdi
    unsigned long long v4;  // rax

    v0 = a1;
    v1 = a1 + a2;
    v3 = a0 + 1;
    if (v0.try_fold().eq())
    {
        v3.to_vec(a1, a2);
        v4 = 0;
    }
    else
    {
        v3.to_vec("Pattern must contain only hex characters (0-9, a-f)Regex pattern too long: max 128 charactersInvalid regex pattern: Combined pattern length exceeds 64 charactersStarting to generate vanity address...\n", 51);
        v4 = 1;
    }
    *(a0) = v4;
    return v4;
}
