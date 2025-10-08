uint _ZN3uvx4main17h46717cb7913c9f08E(void)

{
  uint uVar1;
  undefined8 local_60;
  int local_58;
  uint local_54;
  undefined8 local_50;
  undefined8 *local_48;
  undefined *local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  _ZN3uvx3run17he42f7266f97e898dE(&local_58);
  if (local_58 == 1) {
    local_60 = local_50;
    local_48 = &local_60;
    local_40 = 
    PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_00165e70
    ;
    local_38 = &PTR_s_error__001630a0;
    local_30 = 2;
    local_18 = 0;
    local_28 = &local_48;
    local_20 = 1;
                    /* try { // try from 0011b2b7 to 0011b2c1 has its CatchHandler @ 0011b2ed */
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00165e78)(&local_38);
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h65e5ef1b69c12763E(local_60);
    return 2;
  }
  uVar1 = 2;
  if ((local_54 & 0x7f) == 0) {
    uVar1 = local_54 >> 8;
  }
  return uVar1;
}