
  int512_t fuel_core_client::client::FuelClient::query::h0ed5d4feb39eaa66(int128_t* arg1, int64_t arg2, int128_t* arg3)

{
    arg1[5] = arg2;
    int128_t zmm1 = arg3[1];
    int128_t zmm2 = arg3[2];
    int128_t zmm3 = arg3[3];
    *arg1 = *arg3;
    arg1[1] = zmm1;
    arg1[2] = zmm2;
    arg1[3] = zmm3;
    int128_t result = arg3[4];
    arg1[4] = result;
    arg1[7] = 0;
    return result;
}
