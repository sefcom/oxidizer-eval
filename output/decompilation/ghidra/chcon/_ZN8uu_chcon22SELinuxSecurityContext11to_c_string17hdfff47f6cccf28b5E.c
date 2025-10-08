void _ZN8uu_chcon22SELinuxSecurityContext11to_c_string17hdfff47f6cccf28b5E
               (undefined8 *param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  if (*param_2 == 2) {
    lVar1 = *(long *)(param_2 + 2);
    uVar2 = *(undefined8 *)(param_2 + 4);
    param_1[1] = (ulong)((uint)(lVar1 == 0) * 2);
    param_1[2] = lVar1;
    param_1[3] = uVar2;
    *(undefined4 *)param_1 = 0x12;
    return;
  }
  (*(code *)PTR__ZN7selinux15SecurityContext11to_c_string17h0c9c9ed290d135c6E_001f70b0)(&local_40);
  if (local_40 == 10) {
    param_1[3] = uStack_28;
    param_1[1] = uStack_38;
    param_1[2] = uStack_30;
    *(undefined4 *)param_1 = 0x12;
    return;
  }
  param_1[6] = local_10;
  param_1[4] = local_20;
  param_1[5] = uStack_18;
  param_1[2] = uStack_30;
  param_1[3] = uStack_28;
  *param_1 = CONCAT44(uStack_3c,local_40);
  param_1[1] = uStack_38;
  param_1[7] = "SELinuxSecurityContext::to_c_string() failed failed on ";
  param_1[8] = 0x25;
  return;
}