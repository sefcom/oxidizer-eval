
  fn uu_sort::chunks::RecycledChunk::new::hb2d00041a3f0fa31(arg1: *mut i128, arg2: i64) -> i64

{
    let var_78: i64 = 8;
    let var_60: i64 = 8;
    let var_48: i64 = 8;
    let var_30: i64 = 8;
    let mut var_20: i128;
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h40d6090eae4c2f58(
        &var_20, arg2);
    arg1[1] = 0;
    *arg1 = 0;
    *arg1.byte_offset(0x28) = 0;
    *arg1.byte_offset(0x18) = 0;
    arg1[3] = 0;
    arg1[4] = 0;
    *arg1.byte_offset(0x48) = 0;
    *arg1.byte_offset(0x58) = 0;
    arg1[6] = 0;
    *arg1.byte_offset(0x68) = 8;
    arg1[7] = 0;
    let result: i64;
    *arg1.byte_offset(0x88) = result;
    *arg1.byte_offset(0x78) = var_20;
    result
}
