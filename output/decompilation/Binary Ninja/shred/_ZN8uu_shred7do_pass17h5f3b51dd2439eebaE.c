
  void** uu_shred::do_pass::h5f3b51dd2439eeba(int32_t* arg1, char* arg2, char arg3, int64_t arg4)

{
    int64_t rbp;
    int64_t var_8 = rbp;
    int64_t r15;
    int64_t var_10 = r15;
    int64_t r14;
    int64_t var_18 = r14;
    int64_t r12;
    int64_t var_20 = r12;
    int64_t rbx;
    int64_t var_28 = rbx;
    int64_t* i = &var_28;
    void var_10028;
    
    do
    {
        i -= 0x1000;
        *i = 0;
    } while (i != &var_10028);
    
    int64_t r14_1 = arg4;
    void** i_1 = std::io::Seek::rewind::h2f4d22a4a492d7bb(arg1);
    
    if (!i_1)
    {
        uu_shred::BytesWriter::from_pass_type::hee8253cabbfb6b71(i - 0x150, arg2);
        
        if (!arg3)
        {
            int32_t rax;
            rax = r14_1 & 0xfff;
            r14_1 = ((rax << 0xc) + r14_1) & 0xfffffffffffff000;
        }
        
        int64_t r12_3 = (r14_1 >> 0x10) + 1;
        
        do
        {
            int64_t temp0_1 = r12_3;
            r12_3 -= 1;
            
            if (temp0_1 == 1)
            {
                int64_t rax_5;
                uint64_t rdx_1;
                rax_5 = uu_shred::BytesWriter::bytes_for_pass::hdca822ed44bdc744(i - 0x150, r14_1);
                i_1 = std::io::Write::write_all::h0b38a243f4c38c2f(arg1, rax_5, rdx_1);
                
                if (!i_1)
                    i_1 = std::fs::File::sync_data::h8645e777bbe562fa(arg1);
                
                break;
            }
            
            int64_t rax_4;
            uint64_t rdx;
            rax_4 = uu_shred::BytesWriter::bytes_for_pass::hdca822ed44bdc744(i - 0x150, 0x10000);
            i_1 = std::io::Write::write_all::h0b38a243f4c38c2f(arg1, rax_4, rdx);
        } while (!i_1);
    }
    
    i[0x2000];
    i[0x2001];
    i[0x2002];
    i[0x2003];
    i[0x2004];
    return i_1;
}
