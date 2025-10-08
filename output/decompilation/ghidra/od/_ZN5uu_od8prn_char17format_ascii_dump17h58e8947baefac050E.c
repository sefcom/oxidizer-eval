void _ZN5uu_od8prn_char17format_ascii_dump17h58e8947baefac050E
               (undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = 0;
  uStack_40 = 1;
  local_38 = 0;
                    /* try { // try from 0016b2c1 to 0016b2cd has its CatchHandler @ 0016b357 */
  _ZN5alloc6string6String4push17h0ede46164189e411E(&local_48,0x3e);
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      if ((byte)(*(byte *)(param_2 + lVar2) - 0x20) < 0x5f) {
        lVar1 = (ulong)*(byte *)(param_2 + lVar2) * 0x10;
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h6f45b21ab07ea0a9E
                  (&local_48,*(long *)(_ZN5uu_od8prn_char7C_CHARS17hf9c44c07aa090c89E + lVar1),
                   *(long *)(_ZN5uu_od8prn_char7C_CHARS17hf9c44c07aa090c89E + lVar1 + 8) +
                   *(long *)(_ZN5uu_od8prn_char7C_CHARS17hf9c44c07aa090c89E + lVar1));
      }
      else {
                    /* try { // try from 0016b2f0 to 0016b328 has its CatchHandler @ 0016b359 */
        _ZN5alloc6string6String4push17h0ede46164189e411E(&local_48,0x2e);
      }
      lVar2 = lVar2 + 1;
    } while (param_3 != lVar2);
  }
                    /* try { // try from 0016b32b to 0016b337 has its CatchHandler @ 0016b357 */
  _ZN5alloc6string6String4push17h0ede46164189e411E(&local_48,0x3c);
  param_1[2] = local_38;
  *param_1 = local_48;
  param_1[1] = uStack_40;
  return;
}