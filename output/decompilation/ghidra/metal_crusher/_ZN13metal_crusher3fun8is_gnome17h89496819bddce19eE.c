undefined4 _ZN13metal_crusher3fun8is_gnome17h89496819bddce19eE(void)

{
  undefined4 uVar1;
  undefined local_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  byte local_28 [32];
  
  _ZN3std3env3var17hfb15700640056880E(local_28,"XDG_CURRENT_DESKTOP",0x13);
  if ((local_28[0] & 1) != 0) {
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h2dda2584fb36613aE
              (local_28);
    return 0;
  }
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hf281b12ef98186e8E
            (local_40,local_28,&PTR_s_src_fun_rs_00696640);
                    /* try { // try from 00487176 to 00487186 has its CatchHandler @ 0048719b */
  uVar1 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h4cb49604a7270c97E
                    ("GNOME",5,local_38,local_30);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha04b33545db7d743E(local_40);
  return uVar1;
}