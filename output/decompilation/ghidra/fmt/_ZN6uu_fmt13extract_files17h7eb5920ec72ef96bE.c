undefined8 * _ZN6uu_fmt13extract_files17h7eb5920ec72ef96bE(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  long extraout_RDX;
  byte local_162;
  undefined local_161;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_100;
  undefined8 local_c0;
  undefined8 local_80;
  undefined *local_78;
  byte *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  local_162 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8index_of17h533e2cba337d4042E_001f70d8
              )(param_2,"files",5);
  local_162 = extraout_RDX == 1 & local_162;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h81c090d18757eba4E
            (&local_68,param_2);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h09395f96ef88f6e5E(&uStack_140,&local_68);
  local_148 = 1;
  local_100 = 0;
  local_c0 = 0;
  local_80 = 0;
  local_78 = &local_161;
  local_70 = &local_162;
  _ZN4core4iter6traits8iterator8Iterator7collect17h351c737f9a1f280fE(&local_160,&local_148);
  cVar2 = _ZN4core6result19Result_LT_T_C_E_GT_9is_ok_and17h78e54e6f75f967bcE(0,&local_160);
  if (cVar2 == '\0') {
    param_1[2] = local_150;
    *param_1 = local_160;
    param_1[1] = uStack_158;
  }
  else {
    puVar3 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18);
    if (puVar3 == (undefined4 *)0x0) {
                    /* try { // try from 00164b84 to 00164b93 has its CatchHandler @ 00164ba3 */
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_001f6e80)(8,0x18);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
                    /* try { // try from 00164b09 to 00164b21 has its CatchHandler @ 00164b96 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h7c69efe601866818E
              (&local_148,"-",1);
    local_58 = local_138;
    local_68 = (undefined4)local_148;
    uStack_64 = local_148._4_4_;
    uStack_60 = uStack_140;
    uStack_5c = uStack_13c;
    *(undefined8 *)(puVar3 + 4) = local_138;
    *puVar3 = (undefined4)local_148;
    puVar3[1] = local_148._4_4_;
    puVar3[2] = uStack_140;
    puVar3[3] = uStack_13c;
    *param_1 = 1;
    param_1[1] = puVar3;
    param_1[2] = 1;
    _ZN4core3ptr156drop_in_place_LT_core__result__Result_LT_alloc__vec__Vec_LT_alloc__string__String_GT__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17hd5ff8bdd337469f7E
              (&local_160);
  }
  return param_1;
}