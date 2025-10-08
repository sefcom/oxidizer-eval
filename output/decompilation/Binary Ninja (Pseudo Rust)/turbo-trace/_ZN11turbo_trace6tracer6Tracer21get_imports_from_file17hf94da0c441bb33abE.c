
  fn turbo_trace::tracer::Tracer::get_imports_from_file::hf94da0c441bb33ab(arg1: *mut c_void, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: i8) -> i64

{
    *arg1.byte_offset(0x50) = arg2;
    *arg1.byte_offset(0x58) = arg3;
    *arg1.byte_offset(0x60) = arg4;
    *arg1.byte_offset(0x10) = arg5;
    *arg1.byte_offset(0x18) = arg6;
    *arg1.byte_offset(0x6c) = arg7;
    *arg1.byte_offset(0x6b) = 0;
    arg7
}
