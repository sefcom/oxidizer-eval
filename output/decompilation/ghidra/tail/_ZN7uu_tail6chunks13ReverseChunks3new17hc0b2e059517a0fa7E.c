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
  lVar1 = core::result::Result<T,E>::unwrap
                    (auVar6._0_8_,auVar6._8_8_,&PTR_s_src_uu_tail_src_chunks_rs_002bc758);
  auVar6 = _<std::fs::File_as_std::io::Seek>::seek(param_2,1,0);
  lVar2 = core::result::Result<T,E>::unwrap
                    (auVar6._0_8_,auVar6._8_8_,&PTR_s_src_uu_tail_src_chunks_rs_002bc770);
  lVar2 = lVar2 - lVar1;
  auVar6._8_4_ = (int)((ulong)lVar2 >> 0x20);
  auVar6._0_8_ = lVar2;
  auVar6._12_4_ = _UNK_0011f444;
  dVar5 = (double)(*(code *)PTR_ceil_002c3000)
                            (((auVar6._8_8_ - _UNK_0011f3d8) +
                             ((double)CONCAT44(_DAT_0011f440,(int)lVar2) - _DAT_0011f3d0)) *
                             _s__0011efd8);
  uVar4 = (long)(dVar5 - _s__0011f058) & (long)dVar5 >> 0x3f | (long)dVar5;
  if (dVar5 < 0.0) {
    uVar4 = 0;
  }
  uVar3 = 0xffffffffffffffff;
  if (dVar5 <= _DAT_0011efc0) {
    uVar3 = uVar4;
  }
  *param_1 = param_2;
  param_1[1] = lVar2;
  param_1[2] = uVar3;
  param_1[3] = 0;
  return param_1;
}