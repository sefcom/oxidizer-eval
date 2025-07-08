
  int64_t uu_shred::BytesWriter::from_pass_type::h9b8f49adafc10293(char* arg1, char* arg2)

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
    void var_20028;
    
    do
    {
        i -= 0x1000;
        *i = 0;
    } while (i != &var_20028);
    
    uint32_t rax = *arg2;
    int64_t result;
    
    if (!rax)
    {
        memset(i - 4, arg2[1], 0x10002);
        label_4bc1eb:
        *(arg1 + 0x10008) = 0;
        result = memcpy(&arg1[1], i - 4, 0x10002);
        rbp = 1;
    }
    else
    {
        if (rax != 2)
        {
            memset(i + 0xfffe, 0, 0x10002);
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact_mut::h9602805c4835881b(
                i - 0x30, i + 0xfffe);
            int64_t i_1;
            uint64_t rdx_1;
            i_1 = _$LT$core..slice..iter..ChunksExactMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7dcdd33cfb13c3b(i - 0x30);
            
            while (i_1)
            {
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h592b16ec71136960(i_1, 
                    rdx_1, &arg2[1], 3);
                i_1 = _$LT$core..slice..iter..ChunksExactMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7dcdd33cfb13c3b(i - 0x30);
            }
            
            memcpy(i - 4, i + 0xfffe, 0x10002);
            goto label_4bc1eb;
        }
        
        rand_core::SeedableRng::from_entropy::hd7fe6f62e2325342(&arg1[0x10]);
        rbp = 0;
        result = memset(&arg1[0x150], 0, 0x10000);
    }
    
    *arg1 = rbp;
    i[0x4000];
    i[0x4001];
    i[0x4002];
    i[0x4003];
    i[0x4004];
    return result;
}
