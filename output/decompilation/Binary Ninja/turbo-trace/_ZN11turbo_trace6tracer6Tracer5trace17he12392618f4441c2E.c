
  int512_t turbo_trace::tracer::Tracer::trace::he12392618f4441c2(int64_t* arg1, int128_t* arg2, int64_t arg3, int64_t arg4)

{
    *(arg1 + 0x70) = arg2[6];
    *(arg1 + 0x60) = arg2[5];
    *(arg1 + 0x50) = arg2[4];
    int128_t result = *arg2;
    int128_t zmm1 = arg2[1];
    int128_t zmm2 = arg2[2];
    *(arg1 + 0x40) = arg2[3];
    *(arg1 + 0x30) = zmm2;
    *(arg1 + 0x20) = zmm1;
    *(arg1 + 0x10) = result;
    *arg1 = arg3;
    arg1[1] = arg4;
    arg1[0xbd] = 0;
    return result;
}
