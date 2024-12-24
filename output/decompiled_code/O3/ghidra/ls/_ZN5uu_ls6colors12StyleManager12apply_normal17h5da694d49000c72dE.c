undefined8 * __rustcall
uu_ls::colors::StyleManager::apply_normal(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined5 uStack_18;
  
  puVar1 = (undefined8 *)get_normal_style(param_2);
  if (puVar1 == (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
  }
  else {
    uStack_40 = (undefined4)puVar1[1];
    uStack_3c = (undefined4)((ulong)puVar1[1] >> 0x20);
    uStack_18 = (undefined5)((ulong)*(undefined8 *)((long)puVar1 + 0xd) >> 0x18);
    local_48 = (undefined4)*puVar1;
    uStack_44 = (undefined4)((ulong)*puVar1 >> 0x20);
    local_28 = local_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    get_style_code(param_1,param_2,&local_28);
  }
  return param_1;
}