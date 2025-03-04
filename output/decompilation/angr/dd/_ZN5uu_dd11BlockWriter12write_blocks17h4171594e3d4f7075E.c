long long uu_dd::BlockWriter::write_blocks::h4171594e3d4f7075(unsigned long long a0[6], unsigned long long *a1, unsigned long a2, unsigned long a3)
{
    if (*(a1) == 0x8000000000000000)
        return uu_dd::Output::write_blocks::h78b56ae9a3f355f3(a0, a1 + 1, a2, a3);
    return uu_dd::bufferedoutput::BufferedOutput::write_blocks::h650a144b171239b2(a0, a1, a2, a3);
}
