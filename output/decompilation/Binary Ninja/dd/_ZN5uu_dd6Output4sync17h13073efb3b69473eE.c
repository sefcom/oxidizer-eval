
  int64_t uu_dd::Output::sync::h13073efb3b69473e(char* arg1)

{
    void* rax_3 = *(arg1 + 0x10);
    
    if (*(rax_3 + 0x95))
        /* tailcall */
        return uu_dd::Dest::fsync::h5a325d3e1b2c36c4(arg1);
    
    if (*(rax_3 + 0x94))
        /* tailcall */
        return uu_dd::Dest::fdatasync::hb1784b836bce6fab(arg1);
    
    return 0;
}
