int uu_shred::do_pass::hd89cf0ca9cbf1708()
{
    char v0;  // [bp-0x10188]
    char v1;  // [bp-0x10030]
    void* v2;  // [sp-0x2030]
    unsigned long long v4;  // rdi
    char v5[2];  // rsi
    void* v6;  // r12
    unsigned long v7;  // rcx
    unsigned long long v8;  // rdx

    do
    {
        v2 = 0;
    } while (&v2 != &v1);
    if (!std::io::Seek::rewind::h87bbf0dfa3c74672(v4))
    {
        uu_shred::BytesWriter::from_pass_type::h9b8f49adafc10293(&v0, v5);
        v6 = 0;
        do
        {
            if (v6 >= v7 >> 16)
            {
                if ((unsigned short)v7 && std::io::Write::write_all::hdb2ef0a1157baf82(v4, uu_shred::BytesWriter::bytes_for_pass::h0df75ebf5bedda4a(&v0, ((char)v8 ? v7 & 65535 : 0x10000)), v8))
                    break;
                if (!std::fs::File::sync_data::hf784af99032c3e35(v4))
                    break;
            }
        } while ((v6 = _$LT$u64$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h30cfd590689ce002(v6), !std::io::Write::write_all::hdb2ef0a1157baf82(v4, uu_shred::BytesWriter::bytes_for_pass::h0df75ebf5bedda4a(&v0, 0x10000), v8)));
    }
    return;
}
