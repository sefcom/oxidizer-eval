long _ZN9meilitool7upgrade5v1_1018update_date_format17h4c841e4eb7f7cd1fE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_68;
  undefined8 local_60;
  int local_58 [2];
  long local_50;
  undefined4 local_48;
  undefined local_40 [24];
  
  local_68 = param_1;
  local_60 = param_2;
  _ZN9meilitool25try_opening_poly_database17h4a7551578c1a0ea7E(local_40,param_3,param_4,"main",4);
  _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17haa6541e505e05a06E
            (local_58,local_40,&local_68);
  lVar1 = local_50;
  if ((local_58[0] != 1) &&
     (lVar1 = _ZN9meilitool7upgrade5v1_1015date_round_trip17h83c3ac20002e9836E
                        (param_4,param_1,param_2,local_50,local_48,"created-at"), lVar1 == 0)) {
    lVar1 = _ZN9meilitool7upgrade5v1_1015date_round_trip17h83c3ac20002e9836E
                      (param_4,local_68,local_60,local_50,local_48,"updated-at");
  }
  return lVar1;
}