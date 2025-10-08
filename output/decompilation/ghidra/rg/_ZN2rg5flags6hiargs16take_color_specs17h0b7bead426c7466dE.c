void _ZN2rg5flags6hiargs16take_color_specs17h0b7bead426c7466dE(undefined8 param_1,long param_2)

{
  uint6 uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint6 *local_40;
  uint6 *local_38;
  
  (*(code *)PTR__ZN12grep_printer5color19default_color_specs17hffbcc9f35fc6c155E_005271e8)
            (&local_58);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_5drain17he31301956beb7ba7E(&local_40,param_2 + 0xe0);
  while (local_40 != local_38) {
    uVar1 = *local_40;
    local_40 = (uint6 *)((long)local_40 + 6);
                    /* try { // try from 003526b2 to 003526bc has its CatchHandler @ 003526fa */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h2b40c0f3a56d230eE
              (&local_58,(ulong)uVar1,&PTR_s_crates_core_flags_hiargs_rs_004eb1f0);
  }
  _ZN4core3ptr87drop_in_place_LT_alloc__vec__drain__Drain_LT_grep_printer__color__UserColorSpec_GT__GT_17h64412e075774613fE
            (&local_40);
                    /* try { // try from 003526d3 to 003526de has its CatchHandler @ 003526f5 */
  (*(code *)PTR__ZN12grep_printer5color10ColorSpecs3new17h285108ed7667a029E_005271f0)
            (param_1,local_50,local_48);
  _ZN4core3ptr78drop_in_place_LT_alloc__vec__Vec_LT_grep_printer__color__UserColorSpec_GT__GT_17hfc23f7e53dc8fcc5E
            (local_58,local_50);
  return;
}