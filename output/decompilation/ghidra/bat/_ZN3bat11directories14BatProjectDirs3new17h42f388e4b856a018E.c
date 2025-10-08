void _ZN3bat11directories14BatProjectDirs3new17h42f388e4b856a018E(undefined4 *param_1)

{
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined local_40 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  (*(code *)PTR__ZN8etcetera13base_strategy22choose_native_strategy17h63228571b5f028ebE_00807ab8)
            (&local_a8);
  local_38 = uStack_a0;
  uStack_34 = uStack_9c;
  uStack_30 = (undefined4)uStack_98;
  uStack_2c = uStack_98._4_4_;
                    /* try { // try from 004ad421 to 004ad434 has its CatchHandler @ 004ad60a */
  _ZN3std3env6var_os17hdd22989238190b61E
            (&local_a8,"BAT_CACHE_PATH",0xe,-CONCAT44(uStack_a4,local_a8));
  if (CONCAT44(uStack_a4,local_a8) == -0x8000000000000000) {
    local_78 = -0x8000000000000000;
LAB_004ad45c:
                    /* try { // try from 004ad45c to 004ad469 has its CatchHandler @ 004ad5cc */
    (*(code *)
      PTR__ZN91__LT_etcetera__base_strategy__xdg__Xdg_u20_as_u20_etcetera__base_strategy__BaseStrategy_GT_9cache_dir17hbf4916433bd1722eE_00807ac0
    )(&local_a8,local_40);
                    /* try { // try from 004ad474 to 004ad48a has its CatchHandler @ 004ad5bf */
    _ZN3std4path4Path4join17hea24a9da038aebd6E
              (&local_58,CONCAT44(uStack_9c,uStack_a0),uStack_98,&DAT_00185ea3,3);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd0005799f5f2e1beE(&local_a8);
  }
  else {
    local_78 = CONCAT44(uStack_a4,local_a8);
    uStack_70 = uStack_a0;
    uStack_6c = uStack_9c;
    local_68 = uStack_98;
    if (local_78 == -0x8000000000000000) goto LAB_004ad45c;
    local_48 = uStack_98;
    local_58 = local_a8;
    uStack_54 = uStack_a4;
    uStack_50 = uStack_a0;
    uStack_4c = uStack_9c;
  }
                    /* try { // try from 004ad4a9 to 004ad4bc has its CatchHandler @ 004ad5eb */
  _ZN3std3env6var_os17hdd22989238190b61E(&local_a8,"BAT_CONFIG_DIR",0xe);
  if (CONCAT44(uStack_a4,local_a8) == -0x8000000000000000) {
    local_78 = -0x8000000000000000;
  }
  else {
    local_78 = CONCAT44(uStack_a4,local_a8);
    uStack_70 = uStack_a0;
    uStack_6c = uStack_9c;
    local_68 = uStack_98;
    if (local_78 != -0x8000000000000000) {
      local_18 = uStack_98;
      uStack_20 = CONCAT44(uStack_9c,uStack_a0);
      local_28 = local_78;
      goto LAB_004ad53a;
    }
  }
                    /* try { // try from 004ad4e4 to 004ad4f1 has its CatchHandler @ 004ad5b0 */
  (*(code *)
    PTR__ZN91__LT_etcetera__base_strategy__xdg__Xdg_u20_as_u20_etcetera__base_strategy__BaseStrategy_GT_10config_dir17h8860bfd3bb378d0fE_00807ac8
  )(&local_a8,local_40);
                    /* try { // try from 004ad4fc to 004ad515 has its CatchHandler @ 004ad5a3 */
  _ZN3std4path4Path4join17hea24a9da038aebd6E
            (&local_28,CONCAT44(uStack_9c,uStack_a0),uStack_98,&DAT_00185ea3,3);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd0005799f5f2e1beE(&local_a8);
LAB_004ad53a:
  uStack_98 = local_48;
  local_a8 = local_58;
  uStack_a4 = uStack_54;
  uStack_a0 = uStack_50;
  uStack_9c = uStack_4c;
  local_80 = local_18;
  local_90 = (undefined4)local_28;
  uStack_8c = local_28._4_4_;
  uStack_88 = (undefined4)uStack_20;
  uStack_84 = uStack_20._4_4_;
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[2] = uStack_50;
  param_1[3] = uStack_4c;
  *(undefined8 *)(param_1 + 8) = uStack_20;
  *(undefined8 *)(param_1 + 10) = local_18;
  *(undefined8 *)(param_1 + 4) = local_48;
  *(long *)(param_1 + 6) = local_28;
  _ZN4core3ptr54drop_in_place_LT_etcetera__base_strategy__xdg__Xdg_GT_17hd3280c8f258de416E(local_40)
  ;
  return;
}