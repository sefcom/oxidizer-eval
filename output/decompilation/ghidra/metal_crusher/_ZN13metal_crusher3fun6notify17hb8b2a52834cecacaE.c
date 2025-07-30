void _ZN13metal_crusher3fun6notify17hb8b2a52834cecacaE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 *local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  char *local_340;
  undefined8 local_338;
  char *local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined *local_300;
  undefined8 uStack_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined local_2e0 [16];
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined local_2c0 [64];
  undefined1 *local_280;
  char *pcStack_278;
  undefined8 local_270;
  char *local_268;
  undefined8 local_260;
  undefined *local_258;
  char *local_250;
  undefined8 local_248;
  char *local_240;
  undefined8 local_238;
  undefined local_230;
  
  local_280 = (undefined1 *)(*(code *)PTR__ZN4rand4rngs6thread3rng17hf0f1cc4222ade925E_006b4078)();
                    /* try { // try from 00486ac9 to 00486ae3 has its CatchHandler @ 00486ca1 */
  uVar1 = _ZN4rand3rng3Rng12random_range17h314d1556f613f069E
                    (&local_280,0,0xffffffff,&PTR_s_src_fun_rs_00696540);
  _ZN4core3ptr50drop_in_place_LT_rand__rngs__thread__ThreadRng_GT_17h85086739cd9d0457E(&local_280);
  _ZN3std4sync6poison4once4Once9call_once17h38b33f284e35dbebE();
  _ZN62__LT_T_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17hd4d6040019a153beE
            (&local_280,1,0,0,&PTR_s_src_fun_rs_00696570);
                    /* try { // try from 00486b15 to 00486b20 has its CatchHandler @ 00486c8f */
  local_2e0 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17h8f8e589f1c431455E
                        (&PTR__ZN4core3ops8function6FnOnce9call_once17hd9e3c5b7deb62a2aE_00696588);
  local_340 = "Metal Crusher";
  local_338 = 0xd;
  local_330 = "dialog-information";
  local_328 = 0x12;
  local_358 = local_280;
  uStack_350 = pcStack_278;
  local_348 = local_270;
  local_300 = PTR_DAT_00696590;
  uStack_2f8 = _UNK_00696598;
  local_2f0 = _DAT_006965a0;
  uStack_2ec = _UNK_006965a4;
  uStack_2e8 = _UNK_006965a8;
  uStack_2e4 = _UNK_006965ac;
  local_2cc = 3000;
  local_280 = _ZN13metal_crusher3fun12FUN_INSTANCE17hc5e563d48c906004E;
  local_250 = "org.freedesktop.Notifications";
  local_248 = 0x1d;
  pcStack_278 = "/org/freedesktop/Notifications";
  local_270 = 0x1e;
  local_240 = "org.freedesktop.Notifications";
  local_238 = 0x1d;
  local_268 = "Notify";
  local_260 = 6;
  local_230 = 0;
                    /* try { // try from 00486c36 to 00486c4a has its CatchHandler @ 00486c82 */
  local_320 = param_1;
  local_318 = param_2;
  local_310 = param_3;
  local_308 = param_4;
  local_2d0 = uVar1;
  local_258 = (undefined *)&local_358;
  _ZN8async_io6driver8block_on17h5dbae8df137ade10E(local_2c0,&local_280);
                    /* try { // try from 00486c4b to 00486c52 has its CatchHandler @ 00486c70 */
  _ZN4core3ptr194drop_in_place_LT__LP__RF_str_C_u32_C__RF_str_C__RF_str_C__RF_str_C_alloc__vec__Vec_LT__RF_str_GT__C_std__collections__hash__map__HashMap_LT__RF_str_C__RF_zvariant__value__Value_GT__C_i32_RP__GT_17ha8e5c64d08ec86f7E
            (&local_358);
  _ZN4core3ptr92drop_in_place_LT_core__result__Result_LT_zbus__message__Message_C_zbus__error__Error_GT__GT_17hb2e84c115fc8b39aE
            (local_2c0);
  return;
}