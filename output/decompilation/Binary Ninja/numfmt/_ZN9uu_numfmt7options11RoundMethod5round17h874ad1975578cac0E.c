
  int64_t uu_numfmt::options::RoundMethod::round::h874ad1975578cac0(char* arg1, uint128_t arg2 @ zmm0, uint64_t arg3[0x2] @ zmm1)

{
    switch (*arg1)
    {
        case 0:
        {
            /* tailcall */
            return ceil(arg2);
        }
        case 1:
        {
            /* tailcall */
            return floor(arg2, arg3);
        }
        case 2:
        {
            arg3 = _mm_xor_pd(arg3, arg3);
            
            if (arg3[0] <= arg2)
                /* tailcall */
                return ceil(arg2);
            
            /* tailcall */
            return floor(arg2, arg3);
        }
        case 3:
        {
            arg3 = _mm_xor_pd(arg3, arg3);
            
            if (arg3[0] <= arg2)
                /* tailcall */
                return floor(arg2, arg3);
            
            /* tailcall */
            return ceil(arg2);
        }
        case 4:
        {
            /* tailcall */
            return round(arg2);
        }
    }
}
