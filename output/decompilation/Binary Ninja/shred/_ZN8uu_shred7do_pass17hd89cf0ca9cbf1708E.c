
  char const (**)[0xc6] uu_shred::do_pass::hd89cf0ca9cbf1708(int32_t* arg1, char* arg2, char arg3, int64_t arg4)

{
    int64_t rbp;
    int64_t var_8 = rbp;
    int64_t r15;
    int64_t var_10 = r15;
    int64_t r14;
    int64_t var_18 = r14;
    int64_t r13;
    int64_t var_20 = r13;
    int64_t r12;
    int64_t var_28 = r12;
    int64_t rbx;
    int64_t var_30 = rbx;
    int64_t* i = &var_30;
    void var_10030;
    
    do
    {
        i -= 0x1000;
        *i = 0;
    } while (i != &var_10030);
    
    char const (** i_1)[0xc6] = std::io::Seek::rewind::h87bbf0dfa3c74672(arg1);
    
    if (!i_1)
    {
        uu_shred::BytesWriter::from_pass_type::h9b8f49adafc10293(i - 0x158, arg2);
        int64_t r12_2 = 0;
        
        do
        {
            if (r12_2 >= arg4 >> 0x10)
            {
                int64_t r14_2 = arg4 & 0xffff;
                
                if (r14_2)
                {
                    int64_t rsi_2 = 0x10000;
                    
                    if (arg3)
                        rsi_2 = r14_2;
                    
                    int64_t rax_2;
                    uint64_t rdx_1;
                    rax_2 =
                        uu_shred::BytesWriter::bytes_for_pass::h0df75ebf5bedda4a(i - 0x158, rsi_2);
                    i_1 = std::io::Write::write_all::hdb2ef0a1157baf82(arg1, rax_2, rdx_1);
                }
                
                if (!r14_2 || !i_1)
                {
                    i_1 = std::fs::File::sync_data::hf784af99032c3e35(arg1);
                    
                    if (!i_1)
                        i_1 = nullptr;
                }
                
                break;
            }
            
            r12_2 = _$LT$u64$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h30cfd590689ce002(r12_2);
            int64_t rax_1;
            uint64_t rdx;
            rax_1 = uu_shred::BytesWriter::bytes_for_pass::h0df75ebf5bedda4a(i - 0x158, 0x10000);
            i_1 = std::io::Write::write_all::hdb2ef0a1157baf82(arg1, rax_1, rdx);
        } while (!i_1);
    }
    
    i[0x2000];
    i[0x2001];
    i[0x2002];
    i[0x2003];
    i[0x2004];
    i[0x2005];
    return i_1;
}
