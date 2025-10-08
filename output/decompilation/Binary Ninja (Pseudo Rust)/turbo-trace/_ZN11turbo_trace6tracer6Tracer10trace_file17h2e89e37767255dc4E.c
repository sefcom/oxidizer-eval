
  fn turbo_trace::tracer::Tracer::trace_file::h2e89e37767255dc4(arg1: *mut i128, arg2: i64, arg3: i64, arg4: *mut i128, arg5: i64, arg6: i64) -> i64

{
    *arg1.byte_offset(0x18) = arg2;
    arg1[2] = arg3;
    *arg1 = *arg4;
    let result: i64 = arg4[1];
    arg1[1] = result;
    arg1[3] = arg5;
    *arg1.byte_offset(0x28) = arg6;
    arg1[0x30] = 0;
    result
}
