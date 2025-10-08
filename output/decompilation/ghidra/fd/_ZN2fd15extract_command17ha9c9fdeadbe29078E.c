void _ZN2fd15extract_command17ha9c9fdeadbe29078E(long *param_1,long param_2,undefined param_3)

{
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_30 = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_2 + 0x160) = 0x8000000000000000;
  local_18 = *(undefined8 *)(param_2 + 0x178);
  local_28 = *(undefined4 *)(param_2 + 0x168);
  uStack_24 = *(undefined4 *)(param_2 + 0x16c);
  uStack_20 = *(undefined4 *)(param_2 + 0x170);
  uStack_1c = *(undefined4 *)(param_2 + 0x174);
  _ZN4core6option15Option_LT_T_GT_7or_else17hb985d64ac7fccb66E
            (&local_50,&local_30,*(undefined4 *)(param_2 + 0x1ec),param_3);
  if (local_50 == -0x7fffffffffffffff) {
    *param_1 = -0x8000000000000000;
    return;
  }
  param_1[2] = local_40;
  param_1[3] = lStack_38;
  *param_1 = local_50;
  param_1[1] = lStack_48;
  return;
}