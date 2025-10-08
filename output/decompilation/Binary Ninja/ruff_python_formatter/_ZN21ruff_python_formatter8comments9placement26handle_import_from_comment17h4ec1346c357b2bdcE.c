
  void ruff_python_formatter::comments::placement::handle_import_from_comment::h4ec1346c357b2bdc(int64_t* arg1, int128_t* arg2, void* arg3)

{
    if (!*(arg2 + 0x48) && *(arg3 + 0x10))
    {
        int32_t rbx_1 = arg2[4];
        
        if (ruff_python_formatter::comments::placement::handle_import_from_comment::_$u7b$$u7b$closure$u7d$$u7d$::h2b231f443a216c66(*(arg3 + 0x40), rbx_1, *(arg3 + 8)))
        {
            int32_t rax_2 = *(arg2 + 0x44);
            *(arg1 + 8) = *arg2;
            arg1[3] = rbx_1;
            *(arg1 + 0x1c) = rax_2;
            arg1[4] = 0;
            *arg1 = 0x60;
            return;
        }
    }
    
    *(arg1 + 0x40) = arg2[4];
    int128_t zmm0 = *arg2;
    int128_t zmm1 = arg2[1];
    int128_t zmm2 = arg2[2];
    *(arg1 + 0x30) = arg2[3];
    *(arg1 + 0x20) = zmm2;
    *(arg1 + 0x10) = zmm1;
    *arg1 = zmm0;
}
