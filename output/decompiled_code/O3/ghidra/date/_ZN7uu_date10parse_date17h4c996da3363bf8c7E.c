void __rustcall uu_date::parse_date(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = _<alloc::string::String_as_core::convert::AsRef<str>>::as_ref(uVar1,uVar2);
                    /* try { // try from 0026ff84 to 0026ffdd has its CatchHandler @ 0027000e */
  parse_datetime::parse_datetime(&local_80,uVar3);
  if (CONCAT44(uStack_7c,local_80) == -0x7ffffffffffffffe) {
    *(undefined4 *)(param_1 + 1) = uStack_78;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_74;
    *(undefined4 *)(param_1 + 2) = uStack_70;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_6c;
    *param_1 = 0x8000000000000000;
  }
  else {
    local_68 = local_80;
    uStack_64 = uStack_7c;
    uStack_60 = uStack_78;
    uStack_5c = uStack_74;
    parse_date::___closure__(&local_50,uVar1,uVar2,&local_68);
    param_1[4] = local_30;
    param_1[5] = uStack_28;
    param_1[2] = local_40;
    param_1[3] = uStack_38;
    *(undefined4 *)param_1 = local_50;
    *(undefined4 *)((long)param_1 + 4) = uStack_4c;
    *(undefined4 *)(param_1 + 1) = uStack_48;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_44;
  }
  core::ptr::drop_in_place<alloc::string::String>(param_2);
  return;
}