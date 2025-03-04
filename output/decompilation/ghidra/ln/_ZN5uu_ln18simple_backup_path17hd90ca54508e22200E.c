void _ZN5uu_ln18simple_backup_path17hd90ca54508e22200E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
            (&local_50);
  if (CONCAT44(uStack_4c,local_50) == 0) {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hfc9b5b21d7faec10E
              (&local_50,CONCAT44(uStack_44,uStack_48),local_40);
    local_28 = local_40;
    local_38 = local_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uVar1 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17ha8b4fec3fb47d555E
                      (param_4,param_5 + param_4);
                    /* try { // try from 001bae7b to 001bae87 has its CatchHandler @ 001baeb0 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h4be0e8df4d8349afE(&local_38,uVar1);
    param_1[2] = local_28;
    *param_1 = CONCAT44(uStack_34,local_38);
    param_1[1] = CONCAT44(uStack_2c,uStack_30);
    return;
  }
  uVar1 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_s_src_uu_ln_src_ln_rs_0022d0d8);
                    /* catch() { ... } // from try @ 001bae7b with catch @ 001baeb0 */
                    /* try { // try from 001baeb3 to 001baebc has its CatchHandler @ 001baec5 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h903473fdb0d332f1E(&local_38);
  _Unwind_Resume(uVar1);
  return;
}