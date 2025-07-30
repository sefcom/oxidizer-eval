void _ZN17backdoorautomater9sanitizer22sanitize_service_exist17hcf34e52a82af7174E(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  long local_168;
  undefined local_160 [24];
  undefined local_148 [56];
  undefined local_110 [32];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  local_c8 = *(long *)(param_1 + 8);
  uStack_c0 = *(undefined8 *)(param_1 + 0x10);
  local_d8 = "systemctl status Error ! The service already exist on your system !\n";
  uStack_d0 = 0x11;
  _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(local_160,&local_d8,2,1,0);
                    /* try { // try from 0015d6be to 0015d6d6 has its CatchHandler @ 0015d818 */
  _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_d8,"sh",2);
                    /* try { // try from 0015d6d7 to 0015d720 has its CatchHandler @ 0015d82c */
  uVar2 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_d8,"-c",2);
  uVar2 = _ZN3std7process7Command3arg17h1a6c514e95e1ad22E(uVar2,local_160);
  (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(local_148,uVar2);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
            (local_110,local_148,&PTR_s_src_sanitizer_rs_0032a728);
                    /* try { // try from 0015d721 to 0015d748 has its CatchHandler @ 0015d81d */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_d8);
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
            (local_148,local_f0,local_e8);
                    /* try { // try from 0015d749 to 0015d762 has its CatchHandler @ 0015d809 */
  uVar2 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                    (local_148);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
            (&local_d8,uVar2);
  local_168 = local_c8;
  local_178 = (undefined4)local_d8;
  uStack_174 = local_d8._4_4_;
  uStack_170 = (undefined4)uStack_d0;
  uStack_16c = uStack_d0._4_4_;
                    /* try { // try from 0015d77c to 0015d785 has its CatchHandler @ 0015d7fc */
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E(local_148);
  if (local_168 != 0) {
                    /* try { // try from 0015d78e to 0015d795 has its CatchHandler @ 0015d81d */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_178);
                    /* try { // try from 0015d796 to 0015d79f has its CatchHandler @ 0015d818 */
    _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(local_110);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(local_160);
    return;
  }
  local_d8 = &DAT_0032a740;
  uStack_d0 = 1;
  local_c8 = 8;
  uStack_c0 = 0;
  uStack_b8 = 0;
                    /* try { // try from 0015d7e5 to 0015d7f9 has its CatchHandler @ 0015d7fc */
  (*(code *)PTR__ZN4core9panicking9panic_fmt17he7d3af46f65769b3E_003681c0)
            (&local_d8,&PTR_s_src_sanitizer_rs_0032a750);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}