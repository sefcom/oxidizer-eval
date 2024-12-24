void __rustcall
uu_cp::copydir::build_dir
          (undefined8 *param_1,char param_2,char param_3,undefined8 param_4,undefined param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint local_20;
  undefined local_1c;
  
  uVar1 = 0x12;
  if (param_3 == '\0') {
    uVar1 = 0;
  }
  uVar4 = 0x3f;
  if (param_2 == '\0') {
    uVar4 = uVar1;
  }
  local_1c = param_5;
  uVar1 = uucore::features::mode::get_umask();
  local_20 = (uVar1 & 0x1ff | uVar4) ^ 0x1ff;
  lVar2 = std::fs::DirBuilder::create(&local_20,param_4);
  if (lVar2 == 0) {
    uVar3 = 0xd;
  }
  else {
    param_1[1] = lVar2;
    uVar3 = 2;
  }
  *param_1 = uVar3;
  return;
}