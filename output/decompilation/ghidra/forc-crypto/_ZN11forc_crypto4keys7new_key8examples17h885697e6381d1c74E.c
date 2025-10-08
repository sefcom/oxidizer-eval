undefined  [16] _ZN11forc_crypto4keys7new_key8examples17h885697e6381d1c74E(void)

{
  undefined auVar1 [16];
  undefined local_e0 [8];
  undefined **local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined **local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined local_28 [24];
  
  local_d8 = &PTR_s___Creates_a_new_key_default_for_b_0072f2a8;
  uStack_d0 = 1;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = local_e0;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h34f6eea6daa701c2E
            (&local_70,
             "    # Creates a new key default for block production\n    forc crypto new-key\n\n",
             0x4e,&local_d8);
  local_d8 = &PTR_s___Creates_a_new_key_for_peering_f_0072f2b8;
  uStack_d0 = 1;
  local_c0 = 0;
  uStack_b8 = 0;
                    /* try { // try from 004fd6ee to 004fd70b has its CatchHandler @ 004fd80f */
  local_c8 = local_e0;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h34f6eea6daa701c2E
            (&local_58,"    # Creates a new key for peering\n    forc crypto new-key -k peering\n\n"
             ,0x48,&local_d8);
  local_88 = local_58;
  uStack_80 = uStack_50;
  local_78 = local_48;
  local_d8 = &PTR_s___Creates_a_new_key_for_block_pr_0072f2c8;
  uStack_d0 = 1;
  local_c0 = 0;
  uStack_b8 = 0;
                    /* try { // try from 004fd748 to 004fd765 has its CatchHandler @ 004fd7f0 */
  local_c8 = local_e0;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h34f6eea6daa701c2E
            (&local_40,
             "    # Creates a new key for block production\n    forc crypto new-key -k block-production\n\n"
             ,0x5a,&local_d8);
  local_d8 = local_70;
  uStack_d0 = uStack_68;
  local_c8 = (undefined *)local_60;
  local_c0 = local_88;
  uStack_b8 = uStack_80;
  local_b0 = local_78;
  local_a8 = local_40;
  uStack_a4 = uStack_3c;
  uStack_a0 = uStack_38;
  uStack_9c = uStack_34;
  local_98 = local_30;
                    /* try { // try from 004fd7ab to 004fd7ce has its CatchHandler @ 004fd824 */
  _ZN5alloc3str17join_generic_copy17hb36460053a1e0f5cE(local_28,&local_d8,3);
  auVar1 = _ZN5alloc3vec16Vec_LT_T_C_A_GT_16into_boxed_slice17hf05f49726fdee3c0E(local_28);
  _ZN4core3ptr63drop_in_place_LT__u5b_alloc__string__String_u3b__u20_3_u5d__GT_17hac1f933aff3df9e0E
            (&local_d8);
  return auVar1;
}