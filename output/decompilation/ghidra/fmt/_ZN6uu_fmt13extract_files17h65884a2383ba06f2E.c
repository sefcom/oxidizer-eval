long * _ZN6uu_fmt13extract_files17h65884a2383ba06f2E(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined auVar3 [16];
  undefined local_17a;
  undefined local_179;
  long local_178 [3];
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  long local_150;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long local_108;
  undefined8 local_100;
  undefined local_f8 [64];
  undefined8 local_b8;
  undefined8 local_78;
  undefined8 local_38;
  undefined *local_30;
  undefined *local_28;
  
  auVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8index_of17hc3c8b487726d2353E
                     (param_2,"files",5);
  local_17a = auVar3._8_8_ == 1 && auVar3._0_8_ != 0;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h09abd7b1f5ddbadeE
            (&local_160,param_2,"files",5);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h7cc34044724f6ef1E
            (local_f8,"files",5,&local_160);
  local_100 = 1;
  local_b8 = 0;
  local_78 = 0;
  local_38 = 0;
  local_30 = &local_179;
  local_28 = &local_17a;
  _ZN4core4iter8adapters11try_process17h0378d5530d4cfb57E(local_178,&local_100);
  cVar1 = _ZN4core6result19Result_LT_T_C_E_GT_9is_ok_and17h29c70ed0bca145e8E
                    ((ulong)(local_178[0] == -0x8000000000000000),
                     local_178 + (local_178[0] == -0x8000000000000000));
  if (cVar1 == '\0') {
    param_1[2] = local_178[2];
    *param_1 = local_178[0];
    param_1[1] = local_178[1];
  }
  else {
    puVar2 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(8,0x18);
    if (puVar2 == (undefined4 *)0x0) {
                    /* try { // try from 001b5913 to 001b5922 has its CatchHandler @ 001b5930 */
                    /* WARNING: Subroutine does not return */
      _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(8,0x18);
    }
                    /* try { // try from 001b5889 to 001b58a1 has its CatchHandler @ 001b5923 */
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h5bbd8c4ce611c1c9E
              (&local_160,"-",1);
    local_108 = local_150;
    local_118 = local_160;
    uStack_114 = uStack_15c;
    uStack_110 = uStack_158;
    uStack_10c = uStack_154;
    *(long *)(puVar2 + 4) = local_150;
    *puVar2 = local_160;
    puVar2[1] = uStack_15c;
    puVar2[2] = uStack_158;
    puVar2[3] = uStack_154;
                    /* try { // try from 001b58c1 to 001b58d2 has its CatchHandler @ 001b5930 */
    _ZN5alloc5slice4hack8into_vec17hec8791858ac76d0cE(&local_160,puVar2,1);
    param_1[2] = local_150;
    *(undefined4 *)param_1 = local_160;
    *(undefined4 *)((long)param_1 + 4) = uStack_15c;
    *(undefined4 *)(param_1 + 1) = uStack_158;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_154;
    _ZN4core3ptr156drop_in_place_LT_core__result__Result_LT_alloc__vec__Vec_LT_alloc__string__String_GT__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h73b975fc798ab75aE
              (local_178);
  }
  return param_1;
}