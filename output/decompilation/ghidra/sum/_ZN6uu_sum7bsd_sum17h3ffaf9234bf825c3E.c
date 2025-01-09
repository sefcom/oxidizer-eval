undefined  [16] __rustcall uu_sum::bsd_sum(undefined8 param_1,long param_2)

{
  code *pcVar1;
  byte *pbVar2;
  ulong uVar4;
  ulong uVar5;
  undefined auVar6 [16];
  long local_1040;
  long local_1038;
  undefined8 local_1030 [512];
  long lVar3;
  
  local_1030[0] = 0;
  uVar5 = 0;
  (*(code *)PTR_memset_00216330)(local_1030,0,0x1000);
  pcVar1 = *(code **)(param_2 + 0x18);
  uVar4 = 0;
  while( true ) {
    auVar6 = (*pcVar1)(param_1,local_1030,0x1000);
    lVar3 = auVar6._8_8_;
    if ((auVar6._0_8_ != 0) || (lVar3 == 0)) break;
                    /* try { // try from 001ace6a to 001ace7b has its CatchHandler @ 001acef3 */
    auVar6 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                       (lVar3,local_1030,&PTR_s_src_uu_sum_src_sum_rs_002123d8);
    local_1040 = auVar6._0_8_;
    local_1038 = auVar6._8_8_ + local_1040;
    while( true ) {
      pbVar2 = (byte *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                                 (&local_1040);
      if (pbVar2 == (byte *)0x0) break;
      uVar5 = (ulong)((int)CONCAT62((int6)(uVar5 >> 0x10),
                                    (ushort)uVar5 >> 1 | (ushort)((uVar5 & 1) != 0) << 0xf) +
                     (uint)*pbVar2);
    }
                    /* try { // try from 001ace40 to 001ace5c has its CatchHandler @ 001acf02 */
    uVar4 = uVar4 + lVar3;
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(0,lVar3);
  }
                    /* try { // try from 001acea9 to 001aceb3 has its CatchHandler @ 001acef1 */
  core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(auVar6._0_8_,lVar3);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn_std::io::Read>>(param_1,param_2);
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = ((uVar4 >> 10) + 1) - (ulong)((uVar4 & 0x3ff) == 0);
  return auVar6;
}