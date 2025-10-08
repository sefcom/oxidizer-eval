void _ZN6zoxide6config8data_dir17h0bdb5e5582d5bd1eE(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  _ZN3std3env6var_os17h745bce177e3d772bE(&local_68,"_ZO_DATA_DIR",0xc);
                    /* try { // try from 00190a8e to 00190ae6 has its CatchHandler @ 00190b1b */
  cVar1 = (*(code *)PTR__ZN3std4path4Path11is_absolute17hf2dacc49683e82acE_0023b938)
                    (CONCAT44(uStack_5c,uStack_60),local_58);
  if (cVar1 != '\0') {
    param_1[2] = local_58;
    *param_1 = CONCAT44(uStack_64,local_68);
    param_1[1] = CONCAT44(uStack_5c,uStack_60);
    return;
  }
  local_50 = &PTR_s__ZO_DATA_DIR_must_be_an_absolute_00234980;
  local_48 = 1;
  local_40 = 8;
  local_38 = 0;
  uStack_30 = 0;
  uVar2 = _ZN6anyhow9__private10format_err17h09b344f6a077676aE(&local_50);
  param_1[1] = uVar2;
  *param_1 = 0x8000000000000000;
  _ZN4core3mem4drop17h8efcdb4578edbe7fE(CONCAT44(uStack_64,local_68),CONCAT44(uStack_5c,uStack_60));
  return;
}