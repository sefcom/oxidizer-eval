
  off64_t uu_dd::flush_caches_full_length::h2d347dd9f2f16b2f(int32_t* arg1, int32_t* arg2)

{
    void* r15 = *(arg1 + 8);
    
    if (!*(r15 + 0x45))
        goto label_490f8f;
    
    char rax_1;
    off64_t rdx_1;
    rax_1 = uu_dd::Source::len::h6b19960d89696b06(arg1);
    
    if (rax_1 & 1)
        return rdx_1;
    
    uu_dd::Input::discard_cache::h505abcb6f4256ec2(*arg1, arg1[1], 0, rdx_1);
    label_490f8f:
    
    if (*(r15 + 0x9c))
    {
        char rax_3;
        off64_t rdx_2;
        rax_3 = uu_dd::Dest::len::h4b4a69914304b5d1(arg2);
        
        if (rax_3 & 1)
            return rdx_2;
        
        uu_dd::Output::discard_cache::h1b6c721cbbbead38(*arg2, arg2[1], 0, rdx_2);
    }
    
    return 0;
}
