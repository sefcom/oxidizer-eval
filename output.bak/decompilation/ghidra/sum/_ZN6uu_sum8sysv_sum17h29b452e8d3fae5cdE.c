undefined  [16] __rustcall uu_sum::sysv_sum(undefined8 param_1,long param_2)

{
  code *pcVar1;
  byte *pbVar2;
  uint uVar4;
  ulong uVar5;
  undefined auVar6 [16];
  long local_1040;
  long local_1038;
  undefined8 local_1030 [512];
  long lVar3;
  
  local_1030[0] = 0;
  uVar4 = 0;
  (*(code *)PTR_memset_00216330)(local_1030,0,0x1000);
  pcVar1 = *(code **)(param_2 + 0x18);
  uVar5 = 0;
  while( true ) {
    auVar6 = (*pcVar1)(param_1,local_1030,0x1000);
    lVar3 = auVar6._8_8_;
    if ((auVar6._0_8_ != 0) || (lVar3 == 0)) break;
                    /* try { // try from 001acfaa to 001acfbb has its CatchHandler @ 001ad03c */
    auVar6 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                       (lVar3,local_1030,&PTR_s_src_uu_sum_src_sum_rs_002123f0);
    local_1040 = auVar6._0_8_;
    local_1038 = auVar6._8_8_ + local_1040;
    while( true ) {
      pbVar2 = (byte *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                                 (&local_1040);
      if (pbVar2 == (byte *)0x0) break;
      uVar4 = uVar4 + *pbVar2;
    }
                    /* try { // try from 001acf80 to 001acf9c has its CatchHandler @ 001ad04b */
    uVar5 = uVar5 + lVar3;
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(0,lVar3);
  }
                    /* try { // try from 001acfe4 to 001acfee has its CatchHandler @ 001ad03a */
  core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(auVar6._0_8_,lVar3);
  uVar4 = (uVar4 >> 0x10) + (uVar4 & 0xffff);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn_std::io::Read>>(param_1,param_2);
  auVar6._8_4_ = (uVar4 >> 0x10) + uVar4;
  auVar6._0_8_ = ((uVar5 >> 9) + 1) - (ulong)((uVar5 & 0x1ff) == 0);
  auVar6._12_4_ = 0;
  return auVar6;
}