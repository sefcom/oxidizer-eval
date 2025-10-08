void _ZN12forc_publish11credentials24get_auth_token_from_file17ha8467dcfd7baa26dE
               (undefined *param_1,long param_2)

{
  int iVar1;
  undefined local_f0 [24];
  int local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  
  _ZN3std2fs8metadata17h581a12f35fd9c335E
            (&local_d8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  iVar1 = local_d8;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hec7eb2b2c600b37eE
            (&local_d8);
  if (iVar1 != 2) {
    _ZN3std2fs14read_to_string17h6ed86aa426eff30cE(&local_d8,param_2);
    if (CONCAT44(uStack_d4,local_d8) == -0x8000000000000000) {
      *param_1 = 0;
      *(ulong *)(param_1 + 8) = CONCAT44(uStack_cc,local_d0);
      return;
    }
                    /* try { // try from 00762b57 to 00762b60 has its CatchHandler @ 00762bb0 */
    _ZN66__LT_toml__de__Deserializer_u20_as_u20_serde__de__Deserializer_GT_18deserialize_struct17h90f363fe36d647ceE
              (&local_d8);
    if (local_d8 == 2) {
      *(undefined8 *)(param_1 + 0x18) = local_c0;
      *(undefined4 *)(param_1 + 8) = local_d0;
      *(undefined4 *)(param_1 + 0xc) = uStack_cc;
      *(undefined4 *)(param_1 + 0x10) = uStack_c8;
      *(undefined4 *)(param_1 + 0x14) = uStack_c4;
      *param_1 = 0xe;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcc89c62839702889E(local_f0);
      return;
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcc89c62839702889E(local_f0);
    _ZN4core3ptr105drop_in_place_LT_core__result__Result_LT_forc_publish__credentials__Credentials_C_toml__de__Error_GT__GT_17hc881f6b550ccd228E
              (&local_d8);
  }
  *(undefined8 *)(param_1 + 8) = 0x8000000000000000;
  *param_1 = 0xe;
  return;
}