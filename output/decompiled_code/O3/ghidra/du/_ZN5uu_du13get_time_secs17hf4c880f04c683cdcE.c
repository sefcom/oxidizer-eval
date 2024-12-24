void __rustcall uu_du::get_time_secs(undefined8 *param_1,char param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  if (param_2 == '\0') {
    uVar1 = *(undefined8 *)(param_3 + 0x70);
  }
  else {
    if (param_2 != '\x01') {
      local_20 = 3;
      if (*(long *)(param_3 + 0x30) != 0) {
        param_1[1] = *(undefined8 *)(param_3 + 0x38);
        *param_1 = 5;
        core::ptr::drop_in_place<uu_du::DuError>(&local_20);
        return;
      }
      param_1[2] = local_10;
      param_1[3] = uStack_8;
      *param_1 = 3;
      param_1[1] = local_18;
      return;
    }
    uVar1 = *(undefined8 *)(param_3 + 0x78);
  }
  param_1[1] = uVar1;
  *param_1 = 5;
  return;
}