/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __rustcall
uu_numfmt::format::round_with_precision(double param_1,undefined param_2,undefined8 param_3)

{
  double dVar1;
  undefined auVar2 [16];
  undefined local_11;
  double local_10;
  double local_8;
  
  auVar2._8_4_ = (int)((ulong)param_3 >> 0x20);
  auVar2._0_8_ = param_3;
  auVar2._12_4_ = _UNK_00115e94;
  local_11 = param_2;
  local_8 = param_1;
  local_10 = (double)(*(code *)PTR_pow_0023a150)
                               (_s__00115a18,
                                (auVar2._8_8_ - _UNK_00115dd8) +
                                ((double)CONCAT44(_DAT_00115e90,(int)param_3) - _DAT_00115dd0));
  dVar1 = (double)options::RoundMethod::round(local_8 * local_10,&local_11);
  return dVar1 / local_10;
}