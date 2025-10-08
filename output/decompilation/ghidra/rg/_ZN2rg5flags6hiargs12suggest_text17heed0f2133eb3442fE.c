void _ZN2rg5flags6hiargs12suggest_text17heed0f2133eb3442fE(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 extraout_RDX;
  undefined8 *local_68;
  code *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
                    /* try { // try from 003537c5 to 00353829 has its CatchHandler @ 00353863 */
  cVar2 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17hff4183d19d767429E
                    ("pattern contains \"\\0\"\n\nConsider enabling text mode with the --text flag (or -a for short). Otherwise,\nbinary detection is enabled and matching a NUL byte is impossible."
                     ,0x15,param_2[1],param_2[2]);
  if (cVar2 != '\0') {
    local_60 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_40 = &DAT_004eb448;
    local_38 = 2;
    local_20 = 0;
    local_28 = 1;
    local_68 = param_2;
    local_30 = (undefined *)&local_68;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
              (&local_58,0,extraout_RDX,&local_40);
    param_1[2] = local_48;
    *(undefined4 *)param_1 = local_58;
    *(undefined4 *)((long)param_1 + 4) = uStack_54;
    *(undefined4 *)(param_1 + 1) = uStack_50;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_4c;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(param_2);
    return;
  }
  param_1[2] = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}