void __rustcall
uu_cp::copydir::path_has_prefix
          (undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined uVar3;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uucore::features::fs::canonicalize(&local_78,param_2,param_3,0,2);
  uVar2 = local_68;
  uVar1 = local_70;
  if (local_78 == -0x8000000000000000) {
    *(undefined8 *)(param_1 + 8) = local_70;
    *param_1 = 1;
  }
  else {
    local_60 = local_78;
    local_58 = local_70;
    local_50 = local_68;
                    /* try { // try from 0020ebdc to 0020ec2c has its CatchHandler @ 0020ec4c */
    uucore::features::fs::canonicalize(&local_78,param_4,param_5,0,2);
    if (local_78 == -0x8000000000000000) {
      *(undefined8 *)(param_1 + 8) = local_70;
      *param_1 = 1;
    }
    else {
      local_48 = local_78;
      local_40 = local_70;
      local_38 = local_68;
      uVar3 = std::path::Path::starts_with(uVar1,uVar2,&local_48);
      param_1[1] = uVar3;
      *param_1 = 0;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&local_60);
  }
  return;
}