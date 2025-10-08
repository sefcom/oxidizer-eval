
  fn linera_benchmark::benchmark_with_fungible::h153fde07389cc22c(arg1: *mut i128, arg2: i64, arg3: i64, arg4: *mut i128, arg5: i64, arg6: i8) -> i64

{
    *arg1.byte_offset(0x18) = arg2;
    arg1[2] = arg3;
    *arg1 = *arg4;
    let result: i64 = arg4[1];
    arg1[1] = result;
    *arg1.byte_offset(0x28) = arg5;
    arg1[0x1c] = arg6;
    *arg1.byte_offset(0x1c1) = 0;
    result
}
