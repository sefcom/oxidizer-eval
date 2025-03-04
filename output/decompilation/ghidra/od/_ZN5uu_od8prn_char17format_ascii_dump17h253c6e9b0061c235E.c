undefined8 *
_ZN5uu_od8prn_char17format_ascii_dump17h253c6e9b0061c235E
          (undefined8 *param_1,long param_2,long param_3)

{
  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_48 = 0;
  uStack_40 = 1;
  local_38 = 0;
                    /* try { // try from 001d5a4e to 001d5a5a has its CatchHandler @ 001d5b02 */
  _ZN5alloc6string6String4push17h859ae11851fd8b8eE(&local_48,0x3e);
  local_28 = param_3 + param_2;
  local_30 = param_2;
  pbVar1 = (byte *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hacde45113f50203eE
                             (&local_30);
  if (pbVar1 != (byte *)0x0) {
    do {
      if ((byte)(*pbVar1 - 0x20) < 0x5f) {
        lVar2 = (ulong)*pbVar1 * 0x10;
        uVar3 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17h2f8c5b40bc40bd5dE
                          (*(long *)(_ZN5uu_od8prn_char7C_CHARS17h05ab81629a83a794E + lVar2),
                           *(long *)(_ZN5uu_od8prn_char7C_CHARS17h05ab81629a83a794E + lVar2 + 8) +
                           *(long *)(_ZN5uu_od8prn_char7C_CHARS17h05ab81629a83a794E + lVar2));
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h35da95ead3d0349fE(&local_48,uVar3);
      }
      else {
                    /* try { // try from 001d5a90 to 001d5ad3 has its CatchHandler @ 001d5b04 */
        _ZN5alloc6string6String4push17h859ae11851fd8b8eE(&local_48,0x2e);
      }
      pbVar1 = (byte *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hacde45113f50203eE
                                 (&local_30);
    } while (pbVar1 != (byte *)0x0);
  }
                    /* try { // try from 001d5ad6 to 001d5ae2 has its CatchHandler @ 001d5b02 */
  _ZN5alloc6string6String4push17h859ae11851fd8b8eE(&local_48,0x3c);
  param_1[2] = local_38;
  *param_1 = local_48;
  param_1[1] = uStack_40;
  return param_1;
}