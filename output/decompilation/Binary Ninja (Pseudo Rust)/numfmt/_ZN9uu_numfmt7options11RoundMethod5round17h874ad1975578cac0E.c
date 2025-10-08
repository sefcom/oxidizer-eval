
  fn uu_numfmt::options::RoundMethod::round::h874ad1975578cac0(arg1: *mut i8, arg2: u128 @ zmm0, arg3: [u64; 0x2] @ zmm1) -> i64

{
    match *arg1
    {
        0 =>
        {
            /* tailcall */
            ceil(arg2)
        }
        1 =>
        {
            /* tailcall */
            floor(arg2, arg3)
        }
        2 =>
        {
            arg3 = _mm_xor_pd(arg3, arg3);
            
            if arg3[0] <= arg2
            {
                /* tailcall */
                return ceil(arg2);
            }
            
            /* tailcall */
            floor(arg2, arg3)
        }
        3 =>
        {
            arg3 = _mm_xor_pd(arg3, arg3);
            
            if arg3[0] <= arg2
            {
                /* tailcall */
                return floor(arg2, arg3);
            }
            
            /* tailcall */
            ceil(arg2)
        }
        4 =>
        {
            /* tailcall */
            round(arg2)
        }
    }
}
