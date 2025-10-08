void _ZN5uu_ls10TimeStyler3new17hf5080b982bd19d16E(undefined8 *param_1,ulong *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined local_b0;
  char *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined local_90 [4];
  undefined3 uStack_8c;
  undefined8 local_78;
  undefined4 local_70;
  int local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined local_20;
  undefined3 uStack_1b;
  
  uVar2 = (uint)_uStack_1b >> 0x18;
  switch(*param_2 ^ 0x8000000000000000) {
  case 0:
    local_d0 = "%Y-%m-%d %H:%M:%S.%f %z";
    uStack_c8 = 0x17;
    break;
  case 1:
    local_d0 = "%Y-%m-%d %H:%M";
    uStack_c8 = 0xe;
    break;
  case 2:
    local_d0 = "%Y-%m-%d ";
    uStack_c8 = 9;
    local_c0 = 8;
    local_b8 = 0;
    local_b0 = 0;
    (*(code *)PTR__ZN6chrono6format8strftime13StrftimeItems5parse17h432dd8f43e9f4d8cE_0048fd88)
              (local_90,&local_d0);
    pcVar4 = "%m-%d %H:%M";
    goto LAB_00290ca4;
  case 3:
    local_d0 = "%b %e  %Y";
    uStack_c8 = 9;
    local_c0 = 8;
    local_b8 = 0;
    local_b0 = 0;
    (*(code *)PTR__ZN6chrono6format8strftime13StrftimeItems5parse17h432dd8f43e9f4d8cE_0048fd88)
              (local_90,&local_d0);
    pcVar4 = "%b %e %H:%M";
LAB_00290ca4:
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h818d8937d812229fE(&local_58,local_90);
    local_38 = 0xb;
    local_30 = 8;
    local_28 = 0;
    local_20 = 0;
    _uStack_1b = CONCAT13((char)uVar2,uStack_8c);
                    /* try { // try from 00290d00 to 00290d11 has its CatchHandler @ 00290e44 */
    local_40 = pcVar4;
    _ZN4core4iter6traits8iterator8Iterator7collect17h35b5b8e03616c6b6E(&local_d0,&local_40);
    local_98 = local_c0;
    local_a8 = local_d0;
    uStack_a0 = (undefined4)uStack_c8;
    uStack_9c = uStack_c8._4_4_;
    iVar3 = 0;
    if (local_d0 != (char *)0x8000000000000000) {
                    /* try { // try from 00290d33 to 00290d4c has its CatchHandler @ 00290e5c */
      (*(code *)PTR__ZN6chrono6offset5local5Local3now17hd3cc0dab6e1d709bE_0048fd90)(&local_d0);
      _ZN6chrono8datetime18DateTime_LT_Tz_GT_18checked_sub_signed17ha19d87d3e23c7b2aE
                (&local_68,&local_d0);
      if (local_68 == 0) {
                    /* try { // try from 00290e14 to 00290e2c has its CatchHandler @ 00290e5c */
        (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_0048f850)
                  ("`DateTime - TimeDelta` overflowed",0x21,
                   &PTR_s__home_34r7hm4n__cargo_registry_s_00386740);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_78 = local_64;
      local_70 = local_5c;
      iVar3 = local_68;
    }
    goto LAB_00290dc2;
  default:
    (*(code *)
      PTR__ZN6uucore8features13custom_tz_fmt18custom_time_format17h40983abf3ea6ab5dE_0048fd78)
              (&local_a8,param_2[1],param_2[2]);
    local_d0 = (char *)CONCAT44(uStack_9c,uStack_a0);
    uStack_c8 = local_98;
    local_c0 = 8;
    local_b8 = 0;
    local_b0 = 1;
                    /* try { // try from 00290bfd to 00290c0c has its CatchHandler @ 00290e2f */
    (*(code *)
      PTR__ZN6chrono6format8strftime13StrftimeItems14parse_to_owned17hc7bb9614939a590cE_0048fd80)
              (local_90,&local_d0);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_a8);
    goto LAB_00290da9;
  }
  local_c0 = 8;
  local_b8 = 0;
  local_b0 = 0;
  (*(code *)PTR__ZN6chrono6format8strftime13StrftimeItems5parse17h432dd8f43e9f4d8cE_0048fd88)
            (local_90,&local_d0);
LAB_00290da9:
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h818d8937d812229fE(&local_58,local_90);
  local_a8 = (char *)0x8000000000000000;
  iVar3 = 0;
LAB_00290dc2:
  param_1[2] = local_48;
  *param_1 = local_58;
  param_1[1] = uStack_50;
  param_1[3] = local_a8;
  param_1[4] = CONCAT44(uStack_9c,uStack_a0);
  param_1[5] = local_98;
  *(int *)(param_1 + 6) = iVar3;
  *(undefined8 *)((long)param_1 + 0x34) = local_78;
  *(undefined4 *)((long)param_1 + 0x3c) = local_70;
  return;
}