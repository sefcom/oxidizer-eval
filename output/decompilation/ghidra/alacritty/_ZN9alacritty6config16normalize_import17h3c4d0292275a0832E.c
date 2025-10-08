void _ZN9alacritty6config16normalize_import17h3c4d0292275a0832E
               (undefined (*param_1) [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined local_78 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_50 = param_3;
  _ZN50__LT_T_u20_as_u20_core__convert__Into_LT_U_GT__GT_4into17h1a305b48c3568182E
            (&local_98,param_4,param_5);
  uVar3 = local_88;
  uVar2 = uStack_90;
                    /* try { // try from 00544051 to 0054406c has its CatchHandler @ 00544174 */
  auVar4 = _ZN3std4path4Path12strip_prefix17h78cfa837a83b0b87E(uStack_90,local_88);
  (*(code *)PTR__ZN4home8home_dir17hfa89a945395e3159E_009dfd88)(&local_48);
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  local_58 = local_38;
  local_78 = auVar4;
  if (auVar4._0_8_ == 0) {
    _ZN4core3ptr155drop_in_place_LT__LP_core__result__Result_LT__RF_std__path__Path_C_std__path__StripPrefixError_GT__C_core__option__Option_LT_std__path__PathBuf_GT__RP__GT_17hf8c010cbfe0ec3b8E
              (local_78);
  }
  else {
                    /* try { // try from 005440a4 to 005440b3 has its CatchHandler @ 00544157 */
    _ZN3std4path4Path4join17h8a1b8cf00bdd3485E
              (&local_48,CONCAT44(uStack_3c,uStack_40),local_38,auVar4._0_8_,auVar4._8_8_);
    _ZN4core3mem4drop17ha42964a555fb617bE(&local_98);
    local_88 = local_38;
    local_98 = CONCAT44(uStack_44,local_48);
    uStack_90 = CONCAT44(uStack_3c,uStack_40);
    _ZN4core3mem4drop17ha42964a555fb617bE(&local_68);
    uVar2 = uStack_90;
    uVar3 = local_88;
  }
                    /* try { // try from 005440f2 to 0054410f has its CatchHandler @ 00544174 */
  cVar1 = (*(code *)PTR__ZN3std4path4Path11is_absolute17hf2dacc49683e82acE_009dfb88)(uVar2,uVar3);
  auVar4._8_8_ = uStack_90;
  auVar4._0_8_ = local_98;
  if ((cVar1 == '\0') &&
     (auVar5 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_009dfd90)
                         (param_2,local_50), auVar4._8_8_ = uStack_90, auVar4._0_8_ = local_98,
     auVar5._0_8_ != 0)) {
    _ZN3std4path4Path4join17h815c8a3958ff5f69E(local_78,auVar5._0_8_,auVar5._8_8_,&local_98);
    local_88 = CONCAT44(uStack_64,local_68);
    auVar4 = local_78;
  }
  *(undefined8 *)param_1[1] = local_88;
  *param_1 = auVar4;
  return;
}