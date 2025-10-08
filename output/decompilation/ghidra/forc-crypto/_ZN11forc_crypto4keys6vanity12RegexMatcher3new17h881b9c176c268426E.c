undefined8 *
_ZN11forc_crypto4keys6vanity12RegexMatcher3new17h881b9c176c268426E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **local_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  code *local_18;
  
  local_20 = &local_30;
  local_18 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h30043921d5c5f2d0E;
  local_98 = &PTR_s___i__0072f008;
  ppuStack_90 = (undefined8 **)0x1;
  local_78 = 0;
  ppuStack_88 = &local_20;
  local_80 = 1;
  local_30 = param_2;
  local_28 = param_3;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h34f6eea6daa701c2E(local_48,0,param_3,&local_98);
                    /* try { // try from 004fb309 to 004fb36a has its CatchHandler @ 004fb38e */
  (*(code *)PTR__ZN5regex5regex6string5Regex3new17h92399a8041d2121dE_00786f48)
            (&local_98,local_40,local_38);
  ppuVar2 = ppuStack_88;
  ppuVar1 = local_98;
  local_68 = (undefined **)ppuStack_90;
  ppuVar3 = local_68;
  uStack_60 = ppuStack_88;
  local_58 = local_80;
  local_68._0_4_ = SUB84(ppuStack_90,0);
  local_68._4_4_ = (undefined4)((ulong)ppuStack_90 >> 0x20);
  uStack_60._0_4_ = SUB84(ppuStack_88,0);
  uStack_60._4_4_ = (undefined4)((ulong)ppuStack_88 >> 0x20);
  local_68 = ppuVar3;
  uStack_60 = ppuVar2;
  if (local_98 == (undefined **)0x0) {
    ppuStack_88 = (undefined8 **)local_80;
    local_98 = (undefined **)ppuStack_90;
    ppuStack_90 = ppuVar2;
    uVar4 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h776f44fb6b4ee09dE
                      (&local_98);
    param_1[1] = uVar4;
    *param_1 = 0;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h223631e41b095cf4E(local_48);
  }
  else {
    param_1[3] = local_80;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_68;
    *(undefined4 *)((long)param_1 + 0xc) = local_68._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_60;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_60._4_4_;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h223631e41b095cf4E(local_48);
    *param_1 = ppuVar1;
  }
  return param_1;
}