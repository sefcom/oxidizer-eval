/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __rustcall
uu_df::table::RowFormatter::scaled_bytes(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined8 local_10;
  
  if (*(char *)(param_2 + 0x54) == '\x02') {
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    auVar3._8_4_ = (int)((ulong)param_3 >> 0x20);
    auVar3._0_8_ = param_3;
    auVar3._12_4_ = SUB164(_DAT_0010b880,4);
    auVar2._8_4_ = (int)((ulong)uVar1 >> 0x20);
    auVar2._0_8_ = uVar1;
    auVar2._12_4_ = SUB164(_DAT_0010b880,4);
    local_10 = (*(code *)PTR_ceil_00247040)
                         (((auVar3._8_8_ - _UNK_0010b828) +
                          ((double)CONCAT44(SUB164(_DAT_0010b880,0),(int)param_3) - _DAT_0010b820))
                          / ((auVar2._8_8_ - _UNK_0010b828) +
                            ((double)CONCAT44(SUB164(_DAT_0010b880,0),(int)uVar1) - _DAT_0010b820)))
    ;
    _<T_as_alloc::string::ToString>::to_string(param_1,&local_10);
    return;
  }
  blocks::to_magnitude_and_suffix(param_1,param_3,0,*(char *)(param_2 + 0x54));
  return;
}