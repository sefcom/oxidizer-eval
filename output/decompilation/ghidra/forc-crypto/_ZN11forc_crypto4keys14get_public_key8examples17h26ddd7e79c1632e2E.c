undefined  [16] _ZN11forc_crypto4keys14get_public_key8examples17h26ddd7e79c1632e2E(void)

{
  undefined auVar1 [16];
  undefined auStack_78 [8];
  undefined local_70 [24];
  undefined **local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined local_28 [24];
  
  local_48 = auStack_78;
  local_58 = &PTR_s___Get_the_public_key_from_a_mess_0072f298;
  local_50 = 1;
  local_40 = 0;
  uStack_38 = 0;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h34f6eea6daa701c2E
            (local_70,
             "    # Get the public key from a message and its signature\n    forc crypto get-public-key \\\n            0x1eff08081394b72239a0cf7ff6b499213dcb7a338bedbd75d072d504588ef27a1f74d5ceb2f111ec02ede097fb09ed00aa9867922ed39299dae0b1afc0fa8661 \\\n            \"This is a message that is signed\"\n\n"
             ,0x11c,&local_58);
                    /* try { // try from 004fcffa to 004fd015 has its CatchHandler @ 004fd034 */
  _ZN5alloc3str17join_generic_copy17hb36460053a1e0f5cE(local_28,local_70,1);
  auVar1 = _ZN5alloc3vec16Vec_LT_T_C_A_GT_16into_boxed_slice17hf05f49726fdee3c0E(local_28);
  _ZN4core3ptr47drop_in_place_LT_forc_crypto__address__Args_GT_17hfcd41aab899c86aaE(local_70);
  return auVar1;
}