
  int512_t uu_numfmt::options::RoundMethod::round::hb878c776bde79bde(char* arg1, double arg2, uint64_t arg3[0x2] @ zmm1)

{
    switch (jump_table_4233c8[*arg1])
    {
        case 0xa499b:
        {
            if (_mm_xor_pd(arg3, arg3)[0] <= arg2)
                /* tailcall */
                return ceil(arg2);
            
            /* tailcall */
            return floor(arg2);
        }
        case 0xa49a5:
        {
            /* tailcall */
            return floor(arg2);
        }
        case 0xa49ab:
        {
            /* tailcall */
            return round(arg2);
        }
        case 0xa49b1:
        {
            if (_mm_xor_pd(arg3, arg3)[0] <= arg2)
                /* tailcall */
                return floor(arg2);
            
            /* tailcall */
            return ceil(arg2);
        }
        case 0xa49bb:
        {
            /* tailcall */
            return ceil(arg2);
        }
    }
}
