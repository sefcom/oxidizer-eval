
  uint32_t just::output_error::OutputError::result_from_exit_status::hf1fa63d3fe1b5ea4(int32_t* arg1, int32_t arg2)

{
    uint32_t result = arg2 & 0x7f;
    char rcx;
    
    if (!result)
    {
        rcx = 2;
        uint32_t result_1 = arg2 >> 8;
        result = result_1;
        
        if (!result_1)
        {
            arg1[2] = 7;
            return result;
        }
    }
    else
    {
        rcx = 5;
        
        if (result + 1 < 2)
        {
            arg1[2] = 6;
            return result;
        }
    }
    
    *arg1 = result;
    arg1[2] = rcx;
    return result;
}
