void __rustcall uu_date::parse_date(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  uVar1 = _<&T_as_core::convert::AsRef<U>>::as_ref(param_2);
  parse_datetime::parse_datetime(&local_50,uVar1);
  if (CONCAT44(uStack_4c,local_50) == -0x7ffffffffffffffe) {
    param_1[1] = CONCAT44(uStack_44,uStack_48);
    param_1[2] = uStack_40;
    *param_1 = 0x8000000000000000;
  }
  else {
    local_28 = uStack_40;
    local_38 = local_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    parse_date::___closure__(param_1,param_2,&local_38);
  }
  return;
}