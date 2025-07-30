ulong _ZN17backdoorautomater9sanitizer22sanitize_command_exist17h2a8286a439cabb9aE(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  long local_168;
  undefined local_160 [24];
  undefined local_148 [56];
  undefined local_110 [8];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  
  local_c8 = *(undefined4 *)(param_1 + 8);
  uStack_c4 = *(undefined4 *)(param_1 + 0xc);
  uStack_c0 = *(undefined4 *)(param_1 + 0x10);
  uStack_bc = *(undefined4 *)(param_1 + 0x14);
  local_d8 = "command -v ";
  uStack_d0 = 0xb;
  _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(local_160,&local_d8,2,1,0);
                    /* try { // try from 0015d49e to 0015d4b6 has its CatchHandler @ 0015d5ae */
  _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_d8,"sh",2);
                    /* try { // try from 0015d4b7 to 0015d500 has its CatchHandler @ 0015d5c2 */
  uVar2 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_d8,"-c",2);
  uVar2 = _ZN3std7process7Command3arg17h1a6c514e95e1ad22E(uVar2,local_160);
  (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(local_148,uVar2);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
            (local_110,local_148,&PTR_s_src_sanitizer_rs_0032a6e8);
                    /* try { // try from 0015d501 to 0015d522 has its CatchHandler @ 0015d5b3 */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_d8);
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
            (local_148,local_108,local_100);
                    /* try { // try from 0015d523 to 0015d53c has its CatchHandler @ 0015d59f */
  uVar2 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                    (local_148);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
            (&local_d8,uVar2);
  local_168 = CONCAT44(uStack_c4,local_c8);
  local_178 = (undefined4)local_d8;
  uStack_174 = local_d8._4_4_;
  uStack_170 = (undefined4)uStack_d0;
  uStack_16c = uStack_d0._4_4_;
                    /* try { // try from 0015d556 to 0015d55f has its CatchHandler @ 0015d592 */
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E(local_148);
  lVar1 = local_168;
                    /* try { // try from 0015d565 to 0015d56c has its CatchHandler @ 0015d5b3 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_178);
                    /* try { // try from 0015d56d to 0015d576 has its CatchHandler @ 0015d5ae */
  _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(local_110);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(local_160);
  return CONCAT71((int7)((ulong)lVar1 >> 8),lVar1 != 0) & 0xffffffff;
}