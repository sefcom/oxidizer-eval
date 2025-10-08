
  int64_t uu_dd::Output::sync::hd8ca8f67c1b31cf5(char* arg1)

{
    void* rax_3 = *(arg1 + 0x10);
    
    if (*(rax_3 + 0x95))
        /* tailcall */
        return uu_dd::Dest::fsync::hc1154dc06790ea25(arg1);
    
    if (*(rax_3 + 0x94))
        /* tailcall */
        return uu_dd::Dest::fdatasync::h0ef9d69f27dcd372(arg1);
    
    return 0;
}
