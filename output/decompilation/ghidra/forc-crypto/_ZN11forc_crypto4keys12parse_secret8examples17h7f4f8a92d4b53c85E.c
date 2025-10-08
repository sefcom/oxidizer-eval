undefined  [16] _ZN11forc_crypto4keys12parse_secret8examples17h7f4f8a92d4b53c85E(void)

{
  undefined auVar1 [16];
  undefined local_90 [8];
  undefined **local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined local_40 [16];
  undefined8 local_30;
  undefined local_28 [24];
  
  local_88 = &PTR_s___Parses_the_secret_of_a_block_p_0072f2d8;
  uStack_80 = 1;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = local_90;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h34f6eea6daa701c2E
            (&local_58,
             "    # Parses the secret of a block production\n    forc crypto parse-secret \"f5204427d0ab9a311266c96a377f7c329cb8a41b9088225b6fcf40eefb423e28\"\n\n"
             ,0x8f,&local_88);
  local_88 = &PTR_s___Parses_the_secret_of_a_peering_0072f2e8;
  uStack_80 = 1;
  local_70 = 0;
  uStack_68 = 0;
                    /* try { // try from 004fdcfe to 004fdd18 has its CatchHandler @ 004fdd80 */
  local_78 = local_90;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h34f6eea6daa701c2E
            (local_40,
             "    # Parses the secret of a peering\n    forc crypto parse-secret -k peering \"f5204427d0ab9a311266c96a377f7c329cb8a41b9088225b6fcf40eefb423e28\"\n\n"
             ,0x91,&local_88);
  local_88 = local_58;
  uStack_80 = uStack_50;
  local_78 = (undefined *)local_48;
  local_60 = local_30;
                    /* try { // try from 004fdd41 to 004fdd5e has its CatchHandler @ 004fdd95 */
  _ZN5alloc3str17join_generic_copy17hb36460053a1e0f5cE(local_28,&local_88,2);
  auVar1 = _ZN5alloc3vec16Vec_LT_T_C_A_GT_16into_boxed_slice17hf05f49726fdee3c0E(local_28);
  _ZN4core3ptr58drop_in_place_LT_forc_crypto__keys__vanity__HexMatcher_GT_17h90d4fc5912b41e43E
            (&local_88);
  return auVar1;
}