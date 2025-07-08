
  off64_t uu_dd::flush_caches_full_length::h852ee23a16d52f1f(int32_t* arg1, int32_t* arg2)

{
    void* r15 = *(arg1 + 8);
    
    if (!*(r15 + 0x45))
        goto label_4d7f39;
    
    int64_t rax_1;
    off64_t rdx_1;
    rax_1 = uu_dd::Source::len::hc3b1b96fe0850bcf(arg1);
    
    if (rax_1)
        return rdx_1;
    
    arg1[1];
    uu_dd::Input::discard_cache::h2bede2b9be5bf459(*arg1);
    label_4d7f39:
    
    if (*(r15 + 0x9c))
    {
        int64_t rax_2;
        off64_t rdx_3;
        rax_2 = uu_dd::Dest::len::hc5f67b7ac477ff9e(arg2);
        
        if (rax_2)
            return rdx_3;
        
        uu_dd::Output::discard_cache::h9654de1740a6c207(arg2, 0, rdx_3);
    }
    
    return 0;
}
