void _ZN2rg5flags6hiargs17suggest_multiline17h877188e632fbc6aaE
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 extraout_RDX;
  undefined8 *local_78;
  code *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
                    /* try { // try from 003536d9 to 00353762 has its CatchHandler @ 0035379a */
  cVar3 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17hff4183d19d767429E
                    ("the literal",0xb,uVar1,uVar2);
  if ((cVar3 != '\0') &&
     (cVar3 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17hff4183d19d767429E
                        ("not allowed\n\nConsider enabling multiline mode with the --multiline flag (or -U for short).\nWhen multiline mode is enabled, new line characters can be matched."
                         ,0xb,uVar1,uVar2), cVar3 != '\0')) {
    local_70 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_50 = &DAT_004eb428;
    local_48 = 2;
    local_30 = 0;
    local_38 = 1;
    local_78 = param_2;
    local_40 = (undefined *)&local_78;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
              (&local_68,0,extraout_RDX,&local_50);
    param_1[2] = local_58;
    *(undefined4 *)param_1 = local_68;
    *(undefined4 *)((long)param_1 + 4) = uStack_64;
    *(undefined4 *)(param_1 + 1) = uStack_60;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_5c;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(param_2);
    return;
  }
  param_1[2] = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}