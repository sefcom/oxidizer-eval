
  int64_t just::name::Name::from_identifier::hbd4ef0ea8f6e05d8(int128_t* arg1, int128_t* arg2)

{
    if (arg2[4] != 0x18)
    {
        int64_t var_30 = 0;
        core::panicking::assert_failed::h4f47beb1e872bbba(0, &arg2[4], &data_46e88e, &var_30);
        /* no return */
    }
    
    int64_t result = arg2[4];
    arg1[4] = result;
    int128_t zmm0 = *arg2;
    int128_t zmm1 = arg2[1];
    int128_t zmm2 = arg2[2];
    arg1[3] = arg2[3];
    arg1[2] = zmm2;
    arg1[1] = zmm1;
    *arg1 = zmm0;
    return result;
}
