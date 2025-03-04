void _ZN5uu_ls12return_total17h87a8c45b5866afa6E
               (undefined8 *param_1,undefined **param_2,long param_3,long param_4,undefined8 param_5
               )

{
  undefined uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 ****ppppuVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined8 ***local_b0;
  code *local_a8;
  long local_a0;
  code *local_98;
  undefined **local_90;
  undefined **local_88;
  undefined8 ***local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *local_48 [3];
  
  local_88 = param_2 + param_3 * 0x26;
  local_90 = param_2;
  lVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb7b65ed0162d4d31E
                    (&local_90);
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_4 + 0xd8);
    lVar5 = 0;
    uVar1 = *(undefined *)(param_4 + 0xf1);
    do {
      local_b0 = (undefined8 ***)_ZN5uu_ls8PathData12get_metadata17hc7a96a0547653f90E(lVar3,param_5)
      ;
      ppppuVar4 = (undefined8 ****)local_b0;
      if ((undefined8 ****)local_b0 != (undefined8 ****)0x0) {
        ppppuVar4 = &local_b0;
      }
      lVar3 = _ZN4core6option15Option_LT_T_GT_6map_or17h56c943784bd347cbE(ppppuVar4,uVar2,uVar1);
      lVar5 = lVar5 + lVar3;
      lVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb7b65ed0162d4d31E
                        (&local_90);
    } while (lVar3 != 0);
  }
  if ((*(char *)(param_4 + 0xee) == '\0') ||
     (auVar6 = _ZN5uu_ls5dired6indent17h541a64321517b8c5E(param_5), auVar6._0_8_ == 0)) {
    _ZN5uu_ls12display_size17hba9b1cbdd7c6b199E(local_48,lVar5,*(undefined *)(param_4 + 0xf1));
    local_a0 = param_4 + 0xfa;
    local_a8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_98 = 
    _ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17h6643b2132dca5a5bE
    ;
    local_90 = &PTR_DAT_003125c8;
    local_88 = (undefined **)0x2;
    local_70 = 0;
    local_80 = &local_b0;
    local_78 = 2;
                    /* try { // try from 00229169 to 00229177 has its CatchHandler @ 002291bc */
    local_b0 = (undefined8 ***)local_48;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h7fca96e7ce97ddb7E(&local_60,&local_90);
                    /* try { // try from 00229178 to 00229184 has its CatchHandler @ 002291ad */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(local_48);
    param_1[2] = local_50;
    *param_1 = local_60;
    param_1[1] = uStack_58;
  }
  else {
    *(undefined (*) [16])(param_1 + 1) = auVar6;
    *param_1 = 0x8000000000000000;
  }
  return;
}