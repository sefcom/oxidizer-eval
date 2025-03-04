void _ZN8uu_split24handle_extract_obs_lines17hd759134314187d0aE
               (undefined8 *param_1,long param_2,long param_3,undefined4 *param_4)

{
  undefined local_b9;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined local_a0 [8];
  long local_98;
  ulong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  long local_70;
  long local_68;
  undefined *local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_b8 = 0;
  local_b0 = 4;
  local_a8 = 0;
  local_b9 = 0;
  local_68 = param_2 + param_3;
  local_60 = &local_b9;
  local_58 = &local_b8;
                    /* try { // try from 001c9dcc to 001c9dda has its CatchHandler @ 001c9ec6 */
  local_70 = param_2;
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hcbe47f8a54903219E
            (local_a0,&local_70);
  if (local_a8 == 0) {
                    /* try { // try from 001c9e2c to 001c9e68 has its CatchHandler @ 001c9eb7 */
    _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(&local_38,param_2,param_3);
    param_1[2] = local_28;
    local_50 = local_38;
    uStack_4c = uStack_34;
    uStack_48 = uStack_30;
    uStack_44 = uStack_2c;
  }
  else {
                    /* try { // try from 001c9dee to 001c9df7 has its CatchHandler @ 001c9eb7 */
    _ZN99__LT_alloc__string__String_u20_as_u20_core__iter__traits__collect__FromIterator_LT__RF_char_GT__GT_9from_iter17hcf3bda9dc0bd03f6E
              (&local_88,local_b0,local_b0 + local_a8 * 4);
                    /* try { // try from 001c9df8 to 001c9dff has its CatchHandler @ 001c9ea0 */
    _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h9a0a0458ef52dcc0E
              (param_4);
    *(undefined8 *)(param_4 + 4) = local_78;
    *param_4 = local_88;
    param_4[1] = uStack_84;
    param_4[2] = uStack_80;
    param_4[3] = uStack_7c;
    if (local_90 < 2) {
      *param_1 = 0x8000000000000000;
      goto LAB_001c9e7d;
    }
    _ZN99__LT_alloc__string__String_u20_as_u20_core__iter__traits__collect__FromIterator_LT__RF_char_GT__GT_9from_iter17hcf3bda9dc0bd03f6E
              (&local_50,local_98,local_98 + local_90 * 4);
    param_1[2] = local_40;
  }
  *(undefined4 *)param_1 = local_50;
  *(undefined4 *)((long)param_1 + 4) = uStack_4c;
  *(undefined4 *)(param_1 + 1) = uStack_48;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_44;
LAB_001c9e7d:
                    /* try { // try from 001c9e7d to 001c9e86 has its CatchHandler @ 001c9ec6 */
  _ZN4core3ptr48drop_in_place_LT_alloc__vec__Vec_LT_char_GT__GT_17hd7f863a59b4c66daE(local_a0);
  _ZN4core3ptr48drop_in_place_LT_alloc__vec__Vec_LT_char_GT__GT_17hd7f863a59b4c66daE(&local_b8);
  return;
}