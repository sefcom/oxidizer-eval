/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * __rustcall uu_tail::chunks::ReverseChunks::new(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  undefined auVar6 [16];
  
  auVar6 = _<std::fs::File_as_std::io::Seek>::seek(param_2,2,0);
  lVar1 = core::result::Result<T,E>::unwrap(auVar6._0_8_,auVar6._8_8_,&PTR_DAT_002bdf10);
  auVar6 = _<std::fs::File_as_std::io::Seek>::seek(param_2,1,0);
  lVar2 = core::result::Result<T,E>::unwrap(auVar6._0_8_,auVar6._8_8_,&PTR_DAT_002bdf28);
  lVar2 = lVar2 - lVar1;
  auVar6._8_4_ = (int)((ulong)lVar2 >> 0x20);
  auVar6._0_8_ = lVar2;
  auVar6._12_4_ = _UNK_0011f844;
  dVar5 = (double)(*(code *)PTR_ceil_002c5050)
                            (((auVar6._8_8_ - _UNK_0011f7d8) +
                             ((double)CONCAT44(_DAT_0011f840,(int)lVar2) - _DAT_0011f7d0)) *
                             _s__0011f358);
  uVar4 = (long)(dVar5 - _s__0011f3d8) & (long)dVar5 >> 0x3f | (long)dVar5;
  if (dVar5 < 0.0) {
    uVar4 = 0;
  }
  uVar3 = 0xffffffffffffffff;
  if (dVar5 <= _DAT_0011f340) {
    uVar3 = uVar4;
  }
  *param_1 = param_2;
  param_1[1] = lVar2;
  param_1[2] = uVar3;
  param_1[3] = 0;
  return param_1;
}