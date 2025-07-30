void _ZN17backdoorautomater9sanitizer18sanitize_param_hub17h407aa3fa6f2031daE
               (undefined8 *param_1,undefined4 param_2)

{
  undefined uVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  
  local_58 = param_1[2];
  local_68 = *(undefined4 *)param_1;
  uStack_64 = *(undefined4 *)((long)param_1 + 4);
  uStack_60 = *(undefined4 *)(param_1 + 1);
  uStack_5c = *(undefined4 *)((long)param_1 + 0xc);
                    /* try { // try from 0015cab4 to 0015cac2 has its CatchHandler @ 0015cc83 */
  _ZN17backdoorautomater9sanitizer11sanitize_ip17hca067074337469f3E(&local_50,&local_68);
  param_1[2] = local_40;
  *param_1 = CONCAT44(uStack_4c,local_50);
  param_1[1] = CONCAT44(uStack_44,uStack_48);
  local_58 = param_1[5];
  local_68 = *(undefined4 *)(param_1 + 3);
  uStack_64 = *(undefined4 *)((long)param_1 + 0x1c);
  uStack_60 = *(undefined4 *)(param_1 + 4);
  uStack_5c = *(undefined4 *)((long)param_1 + 0x24);
                    /* try { // try from 0015caf5 to 0015cc57 has its CatchHandler @ 0015cc96 */
  local_38 = param_2;
  _ZN17backdoorautomater9sanitizer16sanitize_service17h7d78d971da576c98E(&local_50,&local_68);
  param_1[5] = local_40;
  param_1[3] = CONCAT44(uStack_4c,local_50);
  param_1[4] = CONCAT44(uStack_44,uStack_48);
  local_58 = param_1[8];
  local_68 = *(undefined4 *)(param_1 + 6);
  uStack_64 = *(undefined4 *)((long)param_1 + 0x34);
  uStack_60 = *(undefined4 *)(param_1 + 7);
  uStack_5c = *(undefined4 *)((long)param_1 + 0x3c);
  _ZN17backdoorautomater9sanitizer13sanitize_port17h389e8c38eed4b27bE(&local_50,&local_68);
  param_1[8] = local_40;
  param_1[6] = CONCAT44(uStack_4c,local_50);
  param_1[7] = CONCAT44(uStack_44,uStack_48);
  local_58 = param_1[0xb];
  local_68 = *(undefined4 *)(param_1 + 9);
  uStack_64 = *(undefined4 *)((long)param_1 + 0x4c);
  uStack_60 = *(undefined4 *)(param_1 + 10);
  uStack_5c = *(undefined4 *)((long)param_1 + 0x54);
  _ZN17backdoorautomater9sanitizer13sanitize_time17hd3370276699eb02bE(&local_50,&local_68);
  param_1[0xb] = local_40;
  param_1[9] = CONCAT44(uStack_4c,local_50);
  param_1[10] = CONCAT44(uStack_44,uStack_48);
  local_58 = param_1[0xe];
  local_68 = *(undefined4 *)(param_1 + 0xc);
  uStack_64 = *(undefined4 *)((long)param_1 + 100);
  uStack_60 = *(undefined4 *)(param_1 + 0xd);
  uStack_5c = *(undefined4 *)((long)param_1 + 0x6c);
  _ZN17backdoorautomater9sanitizer13sanitize_path17h9d14fc69d5f617e3E(&local_50,&local_68);
  param_1[0xe] = local_40;
  *(undefined4 *)(param_1 + 0xc) = local_50;
  *(undefined4 *)((long)param_1 + 100) = uStack_4c;
  *(undefined4 *)(param_1 + 0xd) = uStack_48;
  *(undefined4 *)((long)param_1 + 0x6c) = uStack_44;
  uVar1 = *(undefined *)(param_1 + 0x12);
  _ZN17backdoorautomater9sanitizer15sanitize_choice17h12bb61fb68c957caE(uVar1,(undefined)local_38);
  *(undefined *)(param_1 + 0x12) = uVar1;
  local_58 = param_1[0x11];
  local_68 = *(undefined4 *)(param_1 + 0xf);
  uStack_64 = *(undefined4 *)((long)param_1 + 0x7c);
  uStack_60 = *(undefined4 *)(param_1 + 0x10);
  uStack_5c = *(undefined4 *)((long)param_1 + 0x84);
  _ZN17backdoorautomater9sanitizer15sanitize_script17h080ed7420ce68219E(&local_50,&local_68);
  param_1[0x11] = local_40;
  *(undefined4 *)(param_1 + 0xf) = local_50;
  *(undefined4 *)((long)param_1 + 0x7c) = uStack_4c;
  *(undefined4 *)(param_1 + 0x10) = uStack_48;
  *(undefined4 *)((long)param_1 + 0x84) = uStack_44;
  _ZN4core3ptr45drop_in_place_LT_backdoorautomater__Param_GT_17h3d52124aa8e3b978E(param_1);
  return;
}