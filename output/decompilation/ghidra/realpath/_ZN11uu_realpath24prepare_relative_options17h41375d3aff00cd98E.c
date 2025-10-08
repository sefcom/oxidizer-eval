long * _ZN11uu_realpath24prepare_relative_options17h41375d3aff00cd98E
                 (long *param_1,undefined8 param_2,undefined param_3,undefined param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  long local_60;
  long *local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  uVar6 = 0x8000000000000000;
  puVar9 = &DAT_0011a307;
  local_58 = param_1;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h2d544eeeb6e4e28fE
            (&local_88,param_2,&DAT_0011a307,0xb);
  lVar3 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h69423c51579d2b37E
                    (&DAT_0011a307,0xb,&local_88);
  if (lVar3 == 0) {
    uVar8 = 0x8000000000000000;
  }
  else {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h149df0134a5d305eE
              (&local_88,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
    uVar8 = local_88;
    puVar9 = local_80;
  }
                    /* try { // try from 001629ac to 001629f1 has its CatchHandler @ 00162bb7 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h2d544eeeb6e4e28fE
            (&local_88,param_2,&DAT_0011a33c,0xd);
  lVar3 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h69423c51579d2b37E
                    (&DAT_0011a33c,0xd,&local_88);
  if (lVar3 != 0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h149df0134a5d305eE
              (&local_88,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
    local_90 = local_80;
    local_38 = local_78;
    uVar6 = local_88;
  }
                    /* try { // try from 00162a26 to 00162a43 has its CatchHandler @ 00162b9f */
  local_88 = uVar8;
  local_80 = puVar9;
  _ZN11uu_realpath28canonicalize_relative_option17hbda6f1f43c1a9622E
            (&local_50,&local_88,param_3,param_4);
  lVar1 = local_48;
  lVar3 = local_50;
  plVar4 = local_58;
  if (local_50 == -0x7fffffffffffffff) {
    local_58[1] = local_48;
    local_58[2] = local_40;
    *local_58 = -0x7fffffffffffffff;
    _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h3f75f99dfce4f7daE
              (uVar6,local_90);
  }
  else {
    local_60 = local_40;
    local_80 = local_90;
    local_78 = local_38;
                    /* try { // try from 00162aa3 to 00162ab7 has its CatchHandler @ 00162b88 */
    local_88 = uVar6;
    _ZN11uu_realpath28canonicalize_relative_option17hbda6f1f43c1a9622E
              (&local_50,&local_88,param_3,param_4);
    plVar4 = local_58;
    if (local_50 == -0x7fffffffffffffff) {
      local_58[1] = local_48;
      local_58[2] = local_40;
      *local_58 = -0x7fffffffffffffff;
    }
    else {
      lVar5 = local_48;
      if (local_50 == -0x8000000000000000) {
        lVar5 = 0;
      }
      lVar7 = 0;
      if (lVar3 != -0x8000000000000000) {
        lVar7 = lVar1;
      }
                    /* try { // try from 00162b13 to 00162b1f has its CatchHandler @ 00162b78 */
      if ((lVar7 == 0 || lVar5 == 0) ||
         (cVar2 = _ZN3std4path4Path11starts_with17h5d2b2bc7a5c06590E(lVar7,local_60), cVar2 != '\0')
         ) {
        *plVar4 = lVar3;
        plVar4[1] = lVar1;
        plVar4[2] = local_60;
        plVar4[3] = local_50;
        plVar4[4] = local_48;
        plVar4[5] = local_40;
        return plVar4;
      }
      *plVar4 = -0x8000000000000000;
      plVar4[3] = -0x8000000000000000;
      _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h3f75f99dfce4f7daE
                (local_50,local_48);
    }
    _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h3f75f99dfce4f7daE
              (lVar3,lVar1);
  }
  return plVar4;
}