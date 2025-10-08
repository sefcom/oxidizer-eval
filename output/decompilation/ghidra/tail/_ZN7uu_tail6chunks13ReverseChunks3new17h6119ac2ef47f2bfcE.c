undefined8 *
_ZN7uu_tail6chunks13ReverseChunks3new17h6119ac2ef47f2bfcE(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  undefined auVar6 [16];
  
  auVar6 = (*(code *)
             PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_15stream_position17hea3f1471eccd6c38E_0027d7c0
           )(param_2);
  lVar1 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hada310c9832e5020E
                    (auVar6._0_8_,auVar6._8_8_,&PTR_DAT_00273180);
  auVar6 = (*(code *)
             PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17h04cf64217ea00d1dE_0027d7c8
           )(param_2,1,0);
  lVar2 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hada310c9832e5020E
                    (auVar6._0_8_,auVar6._8_8_,&PTR_DAT_00273198);
  lVar2 = lVar2 - lVar1;
  auVar6._8_4_ = (int)((ulong)lVar2 >> 0x20);
  auVar6._0_8_ = lVar2;
  auVar6._12_4_ = _UNK_00122104;
  dVar5 = (double)(*(code *)PTR_ceil_0027d7d0)
                            (((auVar6._8_8_ - _UNK_00122078) +
                             ((double)CONCAT44(_s__00122100,(int)lVar2) - _DAT_00122070)) *
                             _s__00121b10);
  uVar4 = (long)(dVar5 - _s__00121c00) & (long)dVar5 >> 0x3f | (long)dVar5;
  if (dVar5 < 0.0) {
    uVar4 = 0;
  }
  uVar3 = 0xffffffffffffffff;
  if (dVar5 <= _DAT_00121ae0) {
    uVar3 = uVar4;
  }
  *param_1 = param_2;
  param_1[1] = lVar2;
  param_1[2] = uVar3;
  param_1[3] = 0;
  return param_1;
}