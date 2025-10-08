
  fn turbo_trace::tracer::Tracer::trace::he12392618f4441c2(arg1: *mut i64, arg2: *mut i128, arg3: i64, arg4: i64) -> i512

{
    *arg1.byte_offset(0x70) = arg2[6];
    *arg1.byte_offset(0x60) = arg2[5];
    *arg1.byte_offset(0x50) = arg2[4];
    let result: i128 = *arg2;
    let zmm1: i128 = arg2[1];
    let zmm2: i128 = arg2[2];
    *arg1.byte_offset(0x40) = arg2[3];
    *arg1.byte_offset(0x30) = zmm2;
    *arg1.byte_offset(0x20) = zmm1;
    *arg1.byte_offset(0x10) = result;
    *arg1 = arg3;
    arg1[1] = arg4;
    arg1[0xbd] = 0;
    result
}
