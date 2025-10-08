undefined  [16] _ZN11forc_crypto4keys6vanity8examples17h6d559cc5ef86d80eE(void)

{
  undefined auVar1 [16];
  undefined local_120 [8];
  undefined **local_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined local_28 [24];
  
  local_118 = &PTR_s___Generate_a_checksummed_vanity_a_0072f2f8;
  uStack_110 = 1;
  local_100 = 0;
  uStack_f8 = 0;
  local_108 = local_120;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h34f6eea6daa701c2E
            (&local_58,
             "    # Generate a checksummed vanity address with a given prefix\n    forc crypto vanity --starts-with \"aaa\"\n\n"
             ,0x6c,&local_118);
  local_118 = &PTR_s___Generate_a_checksummed_vanity_a_0072f308;
  uStack_110 = 1;
  local_100 = 0;
  uStack_f8 = 0;
                    /* try { // try from 004fe331 to 004fe34b has its CatchHandler @ 004fe4e7 */
  local_108 = local_120;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h34f6eea6daa701c2E
            (&local_b0,
             "    # Generate a checksummed vanity address with a given suffix\n    forc crypto vanity --ends-with \"aaa\"\n\n"
             ,0x6a,&local_118);
  local_98 = local_b0;
  uStack_90 = uStack_a8;
  local_88 = local_a0;
  local_118 = &PTR_s___Generate_a_checksummed_vanity_a_0072f318;
  uStack_110 = 1;
  local_100 = 0;
  uStack_f8 = 0;
                    /* try { // try from 004fe38b to 004fe3a5 has its CatchHandler @ 004fe4c2 */
  local_108 = local_120;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h34f6eea6daa701c2E
            (&local_b0,
             "    # Generate a checksummed vanity address with a given prefix and suffix\n    forc crypto vanity --starts-with \"00\" --ends-with \"ff\"\n\n"
             ,0x87,&local_118);
  local_78 = local_b0;
  uStack_70 = uStack_a8;
  local_68 = local_a0;
  local_118 = &PTR_s___Generate_a_checksummed_vanity_a_0072f328;
  uStack_110 = 1;
  local_100 = 0;
  uStack_f8 = 0;
                    /* try { // try from 004fe3e5 to 004fe402 has its CatchHandler @ 004fe4b0 */
  local_108 = local_120;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h34f6eea6daa701c2E
            (&local_40,
             "    # Generate a checksummed vanity address with a given regex pattern\n    forc crypto vanity --regex \"^00.*ff$\"\n\n"
             ,0x72,&local_118);
  local_118 = local_58;
  uStack_110 = uStack_50;
  local_108 = (undefined *)local_48;
  local_100 = local_98;
  uStack_f8 = uStack_90;
  local_f0 = local_88;
  local_e8 = local_78;
  uStack_e0 = uStack_70;
  local_d8 = local_68;
  local_d0 = local_40;
  uStack_cc = uStack_3c;
  uStack_c8 = uStack_38;
  uStack_c4 = uStack_34;
  local_c0 = local_30;
                    /* try { // try from 004fe46b to 004fe48e has its CatchHandler @ 004fe4ff */
  _ZN5alloc3str17join_generic_copy17hb36460053a1e0f5cE(local_28,&local_118,4);
  auVar1 = _ZN5alloc3vec16Vec_LT_T_C_A_GT_16into_boxed_slice17hf05f49726fdee3c0E(local_28);
  _ZN4core3ptr63drop_in_place_LT__u5b_alloc__string__String_u3b__u20_4_u5d__GT_17h7bab920fcd67c50dE
            (&local_118);
  return auVar1;
}