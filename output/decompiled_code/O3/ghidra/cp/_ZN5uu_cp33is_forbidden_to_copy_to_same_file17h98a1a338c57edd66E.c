undefined8 __rustcall
uu_cp::is_forbidden_to_copy_to_same_file
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          char param_6)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined local_b0 [64];
  undefined local_70 [64];
  
  bVar2 = std::path::Path::is_symlink();
  bVar3 = std::path::Path::is_symlink(param_3,param_4);
  cVar1 = *(char *)(param_5 + 0x41);
  bVar4 = 1;
  if ((cVar1 == '\0') && ((param_6 == '\0' || (*(char *)(param_5 + 0x40) == '\0')))) {
    bVar4 = bVar2 & bVar3 ^ 1;
  }
  cVar5 = uucore::features::fs::paths_refer_to_same_file(param_1,param_2,param_3,param_4,bVar4);
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(char *)(param_5 + 0x4c) != '\0') {
    if (*(char *)(param_5 + 0x3c) == '\0' && *(char *)(param_5 + 0x3d) == '\0') {
      if ((bVar2 != 1 || cVar1 == '\0') || bVar3 != 0) {
        return 0;
      }
    }
    else if ((cVar1 == '\0' & bVar2) != 0 || bVar3 != 0) {
      return 0;
    }
    if (bVar2 == 0) {
      std::path::Path::components(local_b0,param_3,param_4);
      std::path::Path::components(local_70,param_1,param_2);
      cVar5 = _<std::path::Components_as_core::cmp::PartialEq>::eq(local_b0,local_70);
      if (cVar5 == '\0') {
        return 0;
      }
    }
  }
  if (*(char *)(param_5 + 0x4e) != '\0') {
    if (*(char *)(param_5 + 0x4e) != '\x01') {
      if (cVar1 != '\0') {
        return 1;
      }
      bVar3 = bVar2 & bVar3;
    }
    if (bVar3 == 0) {
      return 1;
    }
  }
  return 0;
}