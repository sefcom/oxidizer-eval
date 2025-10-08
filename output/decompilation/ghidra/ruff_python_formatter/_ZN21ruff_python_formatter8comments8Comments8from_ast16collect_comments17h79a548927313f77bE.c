void _ZN21ruff_python_formatter8comments8Comments8from_ast16collect_comments17h79a548927313f77bE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  long local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(long *)(param_5 + 0x10) == 0) {
    local_88 = _DAT_0067c828;
    uStack_84 = _UNK_0067c82c;
    uStack_80 = _UNK_0067c830;
    uStack_7c = _UNK_0067c834;
    local_98 = PTR_DAT_0067c818;
    uStack_90 = _UNK_0067c820;
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    local_e0 = 8;
    local_f8 = 4;
    local_100 = 0;
    local_d8 = 0;
  }
  else {
    local_f0 = *(long *)(param_5 + 8);
    local_70 = 0;
    local_68 = 4;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 8;
    local_48 = 0;
    local_40 = PTR_DAT_0067c818;
    uStack_38 = _UNK_0067c820;
    local_30 = _DAT_0067c828;
    uStack_2c = _UNK_0067c82c;
    uStack_28 = _UNK_0067c830;
    uStack_24 = _UNK_0067c834;
    uStack_e8 = local_f0 + *(long *)(param_5 + 0x10) * 8;
    uStack_b8 = &local_70;
    local_b0 = &
               PTR__ZN4core3ptr81drop_in_place_LT_ruff_python_formatter__comments__visitor__CommentsMapBuilder_GT_17h42d36c4055738c38E_0067d488
    ;
    local_d0 = (undefined *)0x0;
    uStack_c8 = 8;
    local_c0 = 0;
    local_e0 = 0x5e;
    local_100 = 0;
                    /* try { // try from 00405541 to 0040554d has its CatchHandler @ 00405606 */
    local_a8 = param_3;
    local_a0 = param_4;
    local_20 = param_5;
    local_18 = param_3;
    local_10 = param_4;
    _ZN21ruff_python_formatter8comments7visitor15CommentsVisitor5visit17h0f17c00820667551E
              (&local_100,param_1,param_2);
    local_98 = local_40;
    uStack_90 = uStack_38;
    local_88 = local_30;
    uStack_84 = uStack_2c;
    uStack_80 = uStack_28;
    uStack_7c = uStack_24;
    local_e0 = local_50;
    local_f8 = local_68;
    local_100 = local_70;
    local_d8 = local_48;
    uVar1 = (undefined4)local_60;
    uVar2 = local_60._4_4_;
    uVar3 = (undefined4)uStack_58;
    uVar4 = uStack_58._4_4_;
  }
  local_f0 = CONCAT44(uVar2,uVar1);
  uStack_e8 = CONCAT44(uVar4,uVar3);
  local_d0 = local_98;
  uStack_c8 = uStack_90;
  local_c0 = CONCAT44(uStack_84,local_88);
  uStack_b8 = (undefined8 *)CONCAT44(uStack_7c,uStack_80);
  _ZN21ruff_python_formatter8comments8Comments3new17hbdb3ea4fa05ac4f8E(&local_100,param_5);
  return;
}