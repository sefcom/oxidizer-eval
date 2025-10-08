
  int512_t turbo_trace::tracer::Tracer::reverse_trace::h3f1c34d2a73020d4(int128_t* arg1, int128_t* arg2)

{
    arg1[6] = arg2[6];
    arg1[5] = arg2[5];
    arg1[4] = arg2[4];
    int128_t result = *arg2;
    int128_t zmm1 = arg2[1];
    int128_t zmm2 = arg2[2];
    arg1[3] = arg2[3];
    arg1[2] = zmm2;
    arg1[1] = zmm1;
    *arg1 = result;
    *(arg1 + 0x168) = 0;
    return result;
}
