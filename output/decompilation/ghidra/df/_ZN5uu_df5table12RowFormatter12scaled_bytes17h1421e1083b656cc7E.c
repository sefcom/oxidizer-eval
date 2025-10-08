void _ZN5uu_df5table12RowFormatter12scaled_bytes17h1421e1083b656cc7E
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined4 uVar4;
  undefined8 local_10;
  
  if (*(char *)(param_2 + 0x54) == '\x02') {
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    uVar4 = (undefined4)((ulong)DAT_00119120 >> 0x20);
    auVar3._8_4_ = (int)((ulong)param_3 >> 0x20);
    auVar3._0_8_ = param_3;
    auVar3._12_4_ = uVar4;
    auVar2._8_4_ = (int)((ulong)uVar1 >> 0x20);
    auVar2._0_8_ = uVar1;
    auVar2._12_4_ = uVar4;
    local_10 = (*(code *)PTR_ceil_0020a1b0)
                         (((auVar3._8_8_ - _UNK_001190e8) +
                          ((double)CONCAT44((int)DAT_00119120,(int)param_3) - _DAT_001190e0)) /
                          ((auVar2._8_8_ - _UNK_001190e8) +
                          ((double)CONCAT44((int)DAT_00119120,(int)uVar1) - _DAT_001190e0)));
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h089b99e5dbd02ab0E
              (param_1,&local_10);
    return;
  }
  _ZN5uu_df6blocks23to_magnitude_and_suffix17hab68afb684dfcc4eE
            (param_1,param_3,0,*(char *)(param_2 + 0x54));
  return;
}