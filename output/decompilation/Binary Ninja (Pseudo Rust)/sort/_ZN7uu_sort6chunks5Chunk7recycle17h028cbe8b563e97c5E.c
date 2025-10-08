
  fn uu_sort::chunks::Chunk::recycle::h028cbe8b563e97c5(arg1: *mut i128, arg2: *mut i128) -> i64

{
    let mut var_90: i128;
    uu_sort::chunks::Chunk::recycle::_$u7b$$u7b$closure$u7d$$u7d$::h5aa6f24667c412f2(&var_90, 
        arg2.byte_offset(0x18));
    let var_80: i64;
    arg1[1] = var_80;
    *arg1 = var_90;
    let var_68: i64;
    *arg1.byte_offset(0x28) = var_68;
    let var_78: i128;
    *arg1.byte_offset(0x18) = var_78;
    let var_50: i64;
    arg1[4] = var_50;
    let var_60: i128;
    arg1[3] = var_60;
    let var_48: i128;
    *arg1.byte_offset(0x48) = var_48;
    let var_38: i64;
    *arg1.byte_offset(0x58) = var_38;
    let result: i64 =
        uu_sort::chunks::Chunk::into_owner::hd1e9e602c1fbd272(arg1.byte_offset(0x78), arg2);
    let var_30: i128;
    arg1[6] = var_30;
    let var_20: i64;
    arg1[7] = var_20;
    result
}
