void _ZN5uu_pr11print_error17hae74ddad01a055bbE(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_48;
  undefined *local_40;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined **local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48 = param_2;
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_1,&DAT_00166ae0,0x10);
  if (cVar1 == '\0') {
    local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0e2d6c98197517ebE;
    local_30 = &DAT_00409200;
    local_28 = 2;
    local_10 = 0;
    local_20 = &local_40;
    local_18 = 1;
    local_40 = (undefined *)&local_48;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_30);
  }
  return;
}