long long uu_dd::BlockWriter::write_blocks::h4171594e3d4f7075(unsigned long long a0[6], unsigned long long *a1)
{
    unsigned int v1;  // rdx
    unsigned int v2;  // rcx
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rcx

    if (*(a1) == 0x8000000000000000)
        return uu_dd::Output::write_blocks::h78b56ae9a3f355f3(a0, a1 + 1, v1, v2);
    return uu_dd::bufferedoutput::BufferedOutput::write_blocks::h650a144b171239b2(a0, a1, v3, v4);
}
