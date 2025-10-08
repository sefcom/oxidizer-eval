
  int64_t uu_tail::chunks::LinesChunk::fill::h8372a98993d49080(int64_t* arg1, char* arg2, int64_t* arg3)

{
    int32_t var_40;
    uu_tail::chunks::BytesChunk::fill::h59bd7f494a242c6c(&var_40, arg2, arg3);
    int64_t result;
    int32_t var_38;
    
    if (var_40 != 1)
    {
        if (var_38 != 1)
        {
            *(arg2 + 0x2008) = 0;
            arg1[1] = 0;
        }
        else
        {
            *(arg2 + 0x2008) = uu_tail::chunks::LinesChunk::count_lines::h5dbe30604f66562b(arg2);
            *(arg1 + 8) = var_38;
        }
        
        result = 0;
    }
    else
    {
        *(arg1 + 8) = var_38;
        result = 1;
    }
    *arg1 = result;
    return result;
}
