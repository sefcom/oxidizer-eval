long * __rustcall
uu_wc::count_fast::count_bytes_chars_and_lines_fast(long *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined auVar4 [16];
  long local_4038;
  undefined8 local_4030 [512];
  undefined8 local_3030;
  undefined8 local_2030;
  undefined8 local_1030;
  
  local_1030 = 0;
  local_2030 = 0;
  local_3030 = 0;
  local_4030[0] = 0;
  local_4038 = 0;
  (*(code *)PTR_memset_00236600)(local_4030,0,0x4000);
  lVar3 = 0;
  while( true ) {
    while( true ) {
      auVar4 = _<std::fs::File_as_std::io::Read>::read(param_2,local_4030,0x4000);
      lVar2 = auVar4._8_8_;
      if (auVar4._0_8_ == 0) break;
      cVar1 = std::io::error::Error::kind(lVar2);
      if (cVar1 != '#') {
        *param_1 = lVar3;
        param_1[1] = local_4038;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = lVar2;
        return param_1;
      }
      core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(lVar2);
    }
    if (lVar2 == 0) break;
    lVar3 = lVar3 + lVar2;
    auVar4 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                       (lVar2,local_4030,&PTR_s_src_uu_wc_src_count_fast_rs_00232310);
    lVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::fold
                      (auVar4._0_8_,auVar4._8_8_ + auVar4._0_8_);
    local_4038 = local_4038 + lVar2;
  }
  *param_1 = lVar3;
  param_1[1] = local_4038;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}