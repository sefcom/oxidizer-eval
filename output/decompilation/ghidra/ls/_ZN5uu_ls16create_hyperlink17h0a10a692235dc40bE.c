void _ZN5uu_ls16create_hyperlink17h0a10a692235dc40bE
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined **local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined local_b0 [8];
  long local_a8;
  long local_a0;
  undefined *local_98;
  code *local_90;
  undefined *local_88;
  code *local_80;
  undefined local_78 [24];
  undefined local_60 [24];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  (*(code *)PTR__ZN8hostname3get17ha3f027e3ef97b427E_0048ff20)(&local_118);
  uVar1 = uStack_110;
  local_d8 = local_108;
  local_e8 = (undefined4)local_118;
  uStack_e4 = local_118._4_4_;
  uStack_e0 = (undefined4)uStack_110;
  uStack_dc = uStack_110._4_4_;
                    /* try { // try from 0029ef4c to 0029ef5f has its CatchHandler @ 0029f0e8 */
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0048fdf0)
            (local_78,uStack_110,local_108);
                    /* try { // try from 0029ef64 to 0029ef7b has its CatchHandler @ 0029f121 */
  _ZN3std2fs12canonicalize17hef8b07af9bd14c71E(&local_118,param_4 + 0x18);
  _ZN4core6result19Result_LT_T_C_E_GT_17unwrap_or_default17h0481ca2b4295af1cE(local_c8,&local_118);
                    /* try { // try from 0029ef86 to 0029ef90 has its CatchHandler @ 0029f0e3 */
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0048fdf0)
            (local_b0,local_c0,local_b8);
  uStack_110 = local_a0 + local_a8;
  local_118 = (undefined **)local_a8;
  local_108 = (undefined **)&DAT_001d421b;
  local_100 = 6;
                    /* try { // try from 0029efbc to 0029efce has its CatchHandler @ 0029f0de */
  _ZN4core4iter6traits8iterator8Iterator7collect17h063b2a55e24d0217E(local_60,&local_118);
  local_90 = 
  _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h836131a62ea12574E;
  local_80 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_118 = &PTR_DAT_00386d70;
  uStack_110 = 3;
  local_f8 = 0;
  local_108 = &local_98;
  local_100 = 2;
                    /* try { // try from 0029f030 to 0029f03f has its CatchHandler @ 0029f0d9 */
  local_98 = local_78;
  local_88 = local_60;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h69a0b1154707aabfE(&local_48,&local_118);
  local_118._0_4_ = local_48;
  local_118._4_4_ = uStack_44;
  uStack_110._0_4_ = uStack_40;
  uStack_110._4_4_ = uStack_3c;
  local_108 = (undefined **)local_38;
                    /* try { // try from 0029f059 to 0029f07a has its CatchHandler @ 0029f0ed */
  _ZN3std3ffi6os_str8OsString4push17had4c4c06171a790fE(&local_118,param_2,param_3);
  _ZN3std3ffi6os_str8OsString4push17h8d27602952d812afE(&local_118,&DAT_001d422e,6);
  *(undefined ***)(param_1 + 4) = local_108;
  *param_1 = (undefined4)local_118;
  param_1[1] = local_118._4_4_;
  param_1[2] = (undefined4)uStack_110;
  param_1[3] = uStack_110._4_4_;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(local_60);
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h5012a4810cee898dE(local_b0);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h2dce88b0c646837fE(local_c8);
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h5012a4810cee898dE(local_78);
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h9930b46afeec8fe4E
            (CONCAT44(uStack_e4,local_e8),uVar1);
  return;
}