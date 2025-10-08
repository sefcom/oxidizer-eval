undefined8
_ZN21ruff_python_formatter8comments7visitor15CommentsVisitor8can_skip17h9fd3186938814094E
          (long param_1,uint param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined7 uVar3;
  
  puVar2 = (undefined8 *)
           _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17h54dda6ace5d5614bE
                     (param_1,param_1 + 0x10);
  puVar1 = (uint *)*puVar2;
  uVar3 = (undefined7)((ulong)puVar1 >> 8);
  if (puVar1 != (uint *)0x0) {
    return CONCAT71(uVar3,param_2 <= *puVar1);
  }
  return CONCAT71(uVar3,1);
}