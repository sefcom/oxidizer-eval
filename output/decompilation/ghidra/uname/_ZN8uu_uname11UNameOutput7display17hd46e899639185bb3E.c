undefined8 * _ZN8uu_uname11UNameOutput7display17hd46e899639185bb3E(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_28;
  
  local_70 = param_2 + 0x18;
  local_a8 = 0;
  local_68 = param_2 + 0x30;
  local_60 = param_2 + 0x48;
  local_58 = param_2 + 0x60;
  uStack_a0 = 1;
  local_50 = param_2 + 0x78;
  local_48 = param_2 + 0x90;
  local_40 = param_2 + 0xa8;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_80 = 8;
  local_38 = 0;
  local_28 = 0;
  local_78 = param_2;
  while (lVar1 = _ZN116__LT_core__iter__adapters__flatten__FlattenCompat_LT_I_C_U_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h235ca32fda697424E
                           (&local_90), lVar1 != 0) {
                    /* try { // try from 00151b68 to 00151b77 has its CatchHandler @ 00151b9a */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hb3f89bf696acadb6E
              (&local_a8,*(long *)(lVar1 + 8),*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8));
    _ZN5alloc6string6String4push17h0ede46164189e411E(&local_a8);
  }
  param_1[2] = local_98;
  *param_1 = local_a8;
  param_1[1] = uStack_a0;
  return param_1;
}