void _ZN17versions_replacer8metadata32collect_versions_from_cargo_toml17hfc1c339465d44313E
               (undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_240;
  undefined8 local_228;
  undefined8 local_210;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  long local_1c0;
  long local_1b8;
  long local_1b0 [24];
  long local_f0;
  long local_e8;
  undefined local_e0 [192];
  
  local_258 = 0x8000000000000000;
  local_240 = 0x8000000000000000;
  local_228 = 0x8000000000000000;
  local_288 = 0;
  local_280 = 8;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 8;
  local_260 = 0;
  local_210 = 0;
  local_200 = 0;
  local_1f8 = 0;
  uVar1 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h5b3439d32baa9182E
                    (param_2);
                    /* try { // try from 002018ad to 002018dd has its CatchHandler @ 002019ae */
  _ZN14cargo_metadata15MetadataCommand13manifest_path17h505cce700b18956dE(&local_288,uVar1);
  (*(code *)PTR__ZN14cargo_metadata15MetadataCommand4exec17heef95a2c2766c53eE_003599d0)
            (&local_1c0,&local_288);
  _ZN4eyre7context90__LT_impl_u20_eyre__WrapErr_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_8wrap_err17h1fc4642316d0d90bE
            (&local_f0,&local_1c0);
  if (local_f0 == -0x8000000000000000) {
    param_1[1] = local_e8;
    *param_1 = 0;
    _ZN4core3ptr52drop_in_place_LT_cargo_metadata__MetadataCommand_GT_17h13f2d0c45c19c03eE
              (&local_288);
  }
  else {
    (*(code *)PTR_memcpy_00359988)(local_1b0,local_e0,0xc0);
    local_1c0 = local_f0;
    local_1b8 = local_e8;
                    /* try { // try from 00201936 to 0020195c has its CatchHandler @ 0020199c */
    _ZN4core3ptr52drop_in_place_LT_cargo_metadata__MetadataCommand_GT_17h13f2d0c45c19c03eE
              (&local_288);
    _ZN4core4iter6traits8iterator8Iterator7collect17heb703dadacfa79d7E
              (&local_1f0,local_e8,local_1b0[0] * 600 + local_e8);
    *(undefined4 *)(param_1 + 4) = local_1d0;
    *(undefined4 *)((long)param_1 + 0x24) = uStack_1cc;
    *(undefined4 *)(param_1 + 5) = uStack_1c8;
    *(undefined4 *)((long)param_1 + 0x2c) = uStack_1c4;
    *(undefined4 *)(param_1 + 2) = local_1e0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_1dc;
    *(undefined4 *)(param_1 + 3) = uStack_1d8;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_1d4;
    *(undefined4 *)param_1 = local_1f0;
    *(undefined4 *)((long)param_1 + 4) = uStack_1ec;
    *(undefined4 *)(param_1 + 1) = uStack_1e8;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_1e4;
    _ZN4core3ptr45drop_in_place_LT_cargo_metadata__Metadata_GT_17h2465f5346126ad86E(&local_1c0);
  }
  return;
}