void _ZN5uu_ls6colors12StyleManager12apply_normal17h69c01341e2d260d1E
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined5 uStack_18;
  
  puVar1 = (undefined4 *)
           _ZN5uu_ls6colors12StyleManager16get_normal_style17h68940fba9ff7dfe3E(*param_2);
  if (puVar1 != (undefined4 *)0x0) {
    uStack_18 = (undefined5)((ulong)*(undefined8 *)((long)puVar1 + 0xd) >> 0x18);
    local_28 = *puVar1;
    uStack_24 = puVar1[1];
    uStack_20 = puVar1[2];
    uStack_1c = puVar1[3];
    _ZN5uu_ls6colors12StyleManager14get_style_code17hd26268f81da97aceE(param_1,param_2,&local_28);
    return;
  }
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  return;
}