char * _ZN5uu_ls24is_color_compatible_term17h34ae6fe86d1936c0E(void)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char *pcVar4;
  long local_88;
  long local_80;
  undefined local_68 [8];
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  undefined local_40 [16];
  long local_30;
  
  _ZN3std3env3var17hb36d41fbb9604b02E(&local_88,&DAT_001cfe10,4);
  lVar1 = local_88;
  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h1be309cc02ffb89cE
            (&local_88);
  _ZN3std3env3var17hb36d41fbb9604b02E(&local_88,"COLORTERM",9);
  lVar2 = local_88;
  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h1be309cc02ffb89cE
            (&local_88);
  _ZN3std3env3var17hb36d41fbb9604b02E(&local_88,&DAT_001cfe10,4);
  _ZN4core6result19Result_LT_T_C_E_GT_17unwrap_or_default17h82931214c46f0834E(local_68,&local_88);
                    /* try { // try from 00291b79 to 00291b88 has its CatchHandler @ 00291c34 */
  _ZN3std3env3var17hb36d41fbb9604b02E(&local_88,"COLORTERM",9);
  _ZN4core6result19Result_LT_T_C_E_GT_17unwrap_or_default17h82931214c46f0834E(local_40,&local_88);
  if (((lVar1 == 0) && (lVar2 == 0 && local_58 == 0)) && (local_30 == 0)) {
LAB_00291bef:
    pcVar4 = (char *)0x0;
  }
  else {
    if (local_58 != 0) {
      local_50 = local_60;
      local_48 = local_58;
      local_88 = *(long *)PTR_PTR_0048fdb8;
      local_80 = local_88 + 0x1b0;
                    /* try { // try from 00291bda to 00291be6 has its CatchHandler @ 00291c15 */
      cVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17ha1eb65c6ace6cb22E
                        (&local_88,&local_50);
      if (cVar3 == '\0') goto LAB_00291bef;
    }
    pcVar4 = "r --sort";
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(local_40);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(local_68);
  return pcVar4;
}