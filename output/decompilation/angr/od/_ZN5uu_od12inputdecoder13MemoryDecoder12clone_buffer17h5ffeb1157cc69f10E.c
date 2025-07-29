void uu_od::inputdecoder::MemoryDecoder::clone_buffer(unsigned long long a0[2], unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    a1.clone_from(a0[0]);
    a1.resize(a0[1], 0);
    return;
}
