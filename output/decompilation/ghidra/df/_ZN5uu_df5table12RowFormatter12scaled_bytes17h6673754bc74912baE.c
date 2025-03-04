/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN5uu_df5table12RowFormatter12scaled_bytes17h6673754bc74912baE
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined8 local_10;
  
  if (*(char *)(param_2 + 0x54) == '\x02') {
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    auVar3._8_4_ = (int)((ulong)param_3 >> 0x20);
    auVar3._0_8_ = param_3;
    auVar3._12_4_ = SUB164(_DAT_0010b900,4);
    auVar2._8_4_ = (int)((ulong)uVar1 >> 0x20);
    auVar2._0_8_ = uVar1;
    auVar2._12_4_ = SUB164(_DAT_0010b900,4);
    local_10 = (*(code *)PTR_ceil_002463a8)
                         (((auVar3._8_8_ - _UNK_0010b8a8) +
                          ((double)CONCAT44(SUB164(_DAT_0010b900,0),(int)param_3) - _DAT_0010b8a0))
                          / ((auVar2._8_8_ - _UNK_0010b8a8) +
                            ((double)CONCAT44(SUB164(_DAT_0010b900,0),(int)uVar1) - _DAT_0010b8a0)))
    ;
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h22804fad5dd1c657E
              (param_1,&local_10);
    return;
  }
  _ZN5uu_df6blocks23to_magnitude_and_suffix17hfc39cb976c1a05edE
            (param_1,param_3,0,*(char *)(param_2 + 0x54));
  return;
}