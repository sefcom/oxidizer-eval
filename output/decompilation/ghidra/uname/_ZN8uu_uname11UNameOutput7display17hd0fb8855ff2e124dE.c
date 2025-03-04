undefined8 *
_ZN8uu_uname11UNameOutput7display17hd0fb8855ff2e124dE(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_28;
  
  plVar1 = (long *)0x0;
  local_88 = param_2;
  if (*param_2 == -0x8000000000000000) {
    local_88 = plVar1;
  }
  local_80 = param_2 + 3;
  if (param_2[3] == -0x8000000000000000) {
    local_80 = plVar1;
  }
  local_a8 = 0;
  local_78 = param_2 + 6;
  if (param_2[6] == -0x8000000000000000) {
    local_78 = plVar1;
  }
  local_70 = param_2 + 9;
  if (param_2[9] == -0x8000000000000000) {
    local_70 = plVar1;
  }
  local_68 = param_2 + 0xc;
  if (param_2[0xc] == -0x8000000000000000) {
    local_68 = plVar1;
  }
  uStack_a0 = 1;
  local_60 = param_2 + 0xf;
  if (param_2[0xf] == -0x8000000000000000) {
    local_60 = plVar1;
  }
  local_58 = param_2 + 0x12;
  if (param_2[0x12] == -0x8000000000000000) {
    local_58 = plVar1;
  }
  local_50 = param_2 + 0x15;
  if (param_2[0x15] == -0x8000000000000000) {
    local_50 = plVar1;
  }
  local_98 = 0;
  local_90 = 1;
  local_48 = 0;
  local_40 = 8;
  local_38 = 0;
  local_28 = 0;
  while( true ) {
                    /* try { // try from 001a84a0 to 001a84cf has its CatchHandler @ 001a8501 */
    lVar2 = _ZN116__LT_core__iter__adapters__flatten__FlattenCompat_LT_I_C_U_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he5291530aa6c89adE
                      (&local_90);
    if (lVar2 == 0) break;
    uVar3 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17h8a021e817a756358E
                      (*(long *)(lVar2 + 8),*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h7d7b704ad484e1bbE(&local_a8,uVar3);
    _ZN5alloc6string6String4push17h859ae11851fd8b8eE(&local_a8);
  }
                    /* try { // try from 001a84d2 to 001a84db has its CatchHandler @ 001a84fc */
  _ZN4core3ptr165drop_in_place_LT_core__iter__adapters__flatten__Flatten_LT_core__array__iter__IntoIter_LT_core__option__Option_LT__RF_alloc__string__String_GT__C_8_usize_GT__GT__GT_17h58996adff40e52b0E
            (&local_90);
  param_1[2] = local_98;
  *param_1 = local_a8;
  param_1[1] = uStack_a0;
  return param_1;
}