double _ZN9uu_numfmt6format20round_with_precision17hbeea945620f7b8d9E
                 (double param_1,undefined param_2,undefined8 param_3)

{
  double dVar1;
  undefined auVar2 [16];
  undefined local_11;
  double local_10;
  double local_8;
  
  auVar2._8_4_ = (int)((ulong)param_3 >> 0x20);
  auVar2._0_8_ = param_3;
  auVar2._12_4_ = DAT_00119750._4_4_;
  local_11 = param_2;
  local_8 = param_1;
  local_10 = (double)(*(code *)PTR_pow_00209968)
                               (_s__00119078,
                                (auVar2._8_8_ - _UNK_001196e8) +
                                ((double)CONCAT44((undefined4)DAT_00119750,(int)param_3) -
                                _s__001196e0));
  dVar1 = (double)(*(code *)
                    PTR__ZN9uu_numfmt7options11RoundMethod5round17h874ad1975578cac0E_002098b8)
                            (local_8 * local_10,&local_11);
  return dVar1 / local_10;
}