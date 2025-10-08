
  int64_t fuel_core_client::reqwest_ext::FuelOperation$LT$Operation$GT$::new::h2a6fede262a19031(int128_t* arg1, int128_t* arg2, int32_t arg3, int32_t arg4)

{
    int64_t result = arg2[6];
    arg1[6] = result;
    arg1[5] = arg2[5];
    arg1[4] = arg2[4];
    int128_t zmm0 = *arg2;
    int128_t zmm1 = arg2[1];
    int128_t zmm2 = arg2[2];
    arg1[3] = arg2[3];
    arg1[2] = zmm2;
    arg1[1] = zmm1;
    *arg1 = zmm0;
    *(arg1 + 0x68) = arg3;
    *(arg1 + 0x6c) = arg4;
    return result;
}
