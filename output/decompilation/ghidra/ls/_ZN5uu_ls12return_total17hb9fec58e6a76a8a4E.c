void _ZN5uu_ls12return_total17hb9fec58e6a76a8a4E
               (undefined8 *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined ******ppppppuVar4;
  long lVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined *****local_b0;
  undefined8 local_a8;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_80;
  code *local_78;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined local_48 [24];
  
  if (param_3 == 0) {
    lVar6 = 0;
    cVar2 = *(char *)(param_4 + 0xf6);
  }
  else {
    uVar3 = *(undefined8 *)(param_4 + 0xd8);
    param_3 = param_3 * 0x130;
    lVar6 = 0;
    uVar1 = *(undefined *)(param_4 + 0xf9);
    do {
      local_b0 = (undefined *****)
                 _ZN5uu_ls8PathData12get_metadata17h14c40f15e3077b4fE(param_2,param_5);
      ppppppuVar4 = (undefined ******)local_b0;
      if ((undefined ******)local_b0 != (undefined ******)0x0) {
        ppppppuVar4 = &local_b0;
      }
      lVar5 = _ZN4core6option15Option_LT_T_GT_6map_or17hffc32c0b19950d04E(ppppppuVar4,uVar3,uVar1);
      lVar6 = lVar6 + lVar5;
      param_3 = param_3 + -0x130;
      param_2 = param_2 + 0x130;
    } while (param_3 != 0);
    cVar2 = *(char *)(param_4 + 0xf6);
  }
  if ((cVar2 == '\0') ||
     (auVar7 = _ZN5uu_ls5dired6indent17h7abdb3264981e476E(param_5), auVar7._0_8_ == 0)) {
    _ZN5uu_ls12display_size17hb2e480a0d8619531E(local_48,lVar6,*(undefined *)(param_4 + 0xf9));
    local_70 = param_4 + 0x102;
    local_78 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_68 = 
    PTR__ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17hd41883bc456718a9E_0048fb80
    ;
    local_b0 = (undefined *****)&PTR_DAT_00386bf8;
    local_a8 = 2;
    local_90 = 0;
    local_a0 = &local_80;
    local_98 = 2;
                    /* try { // try from 0029c0c0 to 0029c0ce has its CatchHandler @ 0029c104 */
    local_80 = local_48;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h69a0b1154707aabfE(&local_60,&local_b0);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(local_48);
    param_1[2] = local_50;
    *param_1 = local_60;
    param_1[1] = uStack_58;
  }
  else {
    *(undefined (*) [16])(param_1 + 1) = auVar7;
    *param_1 = 0x8000000000000000;
  }
  return;
}