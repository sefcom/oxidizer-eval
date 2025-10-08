undefined  [16] _ZN11forc_crypto7address8examples17h06fffe9fc2f60a1aE(void)

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
  local_58 = &PTR_s___Convert_an_address_to_another_f_0072f248;
  local_50 = 1;
  local_40 = 0;
  uStack_38 = 0;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h34f6eea6daa701c2E
            (local_70,
             "    # Convert an address to another format\n    forc crypto address fuel12e0xwx34nfp7jrzvn9mp5qkac3yvp7h8fx37ghl7klf82vv2wkys6wd523\n\n"
             ,0x84,&local_58);
                    /* try { // try from 004fc4ea to 004fc505 has its CatchHandler @ 004fc524 */
  _ZN5alloc3str17join_generic_copy17hb36460053a1e0f5cE(local_28,local_70,1);
  auVar1 = _ZN5alloc3vec16Vec_LT_T_C_A_GT_16into_boxed_slice17hf05f49726fdee3c0E(local_28);
  _ZN4core3ptr47drop_in_place_LT_forc_crypto__address__Args_GT_17hfcd41aab899c86aaE(local_70);
  return auVar1;
}