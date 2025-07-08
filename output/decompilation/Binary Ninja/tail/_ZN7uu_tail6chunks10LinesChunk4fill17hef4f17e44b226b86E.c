
  int64_t* uu_tail::chunks::LinesChunk::fill::hef4f17e44b226b86(int64_t* arg1, char* arg2, int64_t* arg3)

{
    int64_t var_30;
    uu_tail::chunks::BytesChunk::fill::h4a717c5d739984d3(&var_30, arg2, arg3);
    int64_t rax_1;
    int64_t var_28;
    
    if (!var_30)
    {
        if (!var_28)
        {
            *(arg2 + 0x2008) = 0;
            arg1[1] = 0;
        }
        else
        {
            *(arg2 + 0x2008) = uu_tail::chunks::LinesChunk::count_lines::hff5a62bbb9e14842(arg2);
            arg1[1] = 1;
            int64_t var_20;
            arg1[2] = var_20;
        }
        
        rax_1 = 0;
    }
    else
    {
        *(arg1 + 8) = var_28;
        rax_1 = 1;
    }
    *arg1 = rax_1;
    return arg1;
}
