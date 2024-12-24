int uu_shred::do_pass::h8de5020a6d2af77b()
{
    char v0;  // [bp-0x10188]
    char v1;  // [bp-0x10030]
    void* v2;  // [sp-0x2030]
    unsigned long long v4;  // rdi
    unsigned long long v5;  // rsi
    void* v6;  // r12
    unsigned long v7;  // rcx
    unsigned int v8;  // rdx
    unsigned long long v9;  // r14

    do
    {
        v2 = 0;
    } while (&v2 != &v1);
    if (!std::io::Seek::rewind::h8f3b05b0b65fceae(v4))
    {
        uu_shred::BytesWriter::from_pass_type::h77709c499b36f9a8(&v0, v5);
        v6 = 0;
        do
        {
            if (v6 >= v7 >> 16)
            {
                v9 = v7 & 65535;
                if ((unsigned short)v7)
                {
                    if (!(char)v8)
                        v9 = 0x10000;
                    if (std::io::Write::write_all::hc6e1c765202c9224(v4, uu_shred::BytesWriter::bytes_for_pass::hc2cc24494788ad2a(&v0, v9, v8)))
                        break;
                }
                if (!std::fs::File::sync_data::hf784af99032c3e35(v4))
                    break;
            }
        } while ((v6 = _$LT$u64$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h30cfd590689ce002(v6), !(unsigned long long)std::io::Write::write_all::hc6e1c765202c9224(v4, uu_shred::BytesWriter::bytes_for_pass::hc2cc24494788ad2a(&v0, 0x10000, v8))));
    }
    return;
}
