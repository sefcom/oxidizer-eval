
  fn uu_numfmt::options::RoundMethod::round::hb878c776bde79bde(arg1: *mut i8, arg2: f64, arg3: [u64; 0x2] @ zmm1) -> i512

{
    match jump_table_4233c8[*arg1]
    {
        0xa499b =>
        {
            if _mm_xor_pd(arg3, arg3)[0] <= arg2
            {
                /* tailcall */
                return ceil(arg2);
            }
            
            /* tailcall */
            floor(arg2)
        }
        0xa49a5 =>
        {
            /* tailcall */
            floor(arg2)
        }
        0xa49ab =>
        {
            /* tailcall */
            round(arg2)
        }
        0xa49b1 =>
        {
            if _mm_xor_pd(arg3, arg3)[0] <= arg2
            {
                /* tailcall */
                return floor(arg2);
            }
            
            /* tailcall */
            ceil(arg2)
        }
        0xa49bb =>
        {
            /* tailcall */
            ceil(arg2)
        }
    }
}
