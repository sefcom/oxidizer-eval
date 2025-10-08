
  int64_t turbo_trace::tracer::Tracer::trace_file::h2e89e37767255dc4(int128_t* arg1, int64_t arg2, int64_t arg3, int128_t* arg4, int64_t arg5, int64_t arg6)

{
    *(arg1 + 0x18) = arg2;
    arg1[2] = arg3;
    *arg1 = *arg4;
    int64_t result = arg4[1];
    arg1[1] = result;
    arg1[3] = arg5;
    *(arg1 + 0x28) = arg6;
    arg1[0x30] = 0;
    return result;
}
