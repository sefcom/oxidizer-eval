undefined  [16]
_ZN9uu_numfmt28format_and_handle_validation17he0ebc98d5f24d5daE
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined auVar1 [16];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = param_1;
  local_28 = param_2;
  _ZN9uu_numfmt6format16format_and_print17he481f9ff3837b01fE(&local_80,param_1,param_2,param_3);
  if (CONCAT44(uStack_7c,local_80) != -0x8000000000000000) {
    local_38 = local_70;
    local_48 = local_80;
    uStack_44 = uStack_7c;
    uStack_40 = uStack_78;
    uStack_3c = uStack_74;
                    /* WARNING: Could not recover jumptable at 0x001bfdc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar1 = (*(code *)(&DAT_00122394 +
                       *(int *)(&DAT_00122394 + (ulong)*(byte *)(param_3 + 200) * 4)))();
    return auVar1;
  }
  return ZEXT816(0x235810) << 0x40;
}