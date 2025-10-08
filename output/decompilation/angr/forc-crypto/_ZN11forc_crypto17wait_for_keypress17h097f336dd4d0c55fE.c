void forc_crypto::wait_for_keypress()
{
    char v0;  // [bp-0x9]
    unsigned long long v1;  // [bp-0x8]

    v0 = 0;
    v1 = std::io::stdio::stdin();
    v1.read_exact(&v0, 1).unwrap();
    return;
}
