
  fn bat::assets::assets_metadata::AssetsMetadata::new::h19ae9540b0248af9(arg1: *mut i128, arg2: i64, arg3: u64) -> i64

{
    let mut var_20: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(&var_20, arg2, arg3);
    let mut result: i64;
    let mut rdx: i32;
    result = std::time::SystemTime::now::h4fbc1302a9c481f4();
    let var_10: i64;
    arg1[1] = var_10;
    *arg1 = var_20;
    *arg1.byte_offset(0x18) = result;
    arg1[2] = rdx;
    result
}
