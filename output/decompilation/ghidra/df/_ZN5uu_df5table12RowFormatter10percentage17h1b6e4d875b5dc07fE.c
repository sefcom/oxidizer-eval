void _ZN5uu_df5table12RowFormatter10percentage17h1b6e4d875b5dc07fE
               (double param_1,undefined8 param_2,ulong param_3)

{
  undefined8 local_50;
  undefined8 *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  char *local_18;
  undefined8 local_10;
  
  if ((param_3 & 1) != 0) {
    local_50 = (*(code *)PTR_ceil_0020a1b0)(param_1 * _s__00119b28);
    local_48 = &local_50;
    local_40 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17h78a04ef564c69060E_0020a0c0
    ;
    local_38 = &DAT_00202e98;
    local_30 = 2;
    local_18 = "";
    local_10 = 1;
    local_28 = &local_48;
    local_20 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h7e34be96cbbb4028E(param_2,&local_38);
    return;
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h40d1dda03127eab3E
            (param_2,"-",1);
  return;
}