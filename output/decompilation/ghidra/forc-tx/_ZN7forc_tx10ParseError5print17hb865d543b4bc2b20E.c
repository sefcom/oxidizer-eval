undefined8 _ZN7forc_tx10ParseError5print17hb865d543b4bc2b20E(ulong *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong *local_328;
  undefined *local_320;
  code *local_318;
  undefined *local_310;
  undefined8 local_308;
  undefined **local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  
  local_320 = (undefined *)&local_328;
  local_328 = param_1;
  switch(*param_1 ^ 0x8000000000000000) {
  case 0:
  case 1:
  case 2:
    lVar1 = _ZN12clap_builder5error14Error_LT_F_GT_5print17h2cc09af8dae9814cE(param_1 + 1);
    if (lVar1 != 0) {
      uVar2 = _ZN12clap_builder5error14Error_LT_F_GT_3raw17h6324afda71327f4dE(lVar1);
      return uVar2;
    }
    break;
  default:
    local_318 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h7933eed99947e274E;
    local_310 = &DAT_002d12d8;
    local_308 = 2;
    local_2f0 = 0;
    local_300 = &local_320;
    local_2f8 = 1;
    local_320 = (undefined *)&local_328;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_002d82e8)(&local_310);
    (*(code *)
      PTR__ZN93__LT_forc_tx__ParseError__print__ForcTxIo_u20_as_u20_clap_builder__derive__CommandFactory_GT_7command17h69fa259739eabd51E_002d83b0
    )(&local_310);
                    /* try { // try from 00228cb1 to 00228cc6 has its CatchHandler @ 00228cf5 */
    lVar1 = (*(code *)
              PTR__ZN12clap_builder7builder7command7Command15print_long_help17h62b7ff64fb3527d1E_002d8638
            )(&local_310);
    if (lVar1 != 0) {
      uVar2 = _ZN12clap_builder5error14Error_LT_F_GT_3raw17h6324afda71327f4dE(lVar1);
      _ZN4core3ptr60drop_in_place_LT_clap_builder__builder__command__Command_GT_17h17541cdd6651dd53E
                (&local_310);
      return uVar2;
    }
    _ZN4core3ptr60drop_in_place_LT_clap_builder__builder__command__Command_GT_17h17541cdd6651dd53E
              (&local_310);
    break;
  case 4:
    local_318 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h7933eed99947e274E;
    local_310 = &DAT_002d12f8;
    local_308 = 2;
    local_2f0 = 0;
    local_300 = &local_320;
    local_2f8 = 1;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_002d82e8)(&local_310);
    return 0;
  }
  return 0;
}