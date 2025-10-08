
  fn turbo_trace::tracer::Tracer::reverse_trace::h3f1c34d2a73020d4(arg1: *mut i128, arg2: *mut i128) -> i512

{
    arg1[6] = arg2[6];
    arg1[5] = arg2[5];
    arg1[4] = arg2[4];
    let result: i128 = *arg2;
    let zmm1: i128 = arg2[1];
    let zmm2: i128 = arg2[2];
    arg1[3] = arg2[3];
    arg1[2] = zmm2;
    arg1[1] = zmm1;
    *arg1 = result;
    *arg1.byte_offset(0x168) = 0;
    result
}
