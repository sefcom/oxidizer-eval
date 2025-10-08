
  fn just::name::Name::from_identifier::hbd4ef0ea8f6e05d8(arg1: *mut i128, arg2: *mut i128) -> i64

{
    if arg2[4] != 0x18
    {
        let mut var_30: i64 = 0;
        core::panicking::assert_failed::h4f47beb1e872bbba(0, &arg2[4], &data_46e88e, &var_30);
        /* no return */
    }
    
    let result: i64 = arg2[4];
    arg1[4] = result;
    let zmm0: i128 = *arg2;
    let zmm1: i128 = arg2[1];
    let zmm2: i128 = arg2[2];
    arg1[3] = arg2[3];
    arg1[2] = zmm2;
    arg1[1] = zmm1;
    *arg1 = zmm0;
    result
}
